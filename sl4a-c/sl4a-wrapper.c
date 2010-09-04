// automatically generated API wrapper for SL4A

#include "sl4a-wrapper.h"

void sl4a_addContextMenuItem(int fd, char* a, char* b, json_t* c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "addContextMenuItem", 'v', (void*) &ret,
                  "sso", a, b, c);
  return;
}

void sl4a_addOptionsMenuItem(int fd, char* a, char* b, json_t* c, char* d) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "addOptionsMenuItem", 'v', (void*) &ret,
                  "ssos", a, b, c, d);
  return;
}

int sl4a_batteryCheckPresent(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryCheckPresent", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_batteryGetHealth(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryGetHealth", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_batteryGetLevel(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryGetLevel", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_batteryGetPlugType(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryGetPlugType", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_batteryGetStatus(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryGetStatus", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_batteryGetTechnology(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "batteryGetTechnology", 'i', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_batteryGetTemperature(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "batteryGetTemperature", 'r', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_batteryGetVoltage(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "batteryGetVoltage", 'r', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_batteryStartMonitoring(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "batteryStartMonitoring", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_batteryStopMonitoring(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "batteryStopMonitoring", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_bluetoothAccept(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothAccept", 'v', (void*) &ret,
                  "s", a);
  return;
}

int sl4a_bluetoothConnect(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "bluetoothConnect", 'b', (void*) &ret,
                  "ss", a, b);
  return ret;
}

char* sl4a_bluetoothGetConnectedDeviceName(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "bluetoothGetConnectedDeviceName", 's', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_bluetoothMakeDiscoverable(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothMakeDiscoverable", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_bluetoothRead(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothRead", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_bluetoothReadLine(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothReadLine", 'v', (void*) &ret,
                  "v");
  return;
}

int sl4a_bluetoothReadReady(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "bluetoothReadReady", 'b', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_bluetoothStop(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothStop", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_bluetoothWrite(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "bluetoothWrite", 'v', (void*) &ret,
                  "s", a);
  return;
}

json_t* sl4a_cameraCapturePicture(int fd, char* a, int b) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "cameraCapturePicture", 'o', (void*) &ret,
                  "sb", a, b);
  return ret;
}

void sl4a_cameraInteractiveCapturePicture(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "cameraInteractiveCapturePicture", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_cancelRepeating(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "cancelRepeating", 'v', (void*) &ret,
                  "s", a);
  return;
}

int sl4a_checkAirplaneMode(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkAirplaneMode", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_checkBluetoothState(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkBluetoothState", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_checkNetworkRoaming(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkNetworkRoaming", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_checkRingerSilentMode(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkRingerSilentMode", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_checkScreenOn(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkScreenOn", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_checkWifiState(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "checkWifiState", 'b', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_clearContextMenu(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "clearContextMenu", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_clearOptionsMenu(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "clearOptionsMenu", 'v', (void*) &ret,
                  "v");
  return;
}

json_t* sl4a_contactsGet(int fd, json_t* a) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "contactsGet", 'o', (void*) &ret,
                  "a", a);
  return ret;
}

json_t* sl4a_contactsGetAttributes(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "contactsGetAttributes", 'a', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_contactsGetById(int fd, int a, json_t* b) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "contactsGetById", 'a', (void*) &ret,
                  "ia", a, b);
  return ret;
}

int sl4a_contactsGetCount(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "contactsGetCount", 'i', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_contactsGetIds(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "contactsGetIds", 'a', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_dialogCreateAlert(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateAlert", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

void sl4a_dialogCreateDatePicker(int fd, int a, int b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateDatePicker", 'v', (void*) &ret,
                  "iii", a, b, c);
  return;
}

void sl4a_dialogCreateHorizontalProgress(int fd, char* a, char* b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateHorizontalProgress", 'v', (void*) &ret,
                  "ssi", a, b, c);
  return;
}

void sl4a_dialogCreateInput(int fd, char* a, char* b, char* c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateInput", 'v', (void*) &ret,
                  "sss", a, b, c);
  return;
}

void sl4a_dialogCreatePassword(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreatePassword", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

void sl4a_dialogCreateSeekBar(int fd, int a, int b, char* c, char* d) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateSeekBar", 'v', (void*) &ret,
                  "iiss", a, b, c, d);
  return;
}

void sl4a_dialogCreateSpinnerProgress(int fd, char* a, char* b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateSpinnerProgress", 'v', (void*) &ret,
                  "ssi", a, b, c);
  return;
}

void sl4a_dialogCreateTimePicker(int fd, int a, int b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogCreateTimePicker", 'v', (void*) &ret,
                  "iib", a, b, c);
  return;
}

