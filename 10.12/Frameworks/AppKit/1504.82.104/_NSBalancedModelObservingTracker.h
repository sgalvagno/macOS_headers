//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSModelObservingTracker.h>

@class NSCountedSet;

@interface _NSBalancedModelObservingTracker : _NSModelObservingTracker
{
    NSCountedSet *_modelAndProxyKeysSet;
}

- (void)removeObservedKey:(id)arg1;
- (void)addObservedKey:(id)arg1;
- (id)modelAndProxyKeysObserved;
- (void)_dealloc;
- (id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2;

@end

