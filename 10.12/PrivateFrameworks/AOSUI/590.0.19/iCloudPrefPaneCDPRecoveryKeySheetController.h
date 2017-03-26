//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/NSTouchBarProvider-Protocol.h>

@class CDPContext, CDPRemoteDeviceSecretValidator, NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField, NSTouchBar, NSView, NSWindow, iCloudTouchBarController;
@protocol CDPRecoveryKeyValidator;

@interface iCloudPrefPaneCDPRecoveryKeySheetController : NSObject <NSTouchBarProvider>
{
    BOOL _isEntering;
    BOOL _isCreation;
    NSTextField *_title;
    NSTextField *_cdpKey;
    NSTextField *_cdpKeyEntry;
    NSTextField *_cdpKeyEntryErrorLabel;
    NSButton *_continueButton;
    NSButton *_cancelButton;
    NSWindow *_cdpRecoveryKeySheet;
    NSView *_containerView;
    NSView *_cdpRecoveryKeyEntryView;
    NSView *_cdpRecoveryKeyDisplayView;
    NSImageView *_cdpRecoveryKeyImageView;
    NSProgressIndicator *_spinner;
    NSTextField *_cdpKeyDisplayTitle;
    NSTextField *_cdpKeyDisplayDescription;
    CDPContext *_cdpContext;
    id <CDPRecoveryKeyValidator> _recoveryKeyValidator;
    CDPRemoteDeviceSecretValidator *_remoteDeviceSecretValidator;
    CDUnknownBlockType _completionHandler;
    NSWindow *_parentWindow;
    long long _mode;
    iCloudTouchBarController *_touchBarController;
}

@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) CDPRemoteDeviceSecretValidator *remoteDeviceSecretValidator; // @synthesize remoteDeviceSecretValidator=_remoteDeviceSecretValidator;
@property(retain) id <CDPRecoveryKeyValidator> recoveryKeyValidator; // @synthesize recoveryKeyValidator=_recoveryKeyValidator;
@property(retain) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
@property BOOL isCreation; // @synthesize isCreation=_isCreation;
@property(retain) NSTextField *cdpKeyDisplayDescription; // @synthesize cdpKeyDisplayDescription=_cdpKeyDisplayDescription;
@property(retain) NSTextField *cdpKeyDisplayTitle; // @synthesize cdpKeyDisplayTitle=_cdpKeyDisplayTitle;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSImageView *cdpRecoveryKeyImageView; // @synthesize cdpRecoveryKeyImageView=_cdpRecoveryKeyImageView;
@property(retain) NSView *cdpRecoveryKeyDisplayView; // @synthesize cdpRecoveryKeyDisplayView=_cdpRecoveryKeyDisplayView;
@property(retain) NSView *cdpRecoveryKeyEntryView; // @synthesize cdpRecoveryKeyEntryView=_cdpRecoveryKeyEntryView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSWindow *cdpRecoveryKeySheet; // @synthesize cdpRecoveryKeySheet=_cdpRecoveryKeySheet;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain) NSTextField *cdpKeyEntryErrorLabel; // @synthesize cdpKeyEntryErrorLabel=_cdpKeyEntryErrorLabel;
@property(retain) NSTextField *cdpKeyEntry; // @synthesize cdpKeyEntry=_cdpKeyEntry;
@property(retain) NSTextField *cdpKey; // @synthesize cdpKey=_cdpKey;
@property(retain) NSTextField *title; // @synthesize title=_title;
@property BOOL isEntering; // @synthesize isEntering=_isEntering;
- (void)controlTextDidChange:(id)arg1;
- (id)recoveryKey;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showError:(BOOL)arg1;
- (void)enableUserInteractionAndStopSpinner;
- (void)disableUserInteractionAndStartSpinner;
- (void)continueButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)showView:(id)arg1;
- (BOOL)isUsersOnlyDevice;
- (void)setupDisplayView;
- (id)getSetupTitleString;
- (void)setupEntryView;
- (void)showCdpRecoveryKeyWithWindow:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithContext:(id)arg1 deviceSecretvalidator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

