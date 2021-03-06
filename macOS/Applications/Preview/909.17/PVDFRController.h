//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTouchBarDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "PVDFRActionTarget-Protocol.h"
#import "PVDFRModeControllerDelegate-Protocol.h"

@class AKController, NSCustomTouchBarItem, NSGroupTouchBarItem, NSString, NSTouchBar, NSView, PVDFRAdjustmentsController, PVDFRHighlightsController, PVDFRModeController, PVDFRSelectionController, PVWindowController;

@interface PVDFRController : NSObject <PVDFRModeControllerDelegate, PVDFRActionTarget, NSTouchBarProvider, NSTouchBarDelegate>
{
    NSView *_akIntelligentSketchButton;
    NSView *_akVariableStrokeButton;
    PVWindowController *_windowController;
    NSTouchBar *_touchBar;
    BOOL _isInDFRAction;
    BOOL _canReturnToPreviousDFRMode;
    PVDFRModeController *_modeController;
    PVDFRAdjustmentsController *_adjustmentsController;
    PVDFRSelectionController *_selectionController;
    PVDFRHighlightsController *_highlightsController;
    NSCustomTouchBarItem *_highlightOptionsItem;
    NSGroupTouchBarItem *_akTouchBarItem;
    NSCustomTouchBarItem *_cropItem;
    NSCustomTouchBarItem *_underlineItem;
    NSCustomTouchBarItem *_strikethroughItem;
}

+ (id)_imageForSender:(id)arg1;
+ (id)_titleForSender:(id)arg1;
+ (id)_accessibilityLabelForSender:(id)arg1;
+ (id)_accessibilityIdentifierForSender:(id)arg1;
@property BOOL canReturnToPreviousDFRMode; // @synthesize canReturnToPreviousDFRMode=_canReturnToPreviousDFRMode;
@property(retain) NSCustomTouchBarItem *strikethroughItem; // @synthesize strikethroughItem=_strikethroughItem;
@property(retain) NSCustomTouchBarItem *underlineItem; // @synthesize underlineItem=_underlineItem;
@property(retain) NSCustomTouchBarItem *cropItem; // @synthesize cropItem=_cropItem;
@property(retain) NSGroupTouchBarItem *akTouchBarItem; // @synthesize akTouchBarItem=_akTouchBarItem;
@property(retain) NSCustomTouchBarItem *highlightOptionsItem; // @synthesize highlightOptionsItem=_highlightOptionsItem;
@property(retain) PVDFRHighlightsController *highlightsController; // @synthesize highlightsController=_highlightsController;
@property(retain) PVDFRSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain) PVDFRAdjustmentsController *adjustmentsController; // @synthesize adjustmentsController=_adjustmentsController;
@property(retain) PVDFRModeController *modeController; // @synthesize modeController=_modeController;
@property(nonatomic) BOOL isInDFRAction; // @synthesize isInDFRAction=_isInDFRAction;
- (void).cxx_destruct;
- (void)dfrButtonHit:(id)arg1;
- (void)dfrModeChanged:(unsigned long long)arg1;
- (long long)tagForHighlightTool;
- (long long)tagForEditBanner;
- (void)_validateSelectionController;
- (void)_validateEditGeometryControls;
- (void)_validateModeController;
- (void)_validateScrubber:(id)arg1;
- (void)_validateHighlightOptions;
- (void)_validateItems;
- (BOOL)_validateButton:(id)arg1;
- (BOOL)validateHighlightOptionButton:(id)arg1;
- (id)_createButtonWithTag:(long long)arg1 useImage:(BOOL)arg2;
- (void)selectMarkupStyle:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_touchBarItemIdentifiers;
- (id)principleItemIdentifier;
- (void)updateTouchBar;
- (void)textSelectionDidChange:(BOOL)arg1;
- (void)restoreTouchBarModeToPrevious;
@property(readonly, nonatomic) unsigned long long lastSavedTouchBarMode;
@property(nonatomic) unsigned long long touchBarMode;
- (id)makeTouchBar;
@property(retain) NSTouchBar *touchBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) AKController *annotationController;
- (void)windowDidUpdate:(id)arg1;
- (void)updateToolsNotification:(id)arg1;
@property __weak PVWindowController *windowController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

