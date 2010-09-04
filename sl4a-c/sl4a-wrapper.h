#ifndef SL4A_WRAPPER_H
#define SL4A_WRAPPER_H

// automatically generated API wrapper for SL4A

#include "sl4a-rpc.h"
#include <jansson.h>

// ----------
void sl4a_addContextMenuItem(int fd, char* a, char* b, json_t* c);

void sl4a_addOptionsMenuItem(int fd, char* a, char* b, json_t* c, char* d);

int sl4a_batteryCheckPresent(int fd);

int sl4a_batteryGetHealth(int fd);

int sl4a_batteryGetLevel(int fd);

int sl4a_batteryGetPlugType(int fd);

int sl4a_batteryGetStatus(int fd);

int sl4a_batteryGetTechnology(int fd);

double sl4a_batteryGetTemperature(int fd);

double sl4a_batteryGetVoltage(int fd);

void sl4a_batteryStartMonitoring(int fd);

void sl4a_batteryStopMonitoring(int fd);

void sl4a_bluetoothAccept(int fd, char* a);

int sl4a_bluetoothConnect(int fd, char* a, char* b);

char* sl4a_bluetoothGetConnectedDeviceName(int fd);

void sl4a_bluetoothMakeDiscoverable(int fd, int a);

void sl4a_bluetoothRead(int fd, int a);

void sl4a_bluetoothReadLine(int fd);

int sl4a_bluetoothReadReady(int fd);

void sl4a_bluetoothStop(int fd);

void sl4a_bluetoothWrite(int fd, char* a);

json_t* sl4a_cameraCapturePicture(int fd, char* a, int b);

void sl4a_cameraInteractiveCapturePicture(int fd, char* a);

void sl4a_cancelRepeating(int fd, char* a);

int sl4a_checkAirplaneMode(int fd);

int sl4a_checkBluetoothState(int fd);

int sl4a_checkNetworkRoaming(int fd);

int sl4a_checkRingerSilentMode(int fd);

int sl4a_checkScreenOn(int fd);

int sl4a_checkWifiState(int fd);

void sl4a_clearContextMenu(int fd);

void sl4a_clearOptionsMenu(int fd);

json_t* sl4a_contactsGet(int fd, json_t* a);

json_t* sl4a_contactsGetAttributes(int fd);

json_t* sl4a_contactsGetById(int fd, int a, json_t* b);

int sl4a_contactsGetCount(int fd);

json_t* sl4a_contactsGetIds(int fd);

void sl4a_dialogCreateAlert(int fd, char* a, char* b);

void sl4a_dialogCreateDatePicker(int fd, int a, int b, int c);

void sl4a_dialogCreateHorizontalProgress(int fd, char* a, char* b, int c);

void sl4a_dialogCreateInput(int fd, char* a, char* b, char* c);

void sl4a_dialogCreatePassword(int fd, char* a, char* b);

void sl4a_dialogCreateSeekBar(int fd, int a, int b, char* c, char* d);

void sl4a_dialogCreateSpinnerProgress(int fd, char* a, char* b, int c);

void sl4a_dialogCreateTimePicker(int fd, int a, int b, int c);

void sl4a_dialogDismiss(int fd);

void sl4a_dialogGetInput(int fd, char* a, char* b, char* c);

void sl4a_dialogGetPassword(int fd, char* a, char* b);

char* sl4a_dialogGetResponse(int fd);

json_t* sl4a_dialogGetSelectedItems(int fd);

void sl4a_dialogSetCurrentProgress(int fd, int a);

void sl4a_dialogSetItems(int fd, json_t* a);

void sl4a_dialogSetMaxProgress(int fd, int a);

void sl4a_dialogSetMultiChoiceItems(int fd, json_t* a, json_t* b);

void sl4a_dialogSetNegativeButtonText(int fd, char* a);

void sl4a_dialogSetNeutralButtonText(int fd, char* a);

void sl4a_dialogSetPositiveButtonText(int fd, char* a);

void sl4a_dialogSetSingleChoiceItems(int fd, json_t* a, int b);

void sl4a_dialogShow(int fd);

void sl4a_forceStopPackage(int fd, char* a);

