//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SubViewAutoPairDevice.h"

#import "AutoPairDeviceProtocol-Protocol.h"

@interface SubViewKeyboardSetup : SubViewAutoPairDevice <AutoPairDeviceProtocol>
{
}

- (void)automaticDeviceSetupComplete:(id)arg1 device:(id)arg2;
- (void)automaticDeviceSetupBluetoothKeyboardConnected:(id)arg1;
- (void)automaticDeviceSetupUSBKeyboardConnected:(id)arg1;
- (void)automaticDeviceSetupPairingDeviceUserPasskeyNotification:(id)arg1 deviceNumber:(int)arg2 passkey:(unsigned int)arg3 device:(id)arg4;
- (void)automaticDeviceSetupPairingDeviceConnected:(id)arg1 deviceNumber:(int)arg2 device:(id)arg3;
- (id)messageConnectedToDevice:(id)arg1 deviceNumber:(int)arg2;
- (id)textWaitingForAckWithDevice:(id)arg1 timeRemaining:(int)arg2;
- (id)textPairingFailedWithDevice:(id)arg1;
- (id)textPairingRetriesRemaining:(int)arg1;
- (id)textPairingErrorWithDevice:(id)arg1;
- (id)textPairingTimeoutFailureWithDevice:(id)arg1;
- (id)textPairingAuthenticationFailureWithDevice:(id)arg1;
- (id)textPairedToDevice:(id)arg1;
- (id)textErrorConnectingToDevice:(id)arg1 error:(int)arg2;
- (id)textConnectedToDevice:(id)arg1 deviceNumber:(int)arg2;
- (id)textConnectingToPrepairedDevice:(id)arg1 deviceNumber:(int)arg2;
- (id)textConnectingToDevice:(id)arg1 deviceNumber:(int)arg2;
- (id)textSearchingError:(int)arg1;
- (id)textFoundDevice:(id)arg1 totalFoundDevices:(int)arg2;
- (id)textUpdatingDeviceNames:(id)arg1 remainingDevices:(int)arg2;
- (id)textSearchingForDevices;
- (id)textNoDevicesFound;
- (id)textNoDeviceConnected;
- (id)textPrepairedDeviceNotConnected;
- (unsigned int)minorClass;
- (int)ackTimeLimit;
- (BOOL)computerHasDeviceAttached;
- (void)initiateDeviceSetup;
- (id)getNextSubView;
- (id)getName;

@end

