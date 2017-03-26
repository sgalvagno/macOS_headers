//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSLayoutConstraint, NSTextView;

__attribute__((visibility("hidden")))
@interface ParsecFeatureNotificationView : NSView
{
    NSArray *_iconFilenames;
    NSView *_iconContainer;
    NSTextView *_descriptionTextView;
    NSLayoutConstraint *_descriptionTextViewHeightConstraint;
    NSLayoutConstraint *_iconContainerBottomToDescriptionTextViewTopConstraint;
    NSLayoutConstraint *_descriptionTextViewBottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *descriptionTextViewBottomConstraint; // @synthesize descriptionTextViewBottomConstraint=_descriptionTextViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *iconContainerBottomToDescriptionTextViewTopConstraint; // @synthesize iconContainerBottomToDescriptionTextViewTopConstraint=_iconContainerBottomToDescriptionTextViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *descriptionTextViewHeightConstraint; // @synthesize descriptionTextViewHeightConstraint=_descriptionTextViewHeightConstraint;
@property(nonatomic) NSTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) __weak NSView *iconContainer; // @synthesize iconContainer=_iconContainer;
@property(copy, nonatomic) NSArray *iconFilenames; // @synthesize iconFilenames=_iconFilenames;
- (void).cxx_destruct;
- (double)preferredHeightAtCurrentWidth;
- (double)preferredMinimumWidth;
- (void)setDescriptionText:(id)arg1 helpLinkText:(id)arg2;

@end

