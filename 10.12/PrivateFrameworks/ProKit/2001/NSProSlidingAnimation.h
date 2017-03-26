//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSProSlidingAnimation : NSObject
{
    id _delegate;
    NSMutableDictionary *_views;
    BOOL _sliding;
    BOOL _paused;
    struct __animationFlags {
        unsigned int delegateRepsondsToFinish:1;
        unsigned int reserved:31;
    } _animationFlags;
    void *_proReserved1;
    void *_proReserved2;
}

- (void)resume;
- (void)pause;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)stopView:(id)arg1;
- (struct CGPoint)destinationForView:(id)arg1;
- (void)sendViewToDestination:(id)arg1;
- (void)setDestinationForView:(id)arg1 to:(struct CGPoint)arg2 travelTime:(double)arg3;
- (void)showNextFrame;
- (void)updateTimer;
- (void)updateViewPosition:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

