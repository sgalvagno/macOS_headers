//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PreferencePanesSupport/InputDeviceController.h>

@class IOBluetoothDevice, IOBluetoothDeviceInquiry, IOBluetoothDevicePair, NSArrayController, NSButton, NSImage, NSProgressIndicator, NSTableView, NSTextField, NSView;

@interface BTPointingDevicePairController : InputDeviceController
{
    NSTextField *mTopLabel;
    struct CGRect mTopLabelOriginalFrame;
    NSTextField *mTopLabelDescription;
    NSTableView *mDeviceTable;
    NSArrayController *mBTKeyboardList;
    NSButton *mPairButton;
    NSButton *mBackButton;
    NSProgressIndicator *mProgressIndicator;
    NSTextField *mProgressIndicatorLabel;
    NSTextField *mNoDevicesTableLabel;
    NSImage *mBTAlertIconImage;
    NSView *mBTWarningView;
    NSTextField *mBTWarningViewLabel;
    BOOL mBTPowerIsOn;
    BOOL mBTIsAvailable;
    IOBluetoothDevice *mSelectedDevice;
    IOBluetoothDeviceInquiry *mDeviceInquiry;
    IOBluetoothDevicePair *mDevicePair;
    long long mDevicePairAttemptsCount;
}

- (void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryDeviceNameUpdated:(id)arg1 device:(id)arg2 devicesRemaining:(unsigned int)arg3;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(id)arg1 devicesRemaining:(unsigned int)arg2;
- (void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2;
- (void)deviceInquiryStarted:(id)arg1;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (id)deviceInquiry;
- (void)pair:(id)arg1;
- (void)updateButtons;
- (void)willSwitchOut;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)willUnselect;
- (void)didSelect;
- (void)willSelect;
- (void)updateDevice:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_btPowerStateDidChangeNotification:(id)arg1;
- (void)_btAvailabilityDidChangeNotification:(id)arg1;
- (void)_btOffAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_stopBTActivity;
- (void)_driverFailedToLoad:(id)arg1;
- (void)_showErrorState:(int)arg1 failedToLoad:(BOOL)arg2;
- (void)_startPairing:(id)arg1;
- (void)_startDeviceInquiry:(id)arg1;
- (void)_updateUI;
- (void)_updateBTUI;
- (id)locstring:(id)arg1;
- (void)_adjustLabelPositions;
- (void)_adjustButtonPositions;

@end

