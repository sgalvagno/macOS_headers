//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol EKChangeListenerDelegate <NSObject>
- (void)trackedObjectsDidUpdate:(NSDictionary *)arg1;
- (NSArray *)trackedObjects;

@optional
- (void)notifyObservers;
- (BOOL)hasUpdatePriority;
- (void)trackedObjectsDidRevert:(NSArray *)arg1;
- (void)relatedObjectsDidUpdate:(NSDictionary *)arg1;
- (NSDictionary *)trackedObjectMap;
@end

