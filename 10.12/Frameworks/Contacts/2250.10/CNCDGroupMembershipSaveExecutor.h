//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDSaveContext;

__attribute__((visibility("hidden")))
@interface CNCDGroupMembershipSaveExecutor : NSObject
{
    CNCDSaveContext *_saveContext;
}

- (void)enumerateCoreDataGroupsAndMembers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeGroupMembers;
- (void)addGroupMembers;
- (void)saveGroupMemberships;
- (id)allGroupIdentifiers;
- (id)allContactIdentifiers;
- (void)dealloc;
- (id)initWithSaveContext:(id)arg1;

@end

