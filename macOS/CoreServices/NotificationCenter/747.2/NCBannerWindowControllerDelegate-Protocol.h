//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCBannerWindowController, NSArray;

@protocol NCBannerWindowControllerDelegate <NSObject>
- (double)bannerWindowOpenOffset:(NCBannerWindowController *)arg1;
- (void)bannerWindow:(NCBannerWindowController *)arg1 bannersHiddenDueToOverflow:(NSArray *)arg2;
- (void)bannerWindowOrderedOut:(NCBannerWindowController *)arg1;
@end

