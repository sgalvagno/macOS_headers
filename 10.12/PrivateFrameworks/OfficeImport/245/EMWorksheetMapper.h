//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/EMSheetMapper.h>

@class CMStyle, ECColumnWidthConvertor, EDWorksheet;

@interface EMWorksheetMapper : EMSheetMapper
{
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    long long mMaxPopulatedColumn;
    long long mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}

- (struct CGSize)preprocessSizeWithState:(id)arg1;
- (struct CGSize)preprocessDrawableSizeWithState:(id)arg1;
- (int)preprocessHeightWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (id)columnWidthConvertor;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)readHyperlinksWithState:(id)arg1;
- (int)height;
- (int)width;
- (double)defaultColumnWidth;
- (double)xlColumnWidthToPoints:(double)arg1;
- (double)defaultRowHeight;
- (long long)maxRowNumber;
- (double *)rowGrid;
- (unsigned long long)columnCount;
- (double *)columnGrid;
- (BOOL)isVisible;
- (void)dealloc;
- (void)_initWithState:(id)arg1;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (void)setRowGrid;

@end

