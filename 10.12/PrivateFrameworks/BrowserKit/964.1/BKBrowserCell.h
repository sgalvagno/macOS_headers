//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProBrowserCell.h>

__attribute__((visibility("hidden")))
@interface BKBrowserCell : NSProBrowserCell
{
    struct OpaqueIconRef *_iconRef;
}

+ (void)_drawInteriorOfCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 textAdjustment:(struct CGPoint)arg4 drawBackground:(BOOL)arg5;
+ (void)_drawTextInCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 textAdjustment:(struct CGPoint)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setObjectValue:(id)arg1;
- (BOOL)_isSelected;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initImageCell:(id)arg1;

@end

