//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class NSNumber, NSProgressIndicator;

@interface ABBookSearchField : NSSearchField
{
    NSProgressIndicator *_progressIndicator;
    BOOL _animatingProgress;
    BOOL _hidesProgress;
    NSNumber *_trackingTag;
}

@property(nonatomic) BOOL hidesProgress; // @synthesize hidesProgress=_hidesProgress;
@property(nonatomic, getter=isAnimatingProgress) BOOL animatingProgress; // @synthesize animatingProgress=_animatingProgress;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)resetTracking;
- (void)clearTrackingIfNeeded;
- (void)updateAnimationForState:(BOOL)arg1;
- (id)bookSearchFieldCell;
- (void)BookSearchField_commonInit;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

