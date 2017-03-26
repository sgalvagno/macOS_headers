//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/TIPreferencesControllerActions-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSTimer;

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions>
{
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSTimer *_synchronizePreferencesTimer;
    double _lastSynchronizePreferencesTime[5];
    BOOL isInternalInstall;
    BOOL _inhibitGlobalNotification;
    BOOL _ignoreNextSyncNotification;
}

+ (id)sharedPreferencesController;
@property(nonatomic) BOOL ignoreNextSyncNotification; // @synthesize ignoreNextSyncNotification=_ignoreNextSyncNotification;
@property(nonatomic) BOOL inhibitGlobalNotification; // @synthesize inhibitGlobalNotification=_inhibitGlobalNotification;
@property(nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;
- (void)updateKeyboardHandBias:(id)arg1;
- (void)updateKeyboardIsFloating:(BOOL)arg1;
- (void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
@property(nonatomic) struct CGPoint keyboardPosition;
- (void)didUnseeHardwareKeyboard:(id)arg1;
- (void)didSeeHardwareKeyboard:(id)arg1;
@property(nonatomic) BOOL keyboardShownByTouch;
@property(nonatomic) BOOL automaticMinimizationEnabled;
@property(nonatomic) BOOL predictionEnabled;
@property(copy, nonatomic) NSArray *inputModeSelectionSequence;
- (void)updateLastUsedKeyboards:(id)arg1;
- (void)updateLastUsedLayout:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)didTriggerOneTimeAction:(id)arg1;
- (BOOL)oneTimeActionCompleted:(id)arg1;
- (BOOL)_isOneTimeAction:(id)arg1;
- (BOOL)allEnabledInputModesAreValid;
- (void)updateInputModes:(id)arg1;
- (BOOL)isKeyLockedDown:(int)arg1;
- (BOOL)isPreferenceKeyLockedDown:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)synchronizeDomainIfNeedsGet:(id)arg1;
- (void)clearSynchronizePreferencesTimer;
- (BOOL)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (void)performWithWriteability:(BOOL)arg1 operations:(CDUnknownBlockType)arg2;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (id)valueForPreferenceKey:(id)arg1;
- (void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
- (void)_configureDomain:(id)arg1 notification:(id)arg2;
- (void)_configurePreferences;
- (void)_configureDomains;
- (void)dealloc;
- (id)init;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (void)preferencesChangedCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

