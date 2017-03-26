//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject
{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

@property(readonly, nonatomic) NSString *relationshipKey; // @synthesize relationshipKey=_relationshipKey;
@property(readonly, nonatomic) NSMutableSet *deletedObjectIDs; // @synthesize deletedObjectIDs=_deletedObjectIDs;
@property(readonly, nonatomic) NSMutableSet *insertedObjectIDs; // @synthesize insertedObjectIDs=_insertedObjectIDs;
- (void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initForRelationshipAtKey:(id)arg1;
- (id)init;

@end

