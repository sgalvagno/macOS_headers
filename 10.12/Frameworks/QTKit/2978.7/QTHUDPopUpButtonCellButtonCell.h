//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTHUDButtonCell.h>

__attribute__((visibility("hidden")))
@interface QTHUDPopUpButtonCellButtonCell : QTHUDButtonCell
{
    unsigned long long _arrowPosition;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)indicatorRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)setArrowPosition:(unsigned long long)arg1;
- (unsigned long long)arrowPosition;
- (void)setMenuItem:(id)arg1;

@end

