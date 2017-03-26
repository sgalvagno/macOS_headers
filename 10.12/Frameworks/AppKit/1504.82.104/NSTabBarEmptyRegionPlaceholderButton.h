//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTabButton.h>

#import <AppKit/NSTabBarSyncedButton-Protocol.h>

@class NSString;
@protocol NSTabBarSyncedButtonDelegate;

__attribute__((visibility("hidden")))
@interface NSTabBarEmptyRegionPlaceholderButton : NSTabButton <NSTabBarSyncedButton>
{
    id <NSTabBarSyncedButtonDelegate> _buttonInTabSyncGroupDelegate;
    BOOL _syncedWithOtherButton;
}

@property(nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton; // @synthesize syncedWithOtherButton=_syncedWithOtherButton;
@property(nonatomic) __weak id <NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate; // @synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate;
- (void).cxx_destruct;
- (void)_setHasPressedHighlight:(BOOL)arg1 notifyNSTabBarSyncedButtonDelegate:(BOOL)arg2;
- (void)_setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2 notifyNSTabBarSyncedButtonDelegate:(BOOL)arg3;
- (void)setHighlightStateToPressed:(BOOL)arg1 hovered:(BOOL)arg2;
- (void)setHasPressedHighlight:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tabBarViewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

