//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSThemeFrame, NSTitlebarAccessoryViewController, NSView;

__attribute__((visibility("hidden")))
@interface NSTitlebarViewController : NSViewController
{
    NSThemeFrame *_associatedThemeFrame;
    BOOL _inFullScreen;
    BOOL _updating;
    double _revealAmount;
    NSView *_floatingTrailingWidget;
    NSTitlebarAccessoryViewController *_floatingTrailingWidgetSource;
}

@property NSThemeFrame *associatedThemeFrame; // @synthesize associatedThemeFrame=_associatedThemeFrame;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (double)_percentageToLeaveForFloatingTrailingWidgetOn:(long long)arg1 withFloatIndex:(long long)arg2;
- (double)_percentageToLeaveForFloatingTrailingWidgetOn:(long long)arg1;
- (double)_spaceToLeaveForFloatingTrailingWidgetOn:(long long)arg1;
- (double)spaceToLeaveForFloatingTrailingWidgetOnAccessory:(id)arg1;
@property(readonly) double spaceToLeaveForFloatingTrailingWidgetOnToolbar;
@property(readonly) double floatingTrailingWidgetWidth;
- (void)insertChildViewController:(id)arg1 atIndex:(long long)arg2;
- (void)didChangeChildViewController:(id)arg1;
@property double revealAmount;
@property BOOL inFullScreen;

@end

