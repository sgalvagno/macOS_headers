//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NCMaterialReducedTransparencyDelegate-Protocol.h"
#import "_NCWindowDelegate-Protocol.h"

@class NCConfigButton, NCLineView, NCNotificationTabContainer, NCShadowTextFieldCell, NCTexturedView, NCTodayConfigurationViewController, NCTodayViewController, NSButton, NSLayoutConstraint, NSObject, NSSegmentedControl, NSString, NSToolbar, NSTrackingArea, NSView, NSViewController, _TtC21NotificationCenterApp28NotificationsTableController;
@protocol OS_dispatch_source;

@interface NCNotificationCenterWindowController : NSWindowController <_NCWindowDelegate, NCMaterialReducedTransparencyDelegate>
{
    NSViewController *_visibleViewController;
    NSObject<OS_dispatch_source> *_mouse_moved_source;
    NSTrackingArea *_trackingArea;
    _Bool _simulatedOpen;
    _Bool _showingConfiguration;
    _Bool _settingUp;
    _Bool _didSendMenuNotification;
    _Bool _appStoreShouldShow;
    NCConfigButton *_configButton;
    _TtC21NotificationCenterApp28NotificationsTableController *_tableController;
    NCTodayViewController *_todayController;
    NCTodayConfigurationViewController *_todayConfigController;
    NSView *_contentView;
    NSView *_statusView;
    NCShadowTextFieldCell *_fullScreenTextCell;
    NSSegmentedControl *_segmentedButons;
    NCTexturedView *_texturedBackground;
    NCNotificationTabContainer *_tabContainer;
    NSView *_defaultBottomContent;
    NSView *_configurationBottomContent;
    NSView *_configurationContainer;
    NSView *_bottomContainer;
    NCLineView *_configLine;
    NCLineView *_configDebugRightLine;
    NSLayoutConstraint *_tabViewConstraint;
    NSLayoutConstraint *_configDoneButtonLeftConstraint;
    NSButton *_prefsButton;
    NSButton *_editButton;
    NSToolbar *_debugToolbar;
}

@property(nonatomic) _Bool appStoreShouldShow; // @synthesize appStoreShouldShow=_appStoreShouldShow;
@property(nonatomic) NSToolbar *debugToolbar; // @synthesize debugToolbar=_debugToolbar;
@property(nonatomic) NSButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) NSButton *prefsButton; // @synthesize prefsButton=_prefsButton;
@property(retain, nonatomic) NSLayoutConstraint *configDoneButtonLeftConstraint; // @synthesize configDoneButtonLeftConstraint=_configDoneButtonLeftConstraint;
@property(nonatomic) NSLayoutConstraint *tabViewConstraint; // @synthesize tabViewConstraint=_tabViewConstraint;
@property(nonatomic) NCLineView *configDebugRightLine; // @synthesize configDebugRightLine=_configDebugRightLine;
@property(nonatomic) NCLineView *configLine; // @synthesize configLine=_configLine;
@property(nonatomic) NSView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) NSView *configurationContainer; // @synthesize configurationContainer=_configurationContainer;
@property(retain, nonatomic) NSView *configurationBottomContent; // @synthesize configurationBottomContent=_configurationBottomContent;
@property(retain, nonatomic) NSView *defaultBottomContent; // @synthesize defaultBottomContent=_defaultBottomContent;
@property(nonatomic) NCNotificationTabContainer *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(nonatomic) NCTexturedView *texturedBackground; // @synthesize texturedBackground=_texturedBackground;
@property(nonatomic) NSSegmentedControl *segmentedButons; // @synthesize segmentedButons=_segmentedButons;
@property(nonatomic) NCShadowTextFieldCell *fullScreenTextCell; // @synthesize fullScreenTextCell=_fullScreenTextCell;
@property(nonatomic) NSView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) NCTodayConfigurationViewController *todayConfigController; // @synthesize todayConfigController=_todayConfigController;
@property(readonly, nonatomic) NCTodayViewController *todayController; // @synthesize todayController=_todayController;
@property(readonly, nonatomic) _TtC21NotificationCenterApp28NotificationsTableController *tableController; // @synthesize tableController=_tableController;
@property(nonatomic) NCConfigButton *configButton; // @synthesize configButton=_configButton;
- (void).cxx_destruct;
- (void)_setConfigurationMode:(_Bool)arg1;
- (void)increasedContrastChanged:(_Bool)arg1;
- (void)reducedTransparencyChanged:(_Bool)arg1;
- (void)ncWindow:(id)arg1 firstResponderChangedFrom:(id)arg2 to:(id)arg3;
- (void)_fixupTrackingArea;
- (void)_mouseMoved;
- (void)mouseMoved:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)wasHidden;
- (void)willBeHidden;
- (void)wasShown;
- (void)willBeShown;
- (void)openLayerDumpInMica:(id)arg1;
- (void)configurationToggle:(id)arg1;
- (void)toggleOpenClosed:(id)arg1;
- (void)_tabChanged:(BOOL)arg1;
- (void)tabChanged:(id)arg1;
- (void)setFailedToConnect;
- (void)getExtensions:(id)arg1;
- (void)layoutForDisplay:(unsigned int)arg1;
- (void)launchPreferences:(id)arg1;
- (void)showNotificationsView;
- (void)showTodayView;
- (void)_debugDump:(id)arg1;
@property(readonly, nonatomic) double fullWidth;
@property(readonly, nonatomic) double contentWidth;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initForDebug:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

