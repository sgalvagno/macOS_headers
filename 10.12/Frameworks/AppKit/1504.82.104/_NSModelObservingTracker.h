//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface _NSModelObservingTracker : NSObject
{
    id _modelObserver;
    NSArray *_availableModelAndProxyKeys;
    NSArray *_indexReferenceModelObjectArray;
    NSMutableIndexSet *_observedModelIndexData;
    id _observedModelObjectsData;
    struct __modelObservingTrackerFlags {
        unsigned int _multipleObservedModelObjects:1;
        unsigned int _reservedModelObservingTrackerFlags:31;
    } _modelObservingTrackerFlags;
    NSMutableDictionary *_observedModelKeyPathInfoTable;
    NSMutableArray *_modelAndProxyKeysArray;
}

- (void)_logObservingInfo;
- (id)modelAndProxyKeysObserved;
- (void)analyzeKeyPath:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (void)removeObservedKey:(id)arg1;
- (void)addObservedKey:(id)arg1;
- (void)registerModelKeyPaths:(id)arg1 unregisterModelKeyPaths:(id)arg2;
- (void)unregisterModelKeyPath:(id)arg1;
- (void)registerModelKeyPath:(id)arg1;
- (void)clearAllModelObjectObserving;
- (void)stopObservingModelObject:(id)arg1;
- (void)startObservingModelObject:(id)arg1;
- (void)setObservingToModelObjectsRange:(struct _NSRange)arg1;
- (void)stopObservingModelObjectsAtReferenceIndexes:(id)arg1;
- (void)startObservingModelObjectsAtReferenceIndexes:(id)arg1;
- (void)stopObservingModelObjectAtReferenceIndex:(unsigned long long)arg1;
- (void)startObservingModelObjectAtReferenceIndex:(unsigned long long)arg1;
- (void)_stopObservingModelObject:(id)arg1;
- (void)_startObservingModelObject:(id)arg1;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForModelObject:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2 ofModelObject:(id)arg3;
- (void)updateReferenceIndexesToReflectRemovalAtIndexes:(id)arg1;
- (void)updateReferenceIndexesToReflectRemovalAtIndex:(unsigned long long)arg1;
- (void)updateReferenceIndexesToReflectInsertionAtIndexes:(id)arg1;
- (void)updateReferenceIndexesToReflectInsertionAtIndex:(unsigned long long)arg1;
- (void)replaceIndexReferenceModelObjectArrayWithEqualCopy:(id)arg1;
- (id)indexReferenceModelObjectArray;
- (void)setIndexReferenceModelObjectArray:(id)arg1 clearAllModelObjectObserving:(BOOL)arg2;
- (void)dealloc;
- (void)_dealloc;
- (id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2;

@end

