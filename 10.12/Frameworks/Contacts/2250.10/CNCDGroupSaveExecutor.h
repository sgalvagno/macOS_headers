//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDSaveContext;

__attribute__((visibility("hidden")))
@interface CNCDGroupSaveExecutor : NSObject
{
    CNCDSaveContext *_saveContext;
}

- (void)enumerateAddedGroups:(CDUnknownBlockType)arg1;
- (void)updateGroupSnapshots;
- (void)deleteGroups;
- (void)updateGroups;
- (void)addGroups;
- (void)saveGroups;
- (id)allGroupIdentifiers;
- (void)dealloc;
- (id)initWithSaveContext:(id)arg1;

@end

