//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSComboBoxCell.h>

@interface NSProComboBoxCell : NSComboBoxCell
{
    struct __PCBFlags {
        unsigned int romanOnly:1;
        unsigned int reserved:31;
    } _pcbFlags;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
- (id)scrollView;
- (id)tableView;
- (void)setButtonBordered:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setRomanOnly:(BOOL)arg1;
- (BOOL)isRomanOnly;
- (BOOL)_isInset;
- (void)setThemeVariant:(long long)arg1;
- (id)_textAttributes;
- (void)endEditing:(id)arg1;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (void)orderOutPopUpWindow:(id)arg1;
- (void)popUp:(id)arg1;
- (long long)_typesetterBehavior;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)interiorBackgroundStyle;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawFocusRingWithFrame:(struct CGRect)arg1;
- (void)_drawProThemeBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_baseFacet;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (long long)_currentThemeStateInView:(id)arg1;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (struct CGRect)boundsForButtonCell:(struct CGRect)arg1;
- (struct CGRect)boundsForTextCell:(struct CGRect)arg1;
- (double)_buttonHeight;
- (double)_buttonWidth;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (id)_renditionMetricsForButtonCell;
- (BOOL)_useRenditionMetrics;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)_updateProControlSizeForAquaMetrics;
- (void)finalize;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (void)_initializeButtonCell;
- (id)_proThemeFacetForButtonCell;
- (int)_buttonThemeElementDependingOnControlView;
- (int)_basicButtonThemeElement;
- (long long)_themeVariantDependingOnControlView;
- (void)initPopUpWindow;
- (Class)scrollViewClass;

@end