void sl4a_generateDtmfTones(int fd, char* a, int b);

json_t* sl4a_geocode(int fd, double a, double b, int c);

char* sl4a_getCellLocation(int fd);

char* sl4a_getClipboard(int fd);

char* sl4a_getDeviceId(int fd);

char* sl4a_getDeviceSoftwareVersion(int fd);

void sl4a_getInput(int fd, char* a, char* b);

char* sl4a_getIntent(int fd);

json_t* sl4a_getLastKnownLocation(int fd);

json_t* sl4a_getLaunchableApplications(int fd);

char* sl4a_getLine1Number(int fd);

int sl4a_getMaxMediaVolume(int fd);

int sl4a_getMaxRingerVolume(int fd);

int sl4a_getMediaVolume(int fd);

char* sl4a_getNeighboringCellInfo(int fd);

char* sl4a_getNetworkOperator(int fd);

char* sl4a_getNetworkOperatorName(int fd);

char* sl4a_getNetworkType(int fd);

char* sl4a_getPackageVersion(int fd, char* a);

char* sl4a_getPackageVersionCode(int fd, char* a);

void sl4a_getPassword(int fd, char* a, char* b);

char* sl4a_getPhoneType(int fd);

int sl4a_getRingerVolume(int fd);

json_t* sl4a_getRunningPackages(int fd);

int sl4a_getScreenBrightness(int fd);

int sl4a_getScreenTimeout(int fd);

char* sl4a_getSimCountryIso(int fd);

char* sl4a_getSimOperator(int fd);

char* sl4a_getSimOperatorName(int fd);

char* sl4a_getSimSerialNumber(int fd);

char* sl4a_getSimState(int fd);

char* sl4a_getSubscriberId(int fd);

char* sl4a_getVoiceMailAlphaTag(int fd);

char* sl4a_getVoiceMailNumber(int fd);

void sl4a_launch(int fd, char* a);

void sl4a_log(int fd, char* a);

void sl4a_makeToast(int fd, char* a);

void sl4a_notify(int fd, char* a, char* b);

void sl4a_onRingerSilent(int fd, char* a);

void sl4a_phoneCall(int fd, char* a);

void sl4a_phoneCallNumber(int fd, char* a);

void sl4a_phoneDial(int fd, char* a);

void sl4a_phoneDialNumber(int fd, char* a);

json_t* sl4a_pick(int fd, char* a);

json_t* sl4a_pickContact(int fd);

char* sl4a_pickPhone(int fd);

void sl4a_postEvent(int fd, char* a, char* b);

double sl4a_pulseGeneratorGetHz(int fd);

int sl4a_pulseGeneratorGetHzSamples(int fd);

int sl4a_pulseGeneratorGetLeftPulseMs(int fd);

double sl4a_pulseGeneratorGetLeftPulsePercent(int fd);

int sl4a_pulseGeneratorGetLeftPulseSamples(int fd);

double sl4a_pulseGeneratorGetRightPulseMs(int fd);

double sl4a_pulseGeneratorGetRightPulsePercent(int fd);

int sl4a_pulseGeneratorGetRightPulseSamples(int fd);

int sl4a_pulseGeneratorIsPlaying(int fd);

void sl4a_pulseGeneratorRun(int fd);

void sl4a_pulseGeneratorSetHzPercent(int fd, int a);

void sl4a_pulseGeneratorSetLeftPulsePercent(int fd, int a);

void sl4a_pulseGeneratorSetRightPulsePercent(int fd, int a);

void sl4a_pulseGeneratorStop(int fd);

void sl4a_pulseGeneratorToggleInverted(int fd);

void sl4a_pulseGeneratorTogglePlayback(int fd);

void sl4a_pulseGenteratorSetHz(int fd, double a);

char* sl4a_readBatteryData(int fd);

json_t* sl4a_readLocation(int fd);

json_t* sl4a_readPhoneState(int fd);

json_t* sl4a_readSensors(int fd);

json_t* sl4a_readSignalStrengths(int fd);

json_t* sl4a_receiveEvent(int fd);

char* sl4a_recognizeSpeech(int fd, char* a, char* b, char* c);

