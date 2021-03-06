//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MuninPuckGlyphView, UIImageView;

__attribute__((visibility("hidden")))
@interface MuninPuckView : UIView
{
    UIView *_coneContainerView;
    UIImageView *_puckConeView;
    UIImageView *_puckImageView;
    MuninPuckGlyphView *_glyphView;
    BOOL _subviewsNeedUpdate;
    BOOL _dimmed;
    long long _state;
    double _pitch;
    double _heading;
}

- (void).cxx_destruct;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)updateSubviewsIfNeededAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSubviewsIfNeededAnimated:(BOOL)arg1;
- (void)updateSubviewsIfNeeded;
- (void)setNeedsUpdateSubviews;
- (void)updateSubviewsAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

