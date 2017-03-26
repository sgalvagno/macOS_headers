//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProSlider.h>

@interface NSProColorSlider : NSProSlider
{
    long long _trackingRectTag;
    void *_pcsReserved1;
    void *_pcsReserved2;
    void *_pcsReserved3;
}

+ (void)initialize;
- (void)renewGState;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_updateTrackingRect;
- (void)_removeTrackingRect;
- (void)_updateMouseIsOver:(int)arg1;
- (void)setShowsFullGradient:(BOOL)arg1;
- (BOOL)showsFullGradient;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)setEndColor:(id)arg1;
- (id)endColor;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end

