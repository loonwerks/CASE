@echo off
setlocal EnableExtensions EnableDelayedExpansion

set FMIDE_DIR=fmide
set eclipseRelease=2020-06
set OSATE_VERSION=2.9.0
set OSATE_URL=https://osate-build.sei.cmu.edu/download/osate/stable/%OSATE_VERSION%/products/osate2-%OSATE_VERSION%-vfinal-win32.win32.x86_64.zip
set AGREE_UPDATE_SITE=http://ca-trustedsystems-dev-us-east-1.s3-website-us-east-1.amazonaws.com/p2/snapshots/agree/
set AGREE_FEATURE_ID=com.rockwellcollins.atc.agree.feature.feature.group
set RESOLUTE_UPDATE_SITE=http://ca-trustedsystems-dev-us-east-1.s3-website-us-east-1.amazonaws.com/p2/snapshots/resolute/
set RESOLUTE_FEATURE_ID=com.rockwellcollins.atc.resolute.feature.feature.group
set BRIEFCASE_UPDATE_SITE=https://download.eclipse.org/releases/%eclipseRelease%,http://ca-trustedsystems-dev-us-east-1.s3-website-us-east-1.amazonaws.com/p2/snapshots/briefcase/
set BRIEFCASE_FEATURE_ID=com.collins.trustedsystems.briefcase.feature.feature.group
set HAMR_UPDATE_SITE=https://raw.githubusercontent.com/sireum/hamr-plugin-update-site/master
set HAMR_FEATURE_ID=org.sireum.aadl.osate.hamr.feature.feature.group
set METALS_UPDATE_SITE=https://download.eclipse.org/releases/%eclipseRelease%,http://scalameta.org/metals-eclipse/update
set METALS_FEATURE_ID=lsp.scala.feature.feature.group

if exist %FMIDE_DIR%\ echo Deleting previous fmide version
rd /s /q %FMIDE_DIR%
mkdir %FMIDE_DIR%
pushd %FMIDE_DIR%
echo Downloading OSATE
curl %OSATE_URL% --output osate2-%OSATE_VERSION%-vfinal-win32.win32.x86_64.zip
if not exist %cd%\osate2-%OSATE_VERSION%-vfinal-win32.win32.x86_64.zip (
	echo Unable to download OSATE
	exit /b
)
echo Extracting
Call :UnZipFile "%cd%" "%cd%\osate2-%OSATE_VERSION%-vfinal-win32.win32.x86_64.zip"
del /f /q osate2-%OSATE_VERSION%-vfinal-win32.win32.x86_64.zip

set INI_FILE=%cd%\osate.ini
set TMP_INI_FILE=%cd%\osate_tmp.ini
for /f %%x in (%INI_FILE%) do (
    echo %%x>>%TMP_INI_FILE%
 	if "%%x"=="-vmargs" (
 		echo -Dorg.eclipse.ecf.provider.filetransfer.excludeContributors=org.eclipse.ecf.provider.filetransfer.httpclient4>>%TMP_INI_FILE%
 	)
)
move %TMP_INI_FILE% %INI_FILE%

echo Installing CASE tools
osate.exe -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository %AGREE_UPDATE_SITE% -installIU %AGREE_FEATURE_ID%
osate.exe -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository %RESOLUTE_UPDATE_SITE% -installIU %RESOLUTE_FEATURE_ID%
osate.exe -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository %BRIEFCASE_UPDATE_SITE% -installIU %BRIEFCASE_FEATURE_ID%
osate.exe -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository %HAMR_UPDATE_SITE% -installIU %HAMR_FEATURE_ID%
osate.exe -nosplash -console -consoleLog -application org.eclipse.equinox.p2.director -repository %METALS_UPDATE_SITE% -installIU %METALS_FEATURE_ID%

popd

echo Setup complete

exit /b


:UnZipFile <ExtractTo> <newzipfile>
set vbs="%temp%\_.vbs"
if exist %vbs% del /f /q %vbs%
>%vbs%  echo Set fso = CreateObject("Scripting.FileSystemObject")
>>%vbs% echo If NOT fso.FolderExists(%1) Then
>>%vbs% echo fso.CreateFolder(%1)
>>%vbs% echo End If
>>%vbs% echo set objShell = CreateObject("Shell.Application")
>>%vbs% echo set FilesInZip=objShell.NameSpace(%2).items
>>%vbs% echo objShell.NameSpace(%1).CopyHere(FilesInZip)
>>%vbs% echo Set fso = Nothing
>>%vbs% echo Set objShell = Nothing
cscript //nologo %vbs%
if exist %vbs% del /f /q %vbs%