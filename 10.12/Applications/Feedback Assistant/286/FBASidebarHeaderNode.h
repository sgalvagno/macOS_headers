//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBASidebarNode.h"

@class NSMutableArray;
@protocol FBAProjectEntity;

@interface FBASidebarHeaderNode : FBASidebarNode
{
    id <FBAProjectEntity> _project;
    NSMutableArray *_children;
}

@property(retain) NSMutableArray *children; // @synthesize children=_children;
@property(retain) id <FBAProjectEntity> project; // @synthesize project=_project;
- (void).cxx_destruct;
- (BOOL)isLeaf;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)type;
- (void)addMailbox:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

