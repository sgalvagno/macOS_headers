//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class NSArray, PRSCardSection;

@interface PRSTableRowSliceViewController : PRSCardSectionSliceViewController
{
    BOOL _isCompactRow;
    BOOL _isReducedHeight;
    NSArray *_itemWidths;
    NSArray *_itemViews;
    PRSCardSection *_section;
    long long _verticalAlignment;
}

+ (id)attributedStringFromFormattedText:(id)arg1 color:(id)arg2 font:(id)arg3;
+ (double)trailingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2 totalViewsInSection:(long long)arg3 totalWidth:(double)arg4;
+ (void)centerSectionSpacingBetweenView1:(id)arg1;
+ (double)leadingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2;
+ (double)fontSize;
+ (id)imageViewForView:(id)arg1;
+ (id)labelForView:(id)arg1;
+ (unsigned long long)imageAlignmentForTextAlignment:(unsigned long long)arg1;
@property long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property BOOL isReducedHeight; // @synthesize isReducedHeight=_isReducedHeight;
@property BOOL isCompactRow; // @synthesize isCompactRow=_isCompactRow;
@property(retain) PRSCardSection *section; // @synthesize section=_section;
@property(retain) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain) NSArray *itemWidths; // @synthesize itemWidths=_itemWidths;
- (void).cxx_destruct;
- (double)height;
- (BOOL)labelsAreVibrant;
- (double)labelTopBaselineSpacing;
- (double)labelBottomBaselineSpacing;
- (id)font;
- (void)setAlignment:(unsigned long long)arg1 forView:(id)arg2;
- (BOOL)shouldAllowOtherViewsToOverlap:(id)arg1;
- (id)addImageViewWithImage:(id)arg1;
- (id)addLabelWithAttributedText:(id)arg1;
- (long long)getHeightForText:(id)arg1 maxSize:(long long)arg2 font:(id)arg3;
- (void)setupWithLayoutInfo:(id)arg1;
- (id)initWithCardSection:(id)arg1 isCompactRow:(BOOL)arg2 isReducedHeight:(BOOL)arg3 verticalAlignment:(long long)arg4;
- (id)initWithCardSection:(id)arg1 isCompactRow:(BOOL)arg2 isReducedHeight:(BOOL)arg3;
- (id)initWithCardSection:(id)arg1;

@end

