//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKBubblePathAnimator : NSObject
{
}

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;
- (id)effectiveViewForContext:(id)arg1;
- (double)minimumDurationForViewAnimations;
- (void)animateTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (BOOL)bubblesOnscreenAtEnd;
- (BOOL)bubblesOnscreenAtBeginning;
@property(readonly, nonatomic) long long animatorType;

@end

