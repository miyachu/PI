#!/usr/bin/env bash

set -e

OPENCONFIG_ROOT="/home/cxy/PI/proto/openconfig/public/release/models"

SEARCH_DIRS="-s /home/cxy/PI/proto/yang \
-s $OPENCONFIG_ROOT \
-s $OPENCONFIG_ROOT/types"

YANGS="/home/cxy/PI/proto/yang/iana-if-type.yang \
$OPENCONFIG_ROOT/interfaces/openconfig-interfaces.yang \
$OPENCONFIG_ROOT/platform/openconfig-platform.yang"

# Sysrepo deamon complains if this is missing
YANGS="$YANGS /home/cxy/PI/proto/yang/ietf-netconf-notifications.yang"

# Sysrepocfg cannot export the openconfig-interfaces data tree if this is not
# explicitly installed.
# See https://github.com/sysrepo/sysrepo/issues/1015
# I don't know if this is the intended behavior or an issue, so in the meantime
# I explicitly install it.
YANGS="$YANGS /home/cxy/PI/proto/yang/ietf-interfaces@2014-05-08.yang"

# openconfig-interfaces.yang uses a "when" statement on state data, which is not
# correct YANG. This is my workaround.
# See https://github.com/openconfig/public/issues/108
# The generated file is never cleaned up so 'make distcheck' will probably fail
mkdir -p /home/cxy/PI/proto/sysrepo
/bin/sed 's;when "oc-if:state/oc-if:type;when "oc-if:config/oc-if:type;g' \
 $OPENCONFIG_ROOT/interfaces/openconfig-if-ethernet.yang > /home/cxy/PI/proto/sysrepo/openconfig-if-ethernet.yang
YANGS="$YANGS /home/cxy/PI/proto/sysrepo/openconfig-if-ethernet.yang"

# openconfig-yang-types.yang uses regex anchors (POSIX regex) which is not
# correct YANG. This is my workaround.
# See https://github.com/openconfig/public/issues/44
/bin/sed "s;\(\s'\)\^;\1;g" \
 $OPENCONFIG_ROOT/types/openconfig-yang-types.yang > /home/cxy/PI/proto/sysrepo/openconfig-yang-types.yang
/bin/sed -i "s;\$\('\;\);\1;g"  /home/cxy/PI/proto/sysrepo/openconfig-yang-types.yang
YANGS="$YANGS /home/cxy/PI/proto/sysrepo/openconfig-yang-types.yang"

for YANG in $YANGS; do
    sysrepoctl -i $SEARCH_DIRS --yang $YANG
done
