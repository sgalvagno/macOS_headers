//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CRRegistryEntry.h"

@interface AHWRTask : CRRegistryEntry
{
}

+ (id)keyPathsForValuesAffectingIsRunning;
+ (id)keyPathsForValuesAffectingIsSuspended;
+ (id)keyPathsForValuesAffectingIsScheduled;
+ (id)keyPathsForValuesAffectingLocalizedStatus;
+ (id)keyPathsForValuesAffectingLocalizedType;
+ (id)keyPathsForValuesAffectingLocalizedScope;
+ (id)keyPathsForValuesAffectingPercentComplete;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingGroup;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingScope;
- (BOOL)canBeAborted;
- (BOOL)isSuspended;
- (BOOL)isScheduled;
- (BOOL)isRunning;
- (unsigned long long)percentComplete;
- (id)volumeName;
- (id)groupName;
- (id)volume;
- (id)group;
- (id)taskObjectDescription;
- (unsigned long long)status;
- (id)localizedStatus;
- (unsigned long long)scope;
- (id)localizedScope;
- (id)type;
- (id)localizedType;

@end