void sl4a_recorderCaptureVideo(int fd, char* a, double b, int c);

void sl4a_recorderStartMicrophone(int fd, char* a);

void sl4a_recorderStop(int fd);

int sl4a_requiredVersion(int fd, int a);

json_t* sl4a_scanBarcode(int fd);

void sl4a_scheduleAbsolute(int fd, char* a, double b, int c);

void sl4a_scheduleInexactRepeating(int fd, double a, char* b, int c);

void sl4a_scheduleRelative(int fd, char* a, double b, int c);

void sl4a_scheduleRepeating(int fd, double a, double b, int c);

void sl4a_search(int fd, char* a);

void sl4a_sendEmail(int fd, char* a, char* b, char* c, char* d);

double sl4a_sensorsGetAccuracy(int fd);

double sl4a_sensorsGetLight(int fd);

json_t* sl4a_sensorsReadAccelerometer(int fd);

json_t* sl4a_sensorsReadMagnetometer(int fd);

json_t* sl4a_sensorsReadOrientation(int fd);

void sl4a_setClipboard(int fd, char* a);

void sl4a_setMediaVolume(int fd, int a);

void sl4a_setRingerVolume(int fd, int a);

void sl4a_setScreenBrightness(int fd, int a);

void sl4a_setScreenTimeout(int fd, int a);

int sl4a_smsDeleteMessage(int fd, int a);

json_t* sl4a_smsGetAttributes(int fd);

json_t* sl4a_smsGetMessageById(int fd, int a, json_t* b);

int sl4a_smsGetMessageCount(int fd, int a, char* b);

json_t* sl4a_smsGetMessageIds(int fd, int a, char* b);

json_t* sl4a_smsGetMessages(int fd, int a, char* b, json_t* c);

int sl4a_smsMarkMessageRead(int fd, json_t* a);

void sl4a_smsSend(int fd, char* a, char* b);

void sl4a_startActivity(int fd, char* a, char* b, char* c, json_t* d, int e);

json_t* sl4a_startActivityForResult(int fd, char* a, char* b, char* c, json_t* d);

void sl4a_startInteractiveVideoRecording(int fd, char* a);

void sl4a_startLocating(int fd, int a, int b);

void sl4a_startSensing(int fd, int a);

void sl4a_startTrackingPhoneState(int fd);

void sl4a_startTrackingSignalStrengths(int fd);

void sl4a_stopLocating(int fd);

void sl4a_stopSensing(int fd);

void sl4a_stopTrackingPhoneState(int fd);

void sl4a_stopTrackingSignalStrengths(int fd);

int sl4a_toggleAirplaneMode(int fd, int a);

int sl4a_toggleBluetoothState(int fd, int a);

int sl4a_toggleRingerSilentMode(int fd, int a);

int sl4a_toggleWifiState(int fd, int a);

int sl4a_ttsIsSpeaking(int fd);

void sl4a_ttsSpeak(int fd, char* a);

void sl4a_vibrate(int fd, int a);

void sl4a_view(int fd, char* a, char* b, json_t* c);

void sl4a_viewContacts(int fd);

void sl4a_viewHtml(int fd, char* a);

void sl4a_viewMap(int fd, char* a);

json_t* sl4a_waitForEvent(int fd, char* a, int b);

void sl4a_wakeLockAcquireBright(int fd);

void sl4a_wakeLockAcquireDim(int fd);

void sl4a_wakeLockAcquireFull(int fd);

void sl4a_wakeLockAcquirePartial(int fd);

void sl4a_wakeLockRelease(int fd);

void sl4a_webViewShow(int fd, char* a, int b);

int sl4a_wifiDisconnect(int fd);

json_t* sl4a_wifiGetConnectionInfo(int fd);

json_t* sl4a_wifiGetScanResults(int fd);

void sl4a_wifiLockAcquireFull(int fd);

void sl4a_wifiLockAcquireScanOnly(int fd);

void sl4a_wifiLockRelease(int fd);

int sl4a_wifiReassociate(int fd);

int sl4a_wifiReconnect(int fd);

int sl4a_wifiStartScan(int fd);

#endif
