//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/RolloverImageButton.h>

@protocol DelayedPopUpRolloverImageButtonDelegate;

__attribute__((visibility("hidden")))
@interface DelayedPopUpRolloverImageButton : RolloverImageButton
{
}

+ (Class)cellClass;
- (BOOL)accessibilityPerformShowMenu;
- (id)menuForEvent:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <DelayedPopUpRolloverImageButtonDelegate> delegate; // @dynamic delegate;

@end

