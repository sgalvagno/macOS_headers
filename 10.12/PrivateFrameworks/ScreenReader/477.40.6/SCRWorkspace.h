//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRCUserDefaultsDiskArbDelegate-Protocol.h>

@class NSDate, NSDictionary, NSLock, NSMutableDictionary, NSString, NSTimer, SCRApplicationManager, SCRCTargetSelectorTimer, SCRCThreadKey, SCRDFRFocusManager, SCRDFRManager, SCRDisplayOverlay, SCREventDispatcher, SCREventFactory, SCRGuide, SCRGuideView, SCRSiriObserver, SCRSpeechAttributeGuide, SCRSystemKeyManager;

@interface SCRWorkspace : NSObject <SCRCUserDefaultsDiskArbDelegate>
{
    NSLock *_workspaceLock;
    SCREventFactory *_eventFactory;
    SCRApplicationManager *_appManager;
    struct __CFRunLoop *_runLoop;
    SCRDisplayOverlay *_screenCurtain;
    int __eventTag;
    NSString *__eventTagCancelString;
    SCRGuide *__currentGuide;
    SCRSpeechAttributeGuide *__currentSpeechAttributeGuide;
    SCRGuideView *__currentGuideView;
    SCREventDispatcher *_eventDispatcher;
    unsigned char _speechRotorPosition;
    NSString *_shutdownMessage;
    NSMutableDictionary *_hotSpotsBeingWatched;
    long long _currentHotSpotIndex;
    NSTimer *_hotSpotTimer;
    NSTimer *_messageTracerTimer;
    NSDictionary *_virtualKeyboardCommands;
    SCRCTargetSelectorTimer *_systemZoomCoalescer;
    double _systemZoomLastChanged;
    unsigned long long _keyboardHelpMask;
    NSMutableDictionary *_appleScriptObjects;
    double _guideRequestedTime;
    int _processExitCode;
    SCRCThreadKey *_threadKey;
    struct {
        int direction;
        unsigned long long count;
        NSString *name;
    } _zigzag;
    int _primaryBrailleDisplayToken;
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWakeInfo;
    struct {
        char isRunLoopEnabled;
        char isKeyEchoEnabled;
        char isScreenCurtainEnabled;
        char modalSessionEnabled;
        char isLaunchedAtLogin;
        char isUserLoggedIn;
        char isQuickStarted;
        char keyboardHelpOnlyEnabled;
        char isEchoModifierKeysEnabled;
        char isEchoingAndStopping;
        char keyboardHelpHasSeenFirstKey;
        char keyboardPassthruEnabled;
        char isDashboardEnabled;
        char isScreenLocked;
        char isRunningDuringInstallation;
        char isQuickStartRunning;
        char isBrailleCaptionEnabled;
        char hasConfiguredBrailleDevice;
        char hasActiveBrailleDevice;
        char isElementDictionaryEnabled;
        char isAppleScriptEnabled;
        char isAppleScriptInstalled;
        char shouldOutputSelectionChanged;
        char shouldSkipRedundantLabels;
        char shouldSkipSplash;
        char isTimeMachineEnabled;
        char isVersionsUIEnabled;
        char isInTimeMachineTransition;
        char shouldBailWaitForElementHash;
        char isMouseKeysOn;
        char isStickyKeysOn;
        char isSlowKeysOn;
        char isExposeEnabled;
        char isInAppFullscreenSpace;
        char isWakingFromInactivity;
        char isAudioDuckingEnabled;
        char didCrashRepeatedly;
    } _srwFlags;
    BOOL _isKeyboardHelpEnabled;
    SCRDFRManager *_dfrManager;
    NSDate *_lastFocusTimestamp;
    SCRDFRFocusManager *__dfrFocusManager;
    SCRSiriObserver *__siriObserver;
    SCRSystemKeyManager *_systemKeyManager;
}

