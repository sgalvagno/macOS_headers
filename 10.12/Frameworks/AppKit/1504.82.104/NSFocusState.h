//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPSMatrix.h>

@class NSWindow;

@interface NSFocusState : NSPSMatrix
{
    struct CGRect theClip;
    NSWindow *window;
    BOOL clipSet;
    BOOL clipEmpty;
    struct __CFArray *specialGStateViews;
}

+ (id)sharedFocusState;
- (void)setWindow:(id)arg1;
- (void)setFrameRotation:(double)arg1;
- (id)scaleTo:(double)arg1:(double)arg2;
- (void)reset;
- (void)flushWithContext:(id)arg1;
- (void)flush;
- (void)clip:(const struct CGRect *)arg1;
- (void)dealloc;

@end

