//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSFormCell.h>

__attribute__((visibility("hidden")))
@interface NSProFormCell : NSFormCell
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (double)_titlePadding;
+ (double)_bezelInset;
- (struct CGRect)_titleRectForCellFrame:(struct CGRect)arg1;
- (id)_titleCell;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (id)initTextCell:(id)arg1;
- (BOOL)_init;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (id)_baseFacet;
- (void)dealloc;
- (struct CGRect)_contentRectInFrame:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;

@end

