#!/usr/bin/python
#
# Automatically generated API wrapper for SL4A.
#
# This wrapper lets the interpreter check that method names
# and the number of arguments are correct at "compile" time,
# and checks the type of inputs at runtime before any actual
# API call is made.

import android
droid = android.Android()

# This function takes a list like
# "int_a","int", "str_b","str"
# and checks that each argument has the appropriate type.
#
# It raises an appropriate exception if the type
# check fails.
# 
# It could be much better implemented than this.
def check(args):
  i = 0
  while i < len(args):
    arg = args[i]
    type = args[i+1]

    if type == 'int':
      try:
        dummy = int(arg)
      except:
        raise

    elif type == 'str':
      try:
        dummy = str(arg)
      except:
        raise

    elif type == 'real':
      try:
        dummy = arg + 0.1;
      except:
        raise

    i += 2


# Here are the automatically generated API wrappers:

def addContextMenuItem(str_a, str_b, dict_c):
  check(str_a,'str', str_b,'str', dict_c,'dict')
  return droid.addContextMenuItem(str_a, str_b, dict_c)

def addOptionsMenuItem(str_a, str_b, dict_c, str_d):
  check(str_a,'str', str_b,'str', dict_c,'dict', str_d,'str')
  return droid.addOptionsMenuItem(str_a, str_b, dict_c, str_d)

def batteryCheckPresent():
  return droid.batteryCheckPresent()

def batteryGetHealth():
  return droid.batteryGetHealth()

def batteryGetLevel():
  return droid.batteryGetLevel()

def batteryGetPlugType():
  return droid.batteryGetPlugType()

def batteryGetStatus():
  return droid.batteryGetStatus()

def batteryGetTechnology():
  return droid.batteryGetTechnology()

def batteryGetTemperature():
  return droid.batteryGetTemperature()

def batteryGetVoltage():
  return droid.batteryGetVoltage()

def batteryStartMonitoring():
  return droid.batteryStartMonitoring()

def batteryStopMonitoring():
  return droid.batteryStopMonitoring()

def bluetoothAccept(str_a):
  check(str_a,'str')
  return droid.bluetoothAccept(str_a)

