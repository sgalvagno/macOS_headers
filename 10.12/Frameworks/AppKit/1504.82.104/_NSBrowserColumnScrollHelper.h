//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSBrowserColumnView, _NSBrowserScrollView;

@interface _NSBrowserColumnScrollHelper : NSObject
{
    _NSBrowserScrollView *_scrollView;
    _NSBrowserColumnView *_optimizableColumn;
    struct CGPoint _initialOrigin;
    struct CGRect _destinationRect;
    double _totalDistance;
    double _totalDuration;
    struct __BrcshFlags {
        unsigned int done:1;
        unsigned int animate:1;
        unsigned int shouldPostScrollNotifications:1;
        unsigned int needsEndColumnAnimationOptimization:1;
        unsigned int reserved:28;
    } _brcshFlags;
    double _startTime;
    struct __CFRunLoopTimer *_timer;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopObserver *_displayWindowForBrowserObserver;
}

- (void)changeDestinationToRect:(struct CGRect)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 inScrollView:(id)arg2 animate:(BOOL)arg3;
- (void)setOptimizableColumn:(id)arg1;
- (void)_doAnimation;
- (id)_enclosingBrowserView;
- (void)_stopAnimation;
- (void)_doAnimationStep;
- (void)_scrollToFinalPosition;
- (void)_scrollToPosition:(long long)arg1;
- (void)dealloc;
- (void)_invalidateRunLoopTimer;
- (void)_setupRunLoopTimer;

@end

