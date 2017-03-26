//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSScrollingConcurrentConstantData, _NSScrollingConcurrentSharedData;
@protocol OS_dispatch_source, _NSScrollStateEventListener;

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentMainThreadSynchronizer : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    _NSScrollingConcurrentSharedData *_sharedData;
    _NSScrollingConcurrentConstantData *_constantData;
    id <_NSScrollStateEventListener> _scrollStateDelegate;
    CDUnknownBlockType _completionHandler;
    struct {
        unsigned int isSynchronizing:1;
        unsigned int unexpectedScrollDetected:1;
        unsigned int isSuspended:1;
        unsigned int reserved:29;
    } _flags;
    struct CGPoint _lastSetOrigin;
}

@property(nonatomic) id <_NSScrollStateEventListener> scrollStateDelegate; // @synthesize scrollStateDelegate=_scrollStateDelegate;
- (void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2;
- (void)_synchronize:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_doIdlePrefetch;
- (void)_updateSharedData;
- (void)_scrollToCanonicalOrigin;
- (void)signal:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signal:(unsigned long long)arg1;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)initWithSharedData:(id)arg1 constantData:(id)arg2;

@end