def bluetoothConnect(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.bluetoothConnect(str_a, str_b)

def bluetoothGetConnectedDeviceName():
  return droid.bluetoothGetConnectedDeviceName()

def bluetoothMakeDiscoverable(int_a):
  check(int_a,'int')
  return droid.bluetoothMakeDiscoverable(int_a)

def bluetoothRead(int_a):
  check(int_a,'int')
  return droid.bluetoothRead(int_a)

def bluetoothReadLine():
  return droid.bluetoothReadLine()

def bluetoothReadReady():
  return droid.bluetoothReadReady()

def bluetoothStop():
  return droid.bluetoothStop()

def bluetoothWrite(str_a):
  check(str_a,'str')
  return droid.bluetoothWrite(str_a)

def cameraCapturePicture(str_a, bool_b):
  check(str_a,'str', bool_b,'bool')
  return droid.cameraCapturePicture(str_a, bool_b)

def cameraInteractiveCapturePicture(str_a):
  check(str_a,'str')
  return droid.cameraInteractiveCapturePicture(str_a)

def cancelRepeating(str_a):
  check(str_a,'str')
  return droid.cancelRepeating(str_a)

def checkAirplaneMode():
  return droid.checkAirplaneMode()

def checkBluetoothState():
  return droid.checkBluetoothState()

def checkNetworkRoaming():
  return droid.checkNetworkRoaming()

def checkRingerSilentMode():
  return droid.checkRingerSilentMode()

def checkScreenOn():
  return droid.checkScreenOn()

def checkWifiState():
  return droid.checkWifiState()

def clearContextMenu():
  return droid.clearContextMenu()

def clearOptionsMenu():
  return droid.clearOptionsMenu()

def contactsGet(list_a):
  check(list_a,'list')
  return droid.contactsGet(list_a)

def contactsGetAttributes():
  return droid.contactsGetAttributes()

def contactsGetById(int_a, list_b):
  check(int_a,'int', list_b,'list')
  return droid.contactsGetById(int_a, list_b)

def contactsGetCount():
  return droid.contactsGetCount()

def contactsGetIds():
  return droid.contactsGetIds()

def dialogCreateAlert(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.dialogCreateAlert(str_a, str_b)

def dialogCreateDatePicker(int_a, int_b, int_c):
  check(int_a,'int', int_b,'int', int_c,'int')
  return droid.dialogCreateDatePicker(int_a, int_b, int_c)

def dialogCreateHorizontalProgress(str_a, str_b, int_c):
  check(str_a,'str', str_b,'str', int_c,'int')
  return droid.dialogCreateHorizontalProgress(str_a, str_b, int_c)

def dialogCreateInput(str_a, str_b, str_c):
  check(str_a,'str', str_b,'str', str_c,'str')
  return droid.dialogCreateInput(str_a, str_b, str_c)

def dialogCreatePassword(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.dialogCreatePassword(str_a, str_b)

def dialogCreateSeekBar(int_a, int_b, str_c, str_d):
  check(int_a,'int', int_b,'int', str_c,'str', str_d,'str')
  return droid.dialogCreateSeekBar(int_a, int_b, str_c, str_d)

def dialogCreateSpinnerProgress(str_a, str_b, int_c):
  check(str_a,'str', str_b,'str', int_c,'int')
  return droid.dialogCreateSpinnerProgress(str_a, str_b, int_c)

def dialogCreateTimePicker(int_a, int_b, bool_c):
  check(int_a,'int', int_b,'int', bool_c,'bool')
  return droid.dialogCreateTimePicker(int_a, int_b, bool_c)

def dialogDismiss():
  return droid.dialogDismiss()

def dialogGetInput(str_a, str_b, str_c):
  check(str_a,'str', str_b,'str', str_c,'str')
  return droid.dialogGetInput(str_a, str_b, str_c)

def dialogGetPassword(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.dialogGetPassword(str_a, str_b)

def dialogGetResponse():
  return droid.dialogGetResponse()

def dialogGetSelectedItems():
  return droid.dialogGetSelectedItems()

def dialogSetCurrentProgress(int_a):
  check(int_a,'int')
  return droid.dialogSetCurrentProgress(int_a)

def dialogSetItems(list_a):
  check(list_a,'list')
  return droid.dialogSetItems(list_a)

def dialogSetMaxProgress(int_a):
  check(int_a,'int')
  return droid.dialogSetMaxProgress(int_a)

def dialogSetMultiChoiceItems(list_a, list_b):
  check(list_a,'list', list_b,'list')
  return droid.dialogSetMultiChoiceItems(list_a, list_b)

def dialogSetNegativeButtonText(str_a):
  check(str_a,'str')
  return droid.dialogSetNegativeButtonText(str_a)

def dialogSetNeutralButtonText(str_a):
  check(str_a,'str')
  return droid.dialogSetNeutralButtonText(str_a)

def dialogSetPositiveButtonText(str_a):
  check(str_a,'str')
  return droid.dialogSetPositiveButtonText(str_a)

def dialogSetSingleChoiceItems(list_a, int_b):
  check(list_a,'list', int_b,'int')
  return droid.dialogSetSingleChoiceItems(list_a, int_b)

def dialogShow():
  return droid.dialogShow()

def forceStopPackage(str_a):
  check(str_a,'str')
  return droid.forceStopPackage(str_a)

def generateDtmfTones(str_a, int_b):
  check(str_a,'str', int_b,'int')
  return droid.generateDtmfTones(str_a, int_b)

def geocode(real_a, real_b, int_c):
  check(real_a,'real', real_b,'real', int_c,'int')
  return droid.geocode(real_a, real_b, int_c)

def getCellLocation():
  return droid.getCellLocation()

def getClipboard():
  return droid.getClipboard()

def getDeviceId():
  return droid.getDeviceId()

def getDeviceSoftwareVersion():
  return droid.getDeviceSoftwareVersion()

def getInput(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.getInput(str_a, str_b)

def getIntent():
  return droid.getIntent()

def getLastKnownLocation():
  return droid.getLastKnownLocation()

def getLaunchableApplications():
  return droid.getLaunchableApplications()

def getLine1Number():
  return droid.getLine1Number()

def getMaxMediaVolume():
  return droid.getMaxMediaVolume()

def getMaxRingerVolume():
  return droid.getMaxRingerVolume()

def getMediaVolume():
  return droid.getMediaVolume()

def getNeighboringCellInfo():
  return droid.getNeighboringCellInfo()

def getNetworkOperator():
  return droid.getNetworkOperator()

def getNetworkOperatorName():
  return droid.getNetworkOperatorName()

def getNetworkType():
  return droid.getNetworkType()

def getPackageVersion(str_a):
  check(str_a,'str')
  return droid.getPackageVersion(str_a)

def getPackageVersionCode(str_a):
  check(str_a,'str')
  return droid.getPackageVersionCode(str_a)

def getPassword(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.getPassword(str_a, str_b)

def getPhoneType():
  return droid.getPhoneType()

def getRingerVolume():
  return droid.getRingerVolume()

def getRunningPackages():
  return droid.getRunningPackages()

def getScreenBrightness():
  return droid.getScreenBrightness()

def getScreenTimeout():
  return droid.getScreenTimeout()

def getSimCountryIso():
  return droid.getSimCountryIso()

def getSimOperator():
  return droid.getSimOperator()

def getSimOperatorName():
  return droid.getSimOperatorName()

def getSimSerialNumber():
  return droid.getSimSerialNumber()

def getSimState():
  return droid.getSimState()

def getSubscriberId():
  return droid.getSubscriberId()

def getVoiceMailAlphaTag():
  return droid.getVoiceMailAlphaTag()

def getVoiceMailNumber():
  return droid.getVoiceMailNumber()

def launch(str_a):
  check(str_a,'str')
  return droid.launch(str_a)

def log(str_a):
  check(str_a,'str')
  return droid.log(str_a)

def makeToast(str_a):
  check(str_a,'str')
  return droid.makeToast(str_a)

def notify(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.notify(str_a, str_b)

def onRingerSilent(str_a):
  check(str_a,'str')
  return droid.onRingerSilent(str_a)

def phoneCall(str_a):
  check(str_a,'str')
  return droid.phoneCall(str_a)

def phoneCallNumber(str_a):
  check(str_a,'str')
  return droid.phoneCallNumber(str_a)

def phoneDial(str_a):
  check(str_a,'str')
  return droid.phoneDial(str_a)

def phoneDialNumber(str_a):
  check(str_a,'str')
  return droid.phoneDialNumber(str_a)

def pick(str_a):
  check(str_a,'str')
  return droid.pick(str_a)

def pickContact():
  return droid.pickContact()

def pickPhone():
  return droid.pickPhone()

def postEvent(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.postEvent(str_a, str_b)

def pulseGeneratorGetHz():
  return droid.pulseGeneratorGetHz()

def pulseGeneratorGetHzSamples():
  return droid.pulseGeneratorGetHzSamples()

def pulseGeneratorGetLeftPulseMs():
  return droid.pulseGeneratorGetLeftPulseMs()

def pulseGeneratorGetLeftPulsePercent():
  return droid.pulseGeneratorGetLeftPulsePercent()

def pulseGeneratorGetLeftPulseSamples():
  return droid.pulseGeneratorGetLeftPulseSamples()

def pulseGeneratorGetRightPulseMs():
  return droid.pulseGeneratorGetRightPulseMs()

def pulseGeneratorGetRightPulsePercent():
  return droid.pulseGeneratorGetRightPulsePercent()

def pulseGeneratorGetRightPulseSamples():
  return droid.pulseGeneratorGetRightPulseSamples()

def pulseGeneratorIsPlaying():
  return droid.pulseGeneratorIsPlaying()

def pulseGeneratorRun():
  return droid.pulseGeneratorRun()

def pulseGeneratorSetHzPercent(int_a):
  check(int_a,'int')
  return droid.pulseGeneratorSetHzPercent(int_a)

def pulseGeneratorSetLeftPulsePercent(int_a):
  check(int_a,'int')
  return droid.pulseGeneratorSetLeftPulsePercent(int_a)

def pulseGeneratorSetRightPulsePercent(int_a):
  check(int_a,'int')
  return droid.pulseGeneratorSetRightPulsePercent(int_a)

def pulseGeneratorStop():
  return droid.pulseGeneratorStop()

def pulseGeneratorToggleInverted():
  return droid.pulseGeneratorToggleInverted()

def pulseGeneratorTogglePlayback():
  return droid.pulseGeneratorTogglePlayback()

def pulseGenteratorSetHz(real_a):
  check(real_a,'real')
  return droid.pulseGenteratorSetHz(real_a)

def readBatteryData():
  return droid.readBatteryData()

def readLocation():
  return droid.readLocation()

def readPhoneState():
  return droid.readPhoneState()

def readSensors():
  return droid.readSensors()

def readSignalStrengths():
  return droid.readSignalStrengths()

def receiveEvent():
  return droid.receiveEvent()

def recognizeSpeech(str_a, str_b, str_c):
  check(str_a,'str', str_b,'str', str_c,'str')
  return droid.recognizeSpeech(str_a, str_b, str_c)

def recorderCaptureVideo(str_a, real_b, bool_c):
  check(str_a,'str', real_b,'real', bool_c,'bool')
  return droid.recorderCaptureVideo(str_a, real_b, bool_c)

def recorderStartMicrophone(str_a):
  check(str_a,'str')
  return droid.recorderStartMicrophone(str_a)

def recorderStop():
  return droid.recorderStop()

def requiredVersion(int_a):
  check(int_a,'int')
  return droid.requiredVersion(int_a)

def scanBarcode():
  return droid.scanBarcode()

def scheduleAbsolute(str_a, real_b, bool_c):
  check(str_a,'str', real_b,'real', bool_c,'bool')
  return droid.scheduleAbsolute(str_a, real_b, bool_c)

def scheduleInexactRepeating(real_a, str_b, bool_c):
  check(real_a,'real', str_b,'str', bool_c,'bool')
  return droid.scheduleInexactRepeating(real_a, str_b, bool_c)

def scheduleRelative(str_a, real_b, bool_c):
  check(str_a,'str', real_b,'real', bool_c,'bool')
  return droid.scheduleRelative(str_a, real_b, bool_c)

def scheduleRepeating(real_a, real_b, bool_c):
  check(real_a,'real', real_b,'real', bool_c,'bool')
  return droid.scheduleRepeating(real_a, real_b, bool_c)

def search(str_a):
  check(str_a,'str')
  return droid.search(str_a)

def sendEmail(str_a, str_b, str_c, str_d):
  check(str_a,'str', str_b,'str', str_c,'str', str_d,'str')
  return droid.sendEmail(str_a, str_b, str_c, str_d)

def sensorsGetAccuracy():
  return droid.sensorsGetAccuracy()

def sensorsGetLight():
  return droid.sensorsGetLight()

def sensorsReadAccelerometer():
  return droid.sensorsReadAccelerometer()

def sensorsReadMagnetometer():
  return droid.sensorsReadMagnetometer()

def sensorsReadOrientation():
  return droid.sensorsReadOrientation()

def setClipboard(str_a):
  check(str_a,'str')
  return droid.setClipboard(str_a)

def setMediaVolume(int_a):
  check(int_a,'int')
  return droid.setMediaVolume(int_a)

def setRingerVolume(int_a):
  check(int_a,'int')
  return droid.setRingerVolume(int_a)

def setScreenBrightness(int_a):
  check(int_a,'int')
  return droid.setScreenBrightness(int_a)

def setScreenTimeout(int_a):
  check(int_a,'int')
  return droid.setScreenTimeout(int_a)

def smsDeleteMessage(int_a):
  check(int_a,'int')
  return droid.smsDeleteMessage(int_a)

def smsGetAttributes():
  return droid.smsGetAttributes()

def smsGetMessageById(int_a, list_b):
  check(int_a,'int', list_b,'list')
  return droid.smsGetMessageById(int_a, list_b)

def smsGetMessageCount(bool_a, str_b):
  check(bool_a,'bool', str_b,'str')
  return droid.smsGetMessageCount(bool_a, str_b)

def smsGetMessageIds(bool_a, str_b):
  check(bool_a,'bool', str_b,'str')
  return droid.smsGetMessageIds(bool_a, str_b)

def smsGetMessages(bool_a, str_b, list_c):
  check(bool_a,'bool', str_b,'str', list_c,'list')
  return droid.smsGetMessages(bool_a, str_b, list_c)

def smsMarkMessageRead(list_a):
  check(list_a,'list')
  return droid.smsMarkMessageRead(list_a)

def smsSend(str_a, str_b):
  check(str_a,'str', str_b,'str')
  return droid.smsSend(str_a, str_b)

def startActivity(str_a, str_b, str_c, dict_d, bool_e):
  check(str_a,'str', str_b,'str', str_c,'str', dict_d,'dict', bool_e,'bool')
  return droid.startActivity(str_a, str_b, str_c, dict_d, bool_e)

def startActivityForResult(str_a, str_b, str_c, dict_d):
  check(str_a,'str', str_b,'str', str_c,'str', dict_d,'dict')
  return droid.startActivityForResult(str_a, str_b, str_c, dict_d)

def startInteractiveVideoRecording(str_a):
  check(str_a,'str')
  return droid.startInteractiveVideoRecording(str_a)

def startLocating(int_a, int_b):
  check(int_a,'int', int_b,'int')
  return droid.startLocating(int_a, int_b)

def startSensing(int_a):
  check(int_a,'int')
  return droid.startSensing(int_a)

def startTrackingPhoneState():
  return droid.startTrackingPhoneState()

def startTrackingSignalStrengths():
  return droid.startTrackingSignalStrengths()

def stopLocating():
  return droid.stopLocating()

def stopSensing():
  return droid.stopSensing()

def stopTrackingPhoneState():
  return droid.stopTrackingPhoneState()

def stopTrackingSignalStrengths():
  return droid.stopTrackingSignalStrengths()

def toggleAirplaneMode(bool_a):
  check(bool_a,'bool')
  return droid.toggleAirplaneMode(bool_a)

def toggleBluetoothState(bool_a):
  check(bool_a,'bool')
  return droid.toggleBluetoothState(bool_a)

def toggleRingerSilentMode(bool_a):
  check(bool_a,'bool')
  return droid.toggleRingerSilentMode(bool_a)

def toggleWifiState(bool_a):
  check(bool_a,'bool')
  return droid.toggleWifiState(bool_a)

def ttsIsSpeaking():
  return droid.ttsIsSpeaking()

def ttsSpeak(str_a):
  check(str_a,'str')
  return droid.ttsSpeak(str_a)

def vibrate(int_a):
  check(int_a,'int')
  return droid.vibrate(int_a)

def view(str_a, str_b, dict_c):
  check(str_a,'str', str_b,'str', dict_c,'dict')
  return droid.view(str_a, str_b, dict_c)

def viewContacts():
  return droid.viewContacts()

def viewHtml(str_a):
  check(str_a,'str')
  return droid.viewHtml(str_a)

def viewMap(str_a):
  check(str_a,'str')
  return droid.viewMap(str_a)

def waitForEvent(str_a, int_b):
  check(str_a,'str', int_b,'int')
  return droid.waitForEvent(str_a, int_b)

def wakeLockAcquireBright():
  return droid.wakeLockAcquireBright()

def wakeLockAcquireDim():
  return droid.wakeLockAcquireDim()

def wakeLockAcquireFull():
  return droid.wakeLockAcquireFull()

def wakeLockAcquirePartial():
  return droid.wakeLockAcquirePartial()

def wakeLockRelease():
  return droid.wakeLockRelease()

def webViewShow(str_a, bool_b):
  check(str_a,'str', bool_b,'bool')
  return droid.webViewShow(str_a, bool_b)

def wifiDisconnect():
  return droid.wifiDisconnect()

def wifiGetConnectionInfo():
  return droid.wifiGetConnectionInfo()

def wifiGetScanResults():
  return droid.wifiGetScanResults()

def wifiLockAcquireFull():
  return droid.wifiLockAcquireFull()

def wifiLockAcquireScanOnly():
  return droid.wifiLockAcquireScanOnly()

def wifiLockRelease():
  return droid.wifiLockRelease()

def wifiReassociate():
  return droid.wifiReassociate()

def wifiReconnect():
  return droid.wifiReconnect()

def wifiStartScan():
  return droid.wifiStartScan()

