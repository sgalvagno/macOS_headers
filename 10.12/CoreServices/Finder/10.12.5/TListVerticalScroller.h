//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScroller.h>

@class TListViewController;

@interface TListVerticalScroller : NSScroller
{
    TListViewController *_listViewController;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (BOOL)isCompatibleWithOverlayScrollers;
@property(retain, nonatomic) TListViewController *listViewController; // @synthesize listViewController=_listViewController;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;

@end

