#! /bin/bash

set -Eeuxo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${FMIDE_DIR:=$BASE_DIR/FMIDE}"
: "${eclipseRelease:=2020-06}"
: "${OSATE_VERSION:=2.9.0}"
: "${OSATE_URL:=https://osate-build.sei.cmu.edu/download/osate/stable/${OSATE_VERSION}/products/osate2-${OSATE_VERSION}-vfinal-linux.gtk.x86_64.tar.gz}"
: "${AGREE_UPDATE_SITE:=https://raw.githubusercontent.com/loonwerks/AGREE-Updates/master/agree_2.7.0/}"
: "${AGREE_FEATURE_ID:=com.rockwellcollins.atc.agree.feature.feature.group}"
: "${RESOLUTE_UPDATE_SITE:=https://raw.githubusercontent.com/loonwerks/Resolute-Updates/master/resolute_2.7.0/}"
: "${RESOLUTE_FEATURE_ID:=com.rockwellcollins.atc.resolute.feature.feature.group}"
: "${BRIEFCASE_UPDATE_SITE:=https://download.eclipse.org/releases/$eclipseRelease,https://raw.githubusercontent.com/loonwerks/BriefCASE-Updates/master/briefcase_0.5.0/}"
: "${BRIEFCASE_FEATURE_ID:=com.collins.trustedsystems.briefcase.feature.feature.group}"
: "${HAMR_UPDATE_SITE:=https://raw.githubusercontent.com/sireum/hamr-plugin-update-site/CASE-Tool-Assessment-4}"
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

echo "export PATH=\$PATH:${FMIDE_DIR}" >> "$HOME/.bashrc"

cd ${FMIDE_DIR}
ln -s osate fmide

echo "FMIDE is installed at ${FMIDE_DIR}"

