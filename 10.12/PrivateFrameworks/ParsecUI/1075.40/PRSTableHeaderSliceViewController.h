//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSTableRowSliceViewController.h>

@interface PRSTableHeaderSliceViewController : PRSTableRowSliceViewController
{
    BOOL _isCompactTable;
    long long _firstTrailingIndex;
    long long _centerIndex;
}

@property BOOL isCompactTable; // @synthesize isCompactTable=_isCompactTable;
@property long long centerIndex; // @synthesize centerIndex=_centerIndex;
@property long long firstTrailingIndex; // @synthesize firstTrailingIndex=_firstTrailingIndex;
- (BOOL)labelsAreVibrant;
- (double)labelTopBaselineSpacing;
- (double)labelBottomBaselineSpacing;
- (BOOL)shouldAllowOtherViewsToOverlap:(id)arg1;
- (void)setupWithTableRowSliceControllers:(id)arg1;
- (id)initWithCardSection:(id)arg1;

@end

