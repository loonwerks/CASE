#! /bin/bash

set -Eeuxo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${SIREUM_HOME:=$BASE_DIR/Sireum}"
: "${FMIDE_DIR:=$SIREUM_HOME/bin/linux/fmide}"
: "${eclipseRelease:=2020-06}"
: "${OSATE_VERSION:=2.9.0}"
: "${OSATE_URL:=https://osate-build.sei.cmu.edu/download/osate/stable/${OSATE_VERSION}/products/osate2-${OSATE_VERSION}-vfinal-linux.gtk.x86_64.tar.gz}"
: "${AGREE_UPDATE_SITE:=https://raw.githubusercontent.com/loonwerks/AGREE-Updates/master/agree_2.7.0/}"
: "${AGREE_FEATURE_ID:=com.rockwellcollins.atc.agree.feature.feature.group}"
: "${RESOLUTE_UPDATE_SITE:=https://raw.githubusercontent.com/loonwerks/Resolute-Updates/master/resolute_2.7.0/}"
: "${RESOLUTE_FEATURE_ID:=com.rockwellcollins.atc.resolute.feature.feature.group}"
: "${BRIEFCASE_UPDATE_SITE:=https://download.eclipse.org/releases/$eclipseRelease,http://ca-trustedsystems-dev-us-east-1.s3-website-us-east-1.amazonaws.com/p2/snapshots/briefcase/}"
: "${BRIEFCASE_FEATURE_ID:=com.collins.trustedsystems.briefcase.feature.feature.group}"
: "${HAMR_UPDATE_SITE:=https://raw.githubusercontent.com/sireum/hamr-plugin-update-site/master}"
: "${HAMR_FEATURE_ID:=org.sireum.aadl.osate.hamr.feature.feature.group}"

rm -rf ${FMIDE_DIR}
mkdir -p ${FMIDE_DIR}
pushd ${FMIDE_DIR}
curl ${OSATE_URL} | tar xz
popd

${FMIDE_DIR}/osate -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository ${AGREE_UPDATE_SITE} -installIU ${AGREE_FEATURE_ID}
${FMIDE_DIR}/osate -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository ${RESOLUTE_UPDATE_SITE} -installIU ${RESOLUTE_FEATURE_ID}
${FMIDE_DIR}/osate -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository ${BRIEFCASE_UPDATE_SITE} -installIU ${BRIEFCASE_FEATURE_ID}
${FMIDE_DIR}/osate -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository ${HAMR_UPDATE_SITE} -installIU ${HAMR_FEATURE_ID}

