//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

@interface NSViewDynamicToolTipManager : NSObject
{
    NSView *_view;
    struct __CFRunLoopTimer *_monitorMovementTimerRef;
    struct CGPoint _lastFixedMousePoint;
    struct CGRect _lastFixedMousePointToolTipRect;
    double _lastFixedMousePointTime;
    double _displayToolTipDelay;
    struct CGRect _toolTipTrackingRect;
    long long _toolTipTrackingRectTag;
    long long _visibleViewTrackingRectTag;
    unsigned int _trackingAreaAroundMouse:1;
    unsigned int _inQuickToolTipMode:1;
    unsigned int _mouseInsideVisibleTrackingRect:1;
    unsigned int _reserved:29;
}

+ (void)abortAllToolTips;
+ (id)_dynamicToolTipManagerInstances;
+ (void)_unregisterDynamicToolTipManagerInstance:(id)arg1;
+ (void)_registerDynamicToolTipManagerInstance:(id)arg1;
- (struct CGPoint)_currentLocalMousePoint;
- (void)_restartMovementTracking;
- (void)_continueMovementTracking;
- (void)_disabledTrackingInNeighborhoodOfMouse;
- (void)_cancelMovementTrackingTimer;
- (BOOL)_shouldShowRegularToolTipOnExpansionToolTip;
- (void)_markMovementTrackingInfo;
- (BOOL)_shouldRestartMovementTracking;
- (int)_displayToolTipIfNecessaryIgnoringTime:(BOOL)arg1;
- (BOOL)_shouldTrack;
- (BOOL)_canShowToolTip;
- (void)_cancelCurrentToolTipWindowImmediately:(BOOL)arg1;
- (BOOL)view:(id)arg1 customToolTip:(long long)arg2 fadeOutAllowedForToolTipWithDisplayInfo:(id)arg3;
- (struct CGRect)view:(id)arg1 customToolTip:(long long)arg2 frameForToolTipWithDisplayInfo:(id)arg3;
- (void)view:(id)arg1 customToolTip:(long long)arg2 drawInView:(id)arg3 displayInfo:(id)arg4;
- (BOOL)isExpansionToolTipInView:(id)arg1 withDisplayInfo:(id)arg2;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint)arg1 trackingRect:(struct CGRect *)arg2;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint)arg1 trackingRect:(struct CGRect *)arg2;
- (struct CGRect)dynamicToolTipRectAtPoint:(struct CGPoint)arg1;
- (void)windowChangedKeyState;
- (void)_windowChangedKeyState;
- (void)windowDidEnableToolTipCreationAndDisplay;
- (void)_windowDidEnableToolTipCreationAndDisplay;
- (void)_appActivationChanged:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillResetCursorRects;
- (void)windowDidBecomeVisibleNotification:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)_setupForWindow:(id)arg1;
- (void)_threadsafeViewVisibleBoundsChanged;
- (void)_viewVisibleBoundsChanged;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)detatchFromView;
- (void)_removeAllTrackingRects;
- (id)initWithView:(id)arg1;
- (void)abortToolTip;
- (void)_abortAndRestartTracking:(BOOL)arg1;
- (void)_removeVisibleViewTrackingRectIfNecessary;
- (void)_removeToolTipTrackingRectIfNecessary;

@end