void sl4a_dialogDismiss(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogDismiss", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_dialogGetInput(int fd, char* a, char* b, char* c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogGetInput", 'v', (void*) &ret,
                  "sss", a, b, c);
  return;
}

void sl4a_dialogGetPassword(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogGetPassword", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

char* sl4a_dialogGetResponse(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "dialogGetResponse", 's', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_dialogGetSelectedItems(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "dialogGetSelectedItems", 'a', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_dialogSetCurrentProgress(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetCurrentProgress", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_dialogSetItems(int fd, json_t* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetItems", 'v', (void*) &ret,
                  "a", a);
  return;
}

void sl4a_dialogSetMaxProgress(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetMaxProgress", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_dialogSetMultiChoiceItems(int fd, json_t* a, json_t* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetMultiChoiceItems", 'v', (void*) &ret,
                  "aa", a, b);
  return;
}

void sl4a_dialogSetNegativeButtonText(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetNegativeButtonText", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_dialogSetNeutralButtonText(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetNeutralButtonText", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_dialogSetPositiveButtonText(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetPositiveButtonText", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_dialogSetSingleChoiceItems(int fd, json_t* a, int b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogSetSingleChoiceItems", 'v', (void*) &ret,
                  "ai", a, b);
  return;
}

void sl4a_dialogShow(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "dialogShow", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_forceStopPackage(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "forceStopPackage", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_generateDtmfTones(int fd, char* a, int b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "generateDtmfTones", 'v', (void*) &ret,
                  "si", a, b);
  return;
}

json_t* sl4a_geocode(int fd, double a, double b, int c) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "geocode", 'a', (void*) &ret,
                  "rri", a, b, c);
  return ret;
}

