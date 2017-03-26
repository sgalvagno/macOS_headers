//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject
{
    id _owner;
    id _observers;
    BOOL _hasZeroOrOneObserver;
    struct _opaque_pthread_mutex_t _observersLock;
}

+ (id)_copyObserversOfObject:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeObserver:(id)arg1 observation:(id)arg2;
- (void)finishObserving;
- (id)addObserver:(id)arg1 toObservableObject:(id)arg2;
- (void)_directAddObserver:(id)arg1;
- (id)init;

@end

