//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScreen, NSWindow;
@protocol NSDetachedTabDraggingImageToWindowTransitionControllerDelegate;

__attribute__((visibility("hidden")))
@interface NSDetachedTabDraggingImageToWindowTransitionController : NSObject
{
    id <NSDetachedTabDraggingImageToWindowTransitionControllerDelegate> _delegate;
    NSWindow *_sourceMiniWindow;
    struct CGPoint _dropLocation;
    NSScreen *_destinationScreen;
    NSWindow *_destinationWindow;
    struct CGRect _windowAnimationStartFrame;
    struct CGRect _windowAnimationEndFrame;
    struct CGAffineTransform _windowAnimationEndTransform;
    BOOL _destinationWindowWillMoveToFullScreen;
}

+ (void)detachTabAtPointOnScreen:(struct CGPoint)arg1 withDraggedMiniWindow:(id)arg2 ofWidth:(double)arg3 withDelegate:(id)arg4;
- (void).cxx_destruct;
- (void)_updateAnimationWithProgress:(float)arg1;
- (void)_startAnimation;
- (void)_startNonFullScreenAnimation;
- (void)_startFullScreenAnimation;
- (void)_setUpWindow;
- (void)_setUpWindowAnimationEndFrame;
- (void)_setUpWindowAnimationStartFrameWithMiniWindowWidth:(double)arg1;
- (BOOL)_willDestinationWindowMoveToFullScreen;
- (id)_initWithMiniWindow:(id)arg1 ofWidth:(double)arg2 dropLocation:(struct CGPoint)arg3 delegate:(id)arg4;
- (id)init;

@end

