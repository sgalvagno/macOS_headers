//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSDictionary, NSProgressIndicator, NSString, NSTextField, NSTimer, SODownloadDisplayManager;

@interface SOVoicePopUpButton : NSPopUpButton
{
    NSDictionary *_fixedRateVoiceIdentifiers;
    NSString *_previouslyChosenVoiceIdentifier;
    NSString *_systemVoiceLocalizedText;
    long long _systemVoiceMenuItemTag;
    BOOL _allowSystemVoiceChoice;
    BOOL _showIndividualVoiceQualities;
    NSTextField *_downloadStatusTextField;
    NSProgressIndicator *_downloadStatusProgressIndicator;
    NSTimer *_downloadStatusUpdateTimer;
    SODownloadDisplayManager *_downloadDisplayManager;
}

+ (void)setFallbackVoiceIdentifier:(id)arg1;
+ (void)buildSharedVoicesMenuShowingVOVoices:(BOOL)arg1;
+ (BOOL)isRequiredVoiceIdentifier:(id)arg1;
+ (void)removeRequiredVoiceIdentifier:(id)arg1;
+ (void)addRequiredVoiceIdentifier:(id)arg1;
+ (BOOL)shouldExcludeVoiceIdentifier:(id)arg1;
+ (void)_forceAllVoicePopupsToUpdate;
+ (void)_startDelayedForceAllVoicePopupsToUpdate;
+ (void)addExcludedVoiceIdentifier:(id)arg1;
+ (void)forcePopupsToAdoptCachedMenuExceptPopUp:(id)arg1;
+ (id)displayNameForGender:(id)arg1;
- (void)_forceAllVoicePopupsToUpdate;
- (void)_forcePopupsToAdoptCachedMenuExceptPopUp:(id)arg1;
- (void)_setPreviouslyChosenVoiceIdentifier:(id)arg1;
- (id)_previouslyChosenVoiceIdentifier;
- (void)_updateDownloadStatusFields;
- (id)_statusStringForActiveDownloads;
- (void)_handleSpeechDataInstallationNotification;
- (BOOL)isSelectedVoiceAppropriateForCurrentLanguageWithUserConfirmation:(BOOL)arg1 parentWindowForSheet:(id)arg2;
- (id)selectedVoiceAttributes;
- (void)addExcludedIdentifier:(id)arg1;
- (void)buildPopUpButtonWithSelectVoiceIdentifier:(id)arg1;
- (void)setShowIndividualVoiceQualities:(BOOL)arg1;
- (void)setSystemVoiceLocalizedText:(id)arg1 menuItemTag:(long long)arg2;
- (void)setAllowSystemVoiceChoice:(BOOL)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

