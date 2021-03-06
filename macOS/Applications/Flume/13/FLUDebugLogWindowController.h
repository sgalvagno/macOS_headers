//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTouchBarDelegate.h"

@class CDEvents, FLUBlurView, FLUBorderView, FLUImageView, FLUPopUpButton, FLUSmallTransparentButton, FLUTextView, NSString;

@interface FLUDebugLogWindowController : NSWindowController <NSTouchBarDelegate>
{
    FLUImageView *_logoImageView;
    FLUBorderView *_titleBorderView;
    FLUSmallTransparentButton *_resetButton;
    FLUSmallTransparentButton *_showInFinderButton;
    FLUPopUpButton *_loggingLevelPopupButton;
    FLUBorderView *_bottomBorderView;
    FLUTextView *_textView;
    FLUBlurView *_blurView;
    CDEvents *_events;
}

@property(retain, nonatomic) CDEvents *events; // @synthesize events=_events;
@property(nonatomic) __weak FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) FLUTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak FLUBorderView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) __weak FLUPopUpButton *loggingLevelPopupButton; // @synthesize loggingLevelPopupButton=_loggingLevelPopupButton;
@property(nonatomic) __weak FLUSmallTransparentButton *showInFinderButton; // @synthesize showInFinderButton=_showInFinderButton;
@property(nonatomic) __weak FLUSmallTransparentButton *resetButton; // @synthesize resetButton=_resetButton;
@property(nonatomic) __weak FLUBorderView *titleBorderView; // @synthesize titleBorderView=_titleBorderView;
@property(nonatomic) __weak FLUImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (id)loggingLevelMenu;
- (void)updateWindowLevel;
- (void)refreshView;
- (void)updateTextView;
- (void)updateLogFileObserver;
- (void)didChangeLoggingLevel:(id)arg1;
- (void)didPressShowInFinderButton:(id)arg1;
- (void)didPressResetButton:(id)arg1;
- (void)didPressTouchBarDebugFinderItem:(id)arg1;
- (void)didPressTouchBarDebugResetItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)refreshTouchBar;
- (void)didLogMessage:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)windowLevelStatusWillChange:(id)arg1;
- (void)windowDidLoad;
- (void)didChangeLanguage:(id)arg1;
- (void)didChangeCurrentLocale:(id)arg1;
- (void)updateFrames;
- (void)dealloc;
- (void)setupAccessibility;
- (void)setupWindowController;
- (void)localizeUserInterface;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

