//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CAGridCellRecord.h"

@class PLHolder;

@interface CAPeopleCellRecord : CAGridCellRecord
{
    PLHolder *_photos;
    unsigned long long _count;
    long long _keyIndex;
    long long _drawIndex;
}

@property(nonatomic) long long drawIndex; // @synthesize drawIndex=_drawIndex;
@property(nonatomic) long long keyIndex; // @synthesize keyIndex=_keyIndex;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) PLHolder *photos; // @synthesize photos=_photos;
- (id)databaseForCell;
- (BOOL)isShowingPhotoWithKey:(unsigned long long)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

