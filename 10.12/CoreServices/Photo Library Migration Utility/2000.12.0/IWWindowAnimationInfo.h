//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSView, NSWindow;

@interface IWWindowAnimationInfo : NSObject
{
    NSWindow *mWindow;
    struct CGRect mStartFrame;
    struct CGRect mEndFrame;
    double mStartAlpha;
    double mEndAlpha;
    BOOL mScaleContent;
    NSView *mContentViewHolder;
}

- (id)contentViewHolder;
- (void)setContentViewHolder:(id)arg1;
- (BOOL)scaleContent;
- (double)endAlpha;
- (double)startAlpha;
- (struct CGRect)endFrame;
- (struct CGRect)startFrame;
- (id)window;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 startAlpha:(double)arg4 endAlpha:(double)arg5 scaleContent:(BOOL)arg6;

@end

