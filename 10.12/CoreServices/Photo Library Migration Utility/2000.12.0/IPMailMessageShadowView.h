//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface IPMailMessageShadowView : NSView <CAAnimationDelegate>
{
    BOOL _showShadow;
    id _controller;
}

@property id controller; // @synthesize controller=_controller;
@property BOOL showShadow; // @synthesize showShadow=_showShadow;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