+ (void)setVoiceOverInPreferencesEnabled:(BOOL)arg1;
+ (void)_stopAllSound;
+ (BOOL)isVoiceOverRunning;
+ (void)_invalidateWorkspace;
+ (BOOL)isLicensedEchoReponse:(BOOL)arg1;
+ (BOOL)isLicensed;
+ (void)initialize;
+ (id)speechAttributeStringForRotorPosition:(int)arg1;
+ (id)outputQueueIDForModifierMask:(unsigned long long)arg1;
+ (id)stringForCommand:(id)arg1 inCategory:(id)arg2 withExtension:(id)arg3 forElement:(id)arg4 warnOnMissingString:(BOOL)arg5;
+ (id)stringForCommand:(id)arg1 inCategory:(id)arg2 withExtension:(id)arg3 warnOnMissingString:(BOOL)arg4;
+ (id)stringForCommand:(id)arg1 inCategory:(id)arg2 withExtension:(id)arg3;
+ (void)setPersistentHotSpot:(id)arg1 isActive:(BOOL)arg2;
+ (void)removePersistentHotSpot:(id)arg1;
+ (id)getPersistentHotSpot:(id)arg1;
+ (void)_coerceArray:(id)arg1 toColor:(id)arg2;
@property(retain, nonatomic) SCRSystemKeyManager *systemKeyManager; // @synthesize systemKeyManager=_systemKeyManager;
@property(retain, nonatomic, setter=_setSiriObserver:) SCRSiriObserver *_siriObserver; // @synthesize _siriObserver=__siriObserver;
@property(retain, nonatomic) SCRDFRFocusManager *_dfrFocusManager; // @synthesize _dfrFocusManager=__dfrFocusManager;
@property(retain, nonatomic) NSDate *lastFocusTimestamp; // @synthesize lastFocusTimestamp=_lastFocusTimestamp;
@property(retain, nonatomic) SCRDFRManager *dfrManager; // @synthesize dfrManager=_dfrManager;
@property(nonatomic, setter=setKeyboardHelpEnabled:) BOOL isKeyboardHelpEnabled; // @synthesize isKeyboardHelpEnabled=_isKeyboardHelpEnabled;
@property(nonatomic) int primaryBrailleDisplayToken; // @synthesize primaryBrailleDisplayToken=_primaryBrailleDisplayToken;
- (BOOL)updateCapsLockModifierMask;
- (BOOL)isSafeToLaunchAnotherApp;
- (void)_messageTraceIfNecessary;
- (void)_messageTraceIfNecessary:(id)arg1;
- (BOOL)_shouldMessageTraceForUser;
- (void)_setShouldMessageTraceForUser:(BOOL)arg1;
- (id)_shouldMessageTraceForUserKey;
- (void)_messageTrace;
- (unsigned int)_rootPowerPort;
- (BOOL)_registerSleepWakeNotifications;
- (void)outputWorkspaceSummary;
- (void)displayConfigurationDidChange;
- (double)slowKeyAcceptanceDelay;
@property(readonly, nonatomic) BOOL slowKeyEnabled; // @dynamic slowKeyEnabled;
@property(nonatomic) BOOL quickNavOverridesSelectionEvents; // @dynamic quickNavOverridesSelectionEvents;
@property(nonatomic) BOOL nonArrowQuickNavEnabled; // @dynamic nonArrowQuickNavEnabled;
@property(nonatomic) BOOL quickNavTemporarilyDisabled; // @dynamic quickNavTemporarilyDisabled;
@property(readonly, nonatomic) BOOL trackpadCommanderEnabled; // @dynamic trackpadCommanderEnabled;
@property(readonly, nonatomic) BOOL keyboardCommanderEnabled; // @dynamic keyboardCommanderEnabled;
@property(nonatomic) BOOL numpadCommanderEnabled; // @dynamic numpadCommanderEnabled;
- (void)updateMouseCursorState;
- (void)_safeUpdateMouseCursorState;
- (BOOL)isInAppFullscreenSpace;
- (void)handleWorkspaceChange:(id)arg1;
- (void)_handleWorkspaceChange:(id)arg1;
- (void)_outputWorkspaceSummary:(id)arg1;
- (void)_goToDesktop;
- (id)_appAndWindowDictionaryForWorkspaces:(id)arg1;
- (void)clearApplicationModifiers;
- (void)_safeClearApplicationModifiers;
- (BOOL)isElementDictionaryEnabled;
- (void)_clearModifierState;
- (void)dismissDashboard;
- (BOOL)isRunningDuringInstallation;
- (void)_checkForInstallationProcess;
- (void)_unmuteAudioIfNeeded;
- (void)updateSecureInputState;
- (BOOL)isExposeEnabled;
- (void)setExposeEnabled:(BOOL)arg1;
- (BOOL)isDashboardEnabled;
- (void)setDashboardEnabled:(BOOL)arg1 changed:(char *)arg2;
- (void)_systemKeyboardSettingsChanged:(id)arg1;
- (void)_systemMouseSettingsChanged:(id)arg1;
- (void)_systemPolarityChanged:(id)arg1;
- (void)_systemContrastChanged:(id)arg1;
- (void)_systemZoomChanged:(id)arg1;
- (void)_handleSystemZoomLevelChanged;
- (double)_currentZoomFactor;
- (void)_languageChanged:(id)arg1;
- (void)_switcherInputSourceChange:(id)arg1;
- (void)_inputSourceChange:(id)arg1;
- (void)_loginFailed:(id)arg1;
- (void)_logoutCanceled:(id)arg1;
- (void)_logoutInitiated:(id)arg1;
- (void)_shutdownInitiated:(id)arg1;
- (void)_restartInitiated:(id)arg1;
- (id)_shutdownMessage;
- (void)_setShutdownMessage:(id)arg1;
- (void)setShouldSkipSplash:(BOOL)arg1;
- (BOOL)isQuickStartRunning;
- (void)setIsQuickStartRunning:(BOOL)arg1;
- (BOOL)isQuickStarted;
- (void)setIsQuickStarted:(BOOL)arg1;
- (BOOL)isUserLoggedIn;
- (void)setIsUserLoggedIn:(BOOL)arg1;
- (BOOL)isLaunchedAtLogin;
- (void)setIsLaunchedAtLogin:(BOOL)arg1;
- (BOOL)isScreenSaverActive;
- (BOOL)isAudioDuckingEnabled;
- (BOOL)shouldSkipRedundantLabels;
- (void)setShouldSkipRedundantLabels:(BOOL)arg1;
- (BOOL)isScreenCurtainEnabled;
- (void)setIsScreenCurtainEnabled:(BOOL)arg1;
- (void)setScreenCurtainAboveEverything:(BOOL)arg1;
- (void)_setScreenCurtainAboveEverything:(id)arg1;
- (BOOL)toggleScreenCurtain;
- (void)updateSystemActivity;
- (void)_updateSystemActivity;
- (void)triggerVirtualKeyboardKey:(unsigned short)arg1;
- (void)_triggerVirtualKeyboardKey:(id)arg1;
- (void)triggerKeyboardKeyString:(id)arg1 withModifierMask:(unsigned long long)arg2;
- (void)_triggerKeyboardKeyString:(id)arg1;
- (void)triggerCommand:(id)arg1 withInfo:(id)arg2;
- (void)_triggerCommand:(id)arg1;
- (void)triggerKeyboardKey:(id)arg1;
- (void)_triggerKeyboardKey:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)_processEvent:(id)arg1;
- (void)_handleContextualHelp;
- (void)handleContextualHelp;
- (void)handleEvent:(id)arg1;
- (void)handleApplicationFocus:(id)arg1;
- (void)handleSilence;
- (void)handleConsoleEnabled:(BOOL)arg1;
- (void)handleEscape:(BOOL)arg1;
- (void)closeGuidesAndCancelModalSessionsWithOutput;
- (void)_closeGuidesAndCancelModalSessionsWithOutput;
- (BOOL)isModalSessionEnabled;
- (void)setIsModalSessionEnabled:(BOOL)arg1;
- (void)_wst_setIsModalSessionEnabled:(id)arg1;
- (int)eventTag;
- (void)setEventTag:(int)arg1 withCancelString:(id)arg2;
- (void)setEventTag:(int)arg1;
- (void)_wst_setEventTag:(id)arg1;
- (BOOL)shouldGenerateBraille;
- (BOOL)isBrailleCaptionPanelEnabled;
- (void)setIsBrailleCaptionPanelEnabled:(BOOL)arg1;
- (BOOL)hasActiveBrailleDevice;
- (void)setHasActiveBrailleDevice:(BOOL)arg1;
- (BOOL)hasConfiguredBrailleDevice;
- (void)setHasConfiguredBrailleDevice:(BOOL)arg1;
- (BOOL)isKeyEchoEnabled;
- (BOOL)toggleKeyEchoEnabled;
- (BOOL)keyboardHelpOnlyEnabled;
- (void)setKeyboardHelpOnlyEnabled:(BOOL)arg1;
- (void)setDidCrashRepeatedly:(BOOL)arg1;
- (void)stop;
- (void)bounce;
- (void)stopAndPlayMessage:(BOOL)arg1;
- (void)_cleanupForShutdown;
- (int)run;
- (BOOL)isRunning;
- (void)_portablePreferencesChanged:(id)arg1;
- (void)_portablePreferencesDetected:(id)arg1;
- (void)diskWillEject:(id)arg1;
- (void)_anotherDefaultsFamilyMemberLaunched:(id)arg1;
- (void)_echoProfileChanged;
- (BOOL)shouldOutputSelectionChanged;
- (BOOL)isAppleScriptEnabled;
- (void)_registerForAppleEvents;
- (void)_stopAndPlayShutdownMessage:(id)arg1;
- (void)_handleAppleScriptQuitApplicationEvent:(const struct AEDesc *)arg1;
- (void)dealloc;
- (void)invalidateThreadsWithWeakLinks;
- (BOOL)isMouseDragging;
- (void)setShouldBailWaitForElementHash:(BOOL)arg1;
- (BOOL)shouldBailWaitForElementHash;
- (void)_dictationFailed:(id)arg1;
- (void)_dictationDidStopNotification:(id)arg1;
- (void)_dictationDidStartNotification:(id)arg1;
- (void)_timeMachineStarted:(id)arg1;
- (void)_timeMachineDismissed:(id)arg1;
- (void)setIsInTimeMachineTransition:(BOOL)arg1;
- (BOOL)isInTimeMachineTransition;
- (void)_playTimeMachineTransitionSound;
- (void)setTimeMachineEnabled:(BOOL)arg1;
- (BOOL)isTimeMachineEnabled;
- (void)setVersionsUIEnabled:(BOOL)arg1;
- (BOOL)isVersionsUIEnabled;
- (void)_screenIsUnlocked:(id)arg1;
- (void)_screenIsLocked:(id)arg1;
- (BOOL)isScreenLocked;
- (void)_wst_updateScreenSaverState;
- (void)_systemSoundSettingsChanged:(id)arg1;
- (id)eventFactory;
- (id)applicationManager;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openNotificationsGuideEventHandler:(id)arg1;
- (void)_openNotificationsGuide;
- (void)changeSystemVolumeEventHandler:(id)arg1;
- (void)zigzagGestureEventHandler:(id)arg1;
- (id)currentZigzagCommand;
- (id)currentZigzagGestureName;
- (void)updateZigzagStateWithEvent:(id)arg1 gestureName:(id)arg2;
- (void)_updateZigzagStateWithDirection:(int)arg1 gestureName:(id)arg2;
- (void)disableGestureCommanderEventHandler:(id)arg1;
- (void)enableGestureCommanderEventHandler:(id)arg1;
- (void)cancelSpeakingEventHandler:(id)arg1;
- (void)addPronunciationEventHandler:(id)arg1;
- (void)muteVoiceOverToggleEventHandler:(id)arg1;
- (void)muteSpeechToggleEventHandler:(id)arg1;
- (void)muteSoundToggleEventHandler:(id)arg1;
- (id)takeVoiceOverCursorScreenshot:(id)arg1;
- (void)customFileRunScriptEventHandler:(id)arg1;
- (void)customFileOpenWithFinderEventHandler:(id)arg1;
- (void)saveLastOutputRequestEventHandler:(id)arg1;
- (void)dragAndDropBeforeHotSpotTagHandler:(id)arg1;
- (void)dragAndDropBeforeHotSpotEventHandler:(id)arg1;
- (void)dragAndDropAfterHotSpotTagHandler:(id)arg1;
- (void)dragAndDropAfterHotSpotEventHandler:(id)arg1;
- (void)dragAndDropOnHotSpotTagHandler:(id)arg1;
- (void)dragAndDropOnHotSpotEventHandler:(id)arg1;
- (void)dragAndDropAfterVOCursorEventHandler:(id)arg1;
- (void)dragAndDropBeforeVOCursorEventHandler:(id)arg1;
- (void)dragAndDropOnVOCursorEventHandler:(id)arg1;
- (void)markForDragAndDropEventHandler:(id)arg1;
- (void)_dispatchMarkForDragAndDropForApplication:(id)arg1;
- (void)stickyMouseEventHandler:(id)arg1;
- (void)_disableMouseTracking;
- (void)doubleClickMouseEventHandler:(id)arg1;
- (void)clickMouseEventHandler:(id)arg1;
- (void)echoMouseLocation:(id)arg1;
- (void)echoMouseLocationRelativeToWindow:(id)arg1;
- (void)_echoMouseLocationRelativeToPoint:(const struct CGPoint *)arg1 withElementDescription:(id)arg2 withWorkspaceEventHandlerInfo:(id)arg3;
- (void)echoMouseSummary:(id)arg1;
- (struct CGPoint)_mouseLocationMoved:(char *)arg1;
- (void)synchVirtualFocusToMouseEventHandler:(id)arg1;
- (void)openVoiceOverWalkthroughEventHandler:(id)arg1;
- (BOOL)openUtilityEventHandler:(id)arg1;
- (void)screenCurtainEventHandler:(id)arg1;
- (void)toggleVexposeHideEventHandler:(id)arg1;
- (void)toggleVexposeTileEventHandler:(id)arg1;
- (void)cursorTrackingEnabledEventHandler:(id)arg1;
- (void)openHelpEventHandler:(id)arg1;
- (void)keyboardElementAdditionalOverviewEventHandler:(id)arg1;
- (void)keyboardElementOverviewEventHandler:(id)arg1;
- (void)focusedElementAdditionalOverviewEventHandler:(id)arg1;
- (void)focusedElementOverviewEventHandler:(id)arg1;
- (void)windowOverviewEventHandler:(id)arg1;
- (void)workspaceOverviewEventHandler:(id)arg1;
- (void)dockEventHandler:(id)arg1;
- (void)desktopEventHandler:(id)arg1;
- (void)menuExtrasEventHandler:(id)arg1;
- (void)menuBarEventHandler:(id)arg1;
- (void)repeatLastOutputRequestEventHandler:(id)arg1;
- (void)copyLastOutputRequestToPasteboardEventHandler:(id)arg1;
- (void)nextSpeechAttributeEventHandler:(id)arg1;
- (void)previousSpeechAttributeEventHandler:(id)arg1;
- (void)_changeSpeechAttributeMovingForward:(BOOL)arg1 eventInfo:(id)arg2;
- (void)toggleWebTableSpeakRowColumnIndices:(id)arg1;
- (void)switchWebNavigationType:(id)arg1;
- (void)changeSpeechRate:(float)arg1;
- (void)decreaseSpeechVolumeEventHandler:(id)arg1;
- (void)increaseSpeechVolumeEventHandler:(id)arg1;
- (void)decreaseSpeechIntonationEventHandler:(id)arg1;
- (void)increaseSpeechIntonationEventHandler:(id)arg1;
- (void)incrementSpeechAttributeWithEventInfo:(id)arg1;
- (void)decrementSpeechAttributeWithEventInfo:(id)arg1;
- (void)nextSpeechAttributeWithEventInfo:(id)arg1;
- (void)previousSpeechAttributeWithEventInfo:(id)arg1;
- (void)decreaseSpeechPitchEventHandler:(id)arg1;
- (void)increaseSpeechPitchEventHandler:(id)arg1;
- (void)decreaseSpeechRateEventHandler:(id)arg1;
- (void)increaseSpeechRateEventHandler:(id)arg1;
- (void)increaseSpeechAttributeEventHandler:(id)arg1;
- (void)decreaseSpeechAttributeEventHandler:(id)arg1;
- (void)_changeSpecificSpeechAttribute:(int)arg1 increasing:(BOOL)arg2 info:(id)arg3;
- (void)_changeSpeechAttributeIsIncreasing:(BOOL)arg1 event:(id)arg2;
- (void)_decreaseSpeechRotorPosition;
- (void)_increaseSpeechRotorPosition;
- (int)_speechRotorPosition;
- (void)_setSpeechRotorPosition:(int)arg1;
- (void)toggleShouldOutputSelectionChanged:(id)arg1;
- (void)toggleTrackpadCommanderEventHandler:(id)arg1;
- (void)toggleKeyboardCommanderEventHandler:(id)arg1;
- (void)toggleNumPadEventHandler:(id)arg1;
- (void)toggleQuickNavEventHandler:(id)arg1;
- (void)lockVoiceOverKeysEventHandler:(id)arg1;
- (void)keyboardPassthruEventHandler:(id)arg1;
- (void)keyboardHelpEventHandler:(id)arg1;
- (void)lastProfileHandler:(id)arg1;
- (void)openProfilesGuideEventHandler:(id)arg1;
- (void)openSearchCommandsGuideEventHandler:(id)arg1;
- (void)openCommandsGuideEventHandler:(id)arg1;
- (void)openWindowsGuideEventHandler:(id)arg1;
- (void)openApplicationsGuideEventHandler:(id)arg1;
- (void)openGuideEventHandler:(id)arg1;
- (void)openManualHandler:(id)arg1;
- (void)virtualKeyboardPressEventHandler:(id)arg1;
- (void)brailleDisplayInputEventHandler:(id)arg1;
- (void)braillePanelAdjustLocationTagHandler:(id)arg1;
- (void)braillePanelAdjustSizeTagHandler:(id)arg1;
- (void)braillePanelAdjustLocationEventHandler:(id)arg1;
- (void)braillePanelAdjustSizeEventHandler:(id)arg1;
- (void)braillePanelToggleEventHandler:(id)arg1;
- (void)captionAdjustPanelLocationTagHandler:(id)arg1;
- (void)captionAdjustPanelSizeTagHandler:(id)arg1;
- (void)captionAdjustPanelLocationEventHandler:(id)arg1;
- (void)captionAdjustPanelSizeEventHandler:(id)arg1;
- (void)captionDecreaseFontSizeEventHandler:(id)arg1;
- (void)captionIncreaseFontSizeEventHandler:(id)arg1;
- (void)captionToggleEventHandler:(id)arg1;
- (void)portablePreferencesGuideHandler:(id)arg1;
- (void)profilesGuideHandler:(id)arg1;
- (void)windowGuideHandler:(id)arg1;
- (void)exitFullscreeGuideHandler:(id)arg1;
- (void)dashboardLauncherGuideHandler:(id)arg1;
- (void)applicationGuideHandler:(id)arg1;
- (void)routeToBrailleElementEventHandler:(id)arg1;
- (void)releaseElementsEventHandler:(id)arg1;
- (void)doNothingEventHandler:(id)arg1;
- (id)eventDispatcher;
- (void)updateEventHandlerInfo:(id)arg1 request:(id)arg2 handled:(BOOL)arg3;
- (void)registerForEventHandlerTargets;
- (void)closeGuide;
- (void)_openMainGuideWithOpenSubguideType:(int)arg1;
- (void)guideDidClose;
- (void)_openGuide:(id)arg1 selectionIndex:(unsigned long long)arg2;
- (void)openGuideInfo:(id)arg1;
- (void)openGuide:(id)arg1;
- (BOOL)isGuideOpen;
- (BOOL)_guideHandleEvent:(id)arg1;
- (void)_buildWindowsGuide:(id)arg1 forApplication:(id)arg2;
- (void)_buildDashboardLauncherGuide:(id)arg1;
- (void)_buildDashboardWidgetsGuide:(id)arg1;
- (void)_buildProfilesGuide:(id)arg1;
- (void)_buildSystemDialogsGuide:(id)arg1 excludingApplication:(id)arg2;
- (void)guideWillOpen:(id)arg1;
- (void)_buildApplicationGuide:(id)arg1 withTag:(int)arg2;
- (void)_threadedBuildMainGuide:(id)arg1 withOpenSubguideType:(id)arg2;
- (void)_addToLearnSoundsGuide:(id)arg1;
- (void)_addToCommandsGuide:(id)arg1 withOpenSubguideType:(int)arg2 mainGuide:(id)arg3;
- (void)_addNumpadCommanderToCommandsGuide:(id)arg1 mainGuide:(id)arg2;
- (void)_addKeyboardCommanderToCommandsGuide:(id)arg1 mainGuide:(id)arg2;
- (void)_addTrackpadCommanderToCommandsGuide:(id)arg1 mainGuide:(id)arg2;
- (void)_addBrailleCommanderToCommandsGuide:(id)arg1 mainGuide:(id)arg2;
- (void)_addQuickNavToCommandsGuide:(id)arg1 mainGuide:(id)arg2;
- (void)increaseSpeechAttribute:(unsigned char)arg1 withEvent:(id)arg2 forCategory:(id)arg3;
- (void)decreaseSpeechAttribute:(unsigned char)arg1 withEvent:(id)arg2 forCategory:(id)arg3;
- (void)_registerEventTapForSpeechAttributeGuide;
- (void)_setSpeechAttributeGuide:(id)arg1;
- (id)speechAttributeGuide;
- (void)_closeSpeechAttributeGuideAndShouldFadeAway:(BOOL)arg1;
- (void)_releaseSpeechAttributeGuideAfterFadeTime:(id)arg1;
- (void)_openSpeechAttributeGuide:(unsigned char)arg1 withEvent:(id)arg2 forCategory:(id)arg3;
- (void)_closeTimerFire;
- (void)_postponeSpeechAttributeGuideCloseTimer;
- (void)_stopSpeechAttributeGuideCloseTimer;
- (void)_startSpeechAttributeGuideCloseTimer;
- (void)_createSpeechAttributeGuideCloseTimer;
- (void)_buildVoiceSelectionRotor:(id)arg1;
- (void)openSpeechAttributeGuide:(id)arg1;
- (void)_buildVerbosityRotorGuide:(id)arg1 withOpenSubguideName:(id)arg2 startingWithKey:(id)arg3 andOpenNewGuide:(BOOL)arg4;
- (id)_orderedRotorOptions;
- (void)_sendBrailleLineForRotor:(id)arg1 withValue:(id)arg2;
- (void)verbosityRotorEventHandler:(id)arg1;
- (id)_selectRotorOptionForDirection:(long long)arg1 wrapped:(char *)arg2;
- (void)_setVerbosityOption:(id)arg1;
- (BOOL)_handleVerbosityZigzagEvent:(id)arg1;
- (void)openVerbosityRotorHandler:(id)arg1;
- (BOOL)quickVerbosityRotorOption:(id)arg1;
- (void)openVerbosityRotor:(id)arg1 forFirstTime:(BOOL)arg2;
- (id)_selectedOptionForVerbosityRotor;
- (id)_stringKeyForVerbosityRotor;
- (int)_eventTagForVerbosityRotor;
- (void)_openVerbosityRotorGuideWithName:(id)arg1 startingWithKey:(id)arg2;
- (void)openVerbosityRotorGuide:(id)arg1;
- (float)defaultSystemBrightness;
- (float)defaultSystemVolume;
- (void)handleNumPadZeroModifier;
- (void)handleModifierMask:(unsigned long long)arg1;
- (void)handleStickyKey:(short)arg1;
- (void)_wst_appendCommandTitleAndDescriptionToRequest:(id)arg1 forCommands:(id)arg2 argument:(id)arg3;
- (void)echoCommandTitleAndDescriptionForBrailleKey:(id)arg1 withCommand:(id)arg2;
- (void)_wst_echoCommandTitleAndDescriptionForBrailleKeyInfoDict:(id)arg1;
- (void)handleKeyboardHelpWithEvent:(id)arg1;
- (void)cancelKeyboardHelpIntroIfNeeded;
- (BOOL)_wst_stopKeyboardHelpWithRequest:(id)arg1;
- (BOOL)_endKeyboardHelpWithRequest:(id)arg1;
- (void)endKeyboardHelpEchoCharacter:(BOOL)arg1;
- (void)startKeyboardHelp;
- (BOOL)_isCommandCustomOpenCommand:(id)arg1;
- (id)_requestWithAuthenticationRequiredAnnouncement;
- (void)_updateEventHandlerInfoForLockScreen:(id)arg1;
- (BOOL)_isEventDisabledInLockScreen;
- (void)_monitorHotSpots:(id)arg1;
- (void)watchHotSpot:(id)arg1;
- (void)_setWatchHotSpot:(BOOL)arg1 forNumber:(id)arg2 forBundleID:(id)arg3;
- (BOOL)_anyHotSpotsToWatch;
- (BOOL)_isHotSpotBeingWatched:(id)arg1;
- (id)_hotSpotsBeingWatched;
- (void)_enableHotSpotWatcher:(BOOL)arg1;
- (void)_dragToHotSpot:(id)arg1 position:(int)arg2;
- (void)hotSpotMenu:(id)arg1;
- (void)updateHotSpots;
- (void)describeHotSpot:(id)arg1;
- (void)removeHotSpot:(id)arg1;
- (void)_navigateToHotSpotNumber:(id)arg1 info:(id)arg2;
- (void)navigateHotSpot:(id)arg1;
- (void)navigateHotSpotFromGuide:(id)arg1;
- (void)setHotSpot:(id)arg1;
- (void)previousHotSpotHandler:(id)arg1;
- (void)nextHotSpotHandler:(id)arg1;
- (void)_hotSpotMovementHandler:(id)arg1 direction:(long long)arg2;
- (id)_numberForEvent:(id)arg1;
- (void)initializeHotSpots;
- (void)setMuteSound:(id)arg1;
- (id)muteSound;
- (void)setMuteSpeech:(id)arg1;
- (id)muteSpeech;
- (void)appleScriptHandleOutput:(id)arg1;
- (void)appleScriptHandleOpen:(id)arg1;
- (void)appleScriptHandleCloseMenu:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)appleScriptPerformCommand:(id)arg1;
- (void)appleScriptHandleQuit:(id)arg1;
- (void)uninstallAppleEventQuitHandler;
- (void)installAppleEventQuitHandler;
- (void)uninstallAppleScriptEventHandlers;
- (void)installAppleScriptEventHandlers;
- (BOOL)doesAppleScriptFileExist;

@end