char* sl4a_getCellLocation(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getCellLocation", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getClipboard(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getClipboard", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getDeviceId(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getDeviceId", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getDeviceSoftwareVersion(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getDeviceSoftwareVersion", 's', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_getInput(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "getInput", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

char* sl4a_getIntent(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getIntent", 's', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_getLastKnownLocation(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "getLastKnownLocation", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_getLaunchableApplications(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "getLaunchableApplications", 'a', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getLine1Number(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getLine1Number", 's', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getMaxMediaVolume(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getMaxMediaVolume", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getMaxRingerVolume(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getMaxRingerVolume", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getMediaVolume(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getMediaVolume", 'i', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getNeighboringCellInfo(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getNeighboringCellInfo", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getNetworkOperator(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getNetworkOperator", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getNetworkOperatorName(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getNetworkOperatorName", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getNetworkType(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getNetworkType", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getPackageVersion(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getPackageVersion", 's', (void*) &ret,
                  "s", a);
  return ret;
}

char* sl4a_getPackageVersionCode(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getPackageVersionCode", 's', (void*) &ret,
                  "s", a);
  return ret;
}

void sl4a_getPassword(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "getPassword", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

char* sl4a_getPhoneType(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getPhoneType", 's', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getRingerVolume(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getRingerVolume", 'i', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_getRunningPackages(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "getRunningPackages", 'a', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getScreenBrightness(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getScreenBrightness", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_getScreenTimeout(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "getScreenTimeout", 'i', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSimCountryIso(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSimCountryIso", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSimOperator(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSimOperator", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSimOperatorName(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSimOperatorName", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSimSerialNumber(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSimSerialNumber", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSimState(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSimState", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getSubscriberId(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getSubscriberId", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getVoiceMailAlphaTag(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getVoiceMailAlphaTag", 's', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_getVoiceMailNumber(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "getVoiceMailNumber", 's', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_launch(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "launch", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_log(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "log", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_makeToast(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "makeToast", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_notify(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "notify", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

void sl4a_onRingerSilent(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "onRingerSilent", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_phoneCall(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "phoneCall", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_phoneCallNumber(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "phoneCallNumber", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_phoneDial(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "phoneDial", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_phoneDialNumber(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "phoneDialNumber", 'v', (void*) &ret,
                  "s", a);
  return;
}

json_t* sl4a_pick(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "pick", 'o', (void*) &ret,
                  "s", a);
  return ret;
}

json_t* sl4a_pickContact(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "pickContact", 'o', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_pickPhone(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "pickPhone", 's', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_postEvent(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "postEvent", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

double sl4a_pulseGeneratorGetHz(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetHz", 'r', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_pulseGeneratorGetHzSamples(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetHzSamples", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_pulseGeneratorGetLeftPulseMs(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetLeftPulseMs", 'i', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_pulseGeneratorGetLeftPulsePercent(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetLeftPulsePercent", 'r', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_pulseGeneratorGetLeftPulseSamples(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetLeftPulseSamples", 'i', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_pulseGeneratorGetRightPulseMs(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetRightPulseMs", 'r', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_pulseGeneratorGetRightPulsePercent(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetRightPulsePercent", 'r', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_pulseGeneratorGetRightPulseSamples(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "pulseGeneratorGetRightPulseSamples", 'i', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_pulseGeneratorIsPlaying(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "pulseGeneratorIsPlaying", 'b', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_pulseGeneratorRun(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorRun", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_pulseGeneratorSetHzPercent(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorSetHzPercent", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_pulseGeneratorSetLeftPulsePercent(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorSetLeftPulsePercent", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_pulseGeneratorSetRightPulsePercent(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorSetRightPulsePercent", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_pulseGeneratorStop(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorStop", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_pulseGeneratorToggleInverted(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorToggleInverted", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_pulseGeneratorTogglePlayback(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGeneratorTogglePlayback", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_pulseGenteratorSetHz(int fd, double a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "pulseGenteratorSetHz", 'v', (void*) &ret,
                  "r", a);
  return;
}

char* sl4a_readBatteryData(int fd) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "readBatteryData", 's', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_readLocation(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "readLocation", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_readPhoneState(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "readPhoneState", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_readSensors(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "readSensors", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_readSignalStrengths(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "readSignalStrengths", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_receiveEvent(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "receiveEvent", 'o', (void*) &ret,
                  "v");
  return ret;
}

char* sl4a_recognizeSpeech(int fd, char* a, char* b, char* c) {
  // automatically generated API wrapper for SL4A
  char* ret;
  sl4a_rpc_method(fd, "recognizeSpeech", 's', (void*) &ret,
                  "sss", a, b, c);
  return ret;
}

void sl4a_recorderCaptureVideo(int fd, char* a, double b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "recorderCaptureVideo", 'v', (void*) &ret,
                  "srb", a, b, c);
  return;
}

void sl4a_recorderStartMicrophone(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "recorderStartMicrophone", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_recorderStop(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "recorderStop", 'v', (void*) &ret,
                  "v");
  return;
}

int sl4a_requiredVersion(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "requiredVersion", 'b', (void*) &ret,
                  "i", a);
  return ret;
}

json_t* sl4a_scanBarcode(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "scanBarcode", 'o', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_scheduleAbsolute(int fd, char* a, double b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "scheduleAbsolute", 'v', (void*) &ret,
                  "srb", a, b, c);
  return;
}

void sl4a_scheduleInexactRepeating(int fd, double a, char* b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "scheduleInexactRepeating", 'v', (void*) &ret,
                  "rsb", a, b, c);
  return;
}

void sl4a_scheduleRelative(int fd, char* a, double b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "scheduleRelative", 'v', (void*) &ret,
                  "srb", a, b, c);
  return;
}

void sl4a_scheduleRepeating(int fd, double a, double b, int c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "scheduleRepeating", 'v', (void*) &ret,
                  "rrb", a, b, c);
  return;
}

void sl4a_search(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "search", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_sendEmail(int fd, char* a, char* b, char* c, char* d) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "sendEmail", 'v', (void*) &ret,
                  "ssss", a, b, c, d);
  return;
}

double sl4a_sensorsGetAccuracy(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "sensorsGetAccuracy", 'r', (void*) &ret,
                  "v");
  return ret;
}

double sl4a_sensorsGetLight(int fd) {
  // automatically generated API wrapper for SL4A
  double ret;
  sl4a_rpc_method(fd, "sensorsGetLight", 'r', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_sensorsReadAccelerometer(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "sensorsReadAccelerometer", 'a', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_sensorsReadMagnetometer(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "sensorsReadMagnetometer", 'a', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_sensorsReadOrientation(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "sensorsReadOrientation", 'a', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_setClipboard(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "setClipboard", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_setMediaVolume(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "setMediaVolume", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_setRingerVolume(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "setRingerVolume", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_setScreenBrightness(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "setScreenBrightness", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_setScreenTimeout(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "setScreenTimeout", 'v', (void*) &ret,
                  "i", a);
  return;
}

int sl4a_smsDeleteMessage(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "smsDeleteMessage", 'b', (void*) &ret,
                  "i", a);
  return ret;
}

json_t* sl4a_smsGetAttributes(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "smsGetAttributes", 'a', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_smsGetMessageById(int fd, int a, json_t* b) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "smsGetMessageById", 'o', (void*) &ret,
                  "ia", a, b);
  return ret;
}

int sl4a_smsGetMessageCount(int fd, int a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "smsGetMessageCount", 'i', (void*) &ret,
                  "bs", a, b);
  return ret;
}

json_t* sl4a_smsGetMessageIds(int fd, int a, char* b) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "smsGetMessageIds", 'a', (void*) &ret,
                  "bs", a, b);
  return ret;
}

json_t* sl4a_smsGetMessages(int fd, int a, char* b, json_t* c) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "smsGetMessages", 'o', (void*) &ret,
                  "bsa", a, b, c);
  return ret;
}

int sl4a_smsMarkMessageRead(int fd, json_t* a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "smsMarkMessageRead", 'i', (void*) &ret,
                  "a", a);
  return ret;
}

void sl4a_smsSend(int fd, char* a, char* b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "smsSend", 'v', (void*) &ret,
                  "ss", a, b);
  return;
}

void sl4a_startActivity(int fd, char* a, char* b, char* c, json_t* d, int e) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startActivity", 'v', (void*) &ret,
                  "sssob", a, b, c, d, e);
  return;
}

json_t* sl4a_startActivityForResult(int fd, char* a, char* b, char* c, json_t* d) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "startActivityForResult", 'o', (void*) &ret,
                  "ssso", a, b, c, d);
  return ret;
}

void sl4a_startInteractiveVideoRecording(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startInteractiveVideoRecording", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_startLocating(int fd, int a, int b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startLocating", 'v', (void*) &ret,
                  "ii", a, b);
  return;
}

void sl4a_startSensing(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startSensing", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_startTrackingPhoneState(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startTrackingPhoneState", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_startTrackingSignalStrengths(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "startTrackingSignalStrengths", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_stopLocating(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "stopLocating", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_stopSensing(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "stopSensing", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_stopTrackingPhoneState(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "stopTrackingPhoneState", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_stopTrackingSignalStrengths(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "stopTrackingSignalStrengths", 'v', (void*) &ret,
                  "v");
  return;
}

int sl4a_toggleAirplaneMode(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "toggleAirplaneMode", 'b', (void*) &ret,
                  "b", a);
  return ret;
}

int sl4a_toggleBluetoothState(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "toggleBluetoothState", 'b', (void*) &ret,
                  "b", a);
  return ret;
}

int sl4a_toggleRingerSilentMode(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "toggleRingerSilentMode", 'b', (void*) &ret,
                  "b", a);
  return ret;
}

int sl4a_toggleWifiState(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "toggleWifiState", 'b', (void*) &ret,
                  "b", a);
  return ret;
}

int sl4a_ttsIsSpeaking(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "ttsIsSpeaking", 'b', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_ttsSpeak(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "ttsSpeak", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_vibrate(int fd, int a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "vibrate", 'v', (void*) &ret,
                  "i", a);
  return;
}

void sl4a_view(int fd, char* a, char* b, json_t* c) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "view", 'v', (void*) &ret,
                  "sso", a, b, c);
  return;
}

void sl4a_viewContacts(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "viewContacts", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_viewHtml(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "viewHtml", 'v', (void*) &ret,
                  "s", a);
  return;
}

void sl4a_viewMap(int fd, char* a) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "viewMap", 'v', (void*) &ret,
                  "s", a);
  return;
}

json_t* sl4a_waitForEvent(int fd, char* a, int b) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "waitForEvent", 'o', (void*) &ret,
                  "si", a, b);
  return ret;
}

void sl4a_wakeLockAcquireBright(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wakeLockAcquireBright", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wakeLockAcquireDim(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wakeLockAcquireDim", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wakeLockAcquireFull(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wakeLockAcquireFull", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wakeLockAcquirePartial(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wakeLockAcquirePartial", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wakeLockRelease(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wakeLockRelease", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_webViewShow(int fd, char* a, int b) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "webViewShow", 'v', (void*) &ret,
                  "sb", a, b);
  return;
}

int sl4a_wifiDisconnect(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "wifiDisconnect", 'b', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_wifiGetConnectionInfo(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "wifiGetConnectionInfo", 'o', (void*) &ret,
                  "v");
  return ret;
}

json_t* sl4a_wifiGetScanResults(int fd) {
  // automatically generated API wrapper for SL4A
  json_t* ret;
  sl4a_rpc_method(fd, "wifiGetScanResults", 'a', (void*) &ret,
                  "v");
  return ret;
}

void sl4a_wifiLockAcquireFull(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wifiLockAcquireFull", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wifiLockAcquireScanOnly(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wifiLockAcquireScanOnly", 'v', (void*) &ret,
                  "v");
  return;
}

void sl4a_wifiLockRelease(int fd) {
  // automatically generated API wrapper for SL4A
  int ret; // unused
  sl4a_rpc_method(fd, "wifiLockRelease", 'v', (void*) &ret,
                  "v");
  return;
}

int sl4a_wifiReassociate(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "wifiReassociate", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_wifiReconnect(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "wifiReconnect", 'b', (void*) &ret,
                  "v");
  return ret;
}

int sl4a_wifiStartScan(int fd) {
  // automatically generated API wrapper for SL4A
  int ret;
  sl4a_rpc_method(fd, "wifiStartScan", 'b', (void*) &ret,
                  "v");
  return ret;
}

