//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface IPXSlideshowPlayerPreviewView : NSView
{
    NSView *_slideshowView;
    NSView *_kenBurnsView;
    NSView *_toolbarView;
    NSLayoutConstraint *_leftKenBurnsConstraint;
    NSLayoutConstraint *_bottomKenBurnsConstraint;
    NSLayoutConstraint *_leftToolbarConstraint;
    NSLayoutConstraint *_bottomToolbarConstraint;
    NSLayoutConstraint *_widthToolbarConstraint;
    struct CGRect _cleanAperture;
}

- (void).cxx_destruct;
- (void)updateViewPositionWithCleanAperture:(struct CGRect)arg1;
- (void)_setupConstraints;
- (struct CGSize)intrinsicContentSize;
- (BOOL)goodContentFit;
- (id)initWithFrame:(struct CGRect)arg1 toolbarView:(id)arg2 kenBurnsView:(id)arg3 slideshowView:(id)arg4;

@end

