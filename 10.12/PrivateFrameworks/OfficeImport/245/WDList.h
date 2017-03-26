//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : NSObject
{
    WDDocument *mDocument;
    int mListId;
    int mListDefinitionId;
    NSMutableArray *mLevelOverrides;
}

@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
@property(readonly, nonatomic) int listId; // @synthesize listId=mListId;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (BOOL)isAnyListLevelOverridden;
- (id)levelOverrides;
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (void)dealloc;

@end

