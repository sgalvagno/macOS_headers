//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSArray, NSGridColumn, NSGridRow, NSView;

@interface NSGridCell : NSObject <NSCoding>
{
    NSGridRow *_row;
    NSGridColumn *_column;
    NSView *_contentView;
    NSGridCell *_headOfMergedCell;
    NSArray *_customPlacementConstraints;
    id _reserved;
    id _reserved2;
    id _reserved3;
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
}

+ (id)emptyContentView;
@property(readonly) __weak NSGridColumn *column; // @synthesize column=_column;
@property(readonly) __weak NSGridRow *row; // @synthesize row=_row;
- (BOOL)_isUnmergedOrHeadOfMergedRegion;
- (void)set_headOfMergedCell:(id)arg1;
- (id)_headOfMergedCell;
- (id)_findMergeTail;
- (struct CGRect)_findMergeBounds;
- (BOOL)_isMergeHead;
- (BOOL)_isMerged;
- (long long)_effectiveAlignment;
- (long long)_effectiveYPlacement;
- (long long)_effectiveXPlacement;
- (id)layoutRect;
- (id)_optimalContentLayoutRect;
- (void)_sanityCheck;
@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
- (void)_verifyConfigurability;
@property(copy) NSArray *customPlacementConstraints; // @synthesize customPlacementConstraints=_customPlacementConstraints;
- (void)_removedFromGridView;
@property long long rowAlignment;
@property long long xPlacement;
@property long long yPlacement;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRow:(id)arg1 column:(id)arg2;
- (id)init;

@end

