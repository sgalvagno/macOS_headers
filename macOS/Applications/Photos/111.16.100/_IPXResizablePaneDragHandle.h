//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IPXResizablePane;

__attribute__((visibility("hidden")))
@interface _IPXResizablePaneDragHandle : NSView
{
    BOOL _handlingMouseEvents;
    IPXResizablePane *_resizablePane;
}

@property(nonatomic, getter=isHandlingMouseEvents) BOOL handlingMouseEvents; // @synthesize handlingMouseEvents=_handlingMouseEvents;
@property(nonatomic) __weak IPXResizablePane *resizablePane; // @synthesize resizablePane=_resizablePane;
- (void).cxx_destruct;
- (void)cursorUpdate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateVisibilityWithEvent:(id)arg1 animated:(BOOL)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

