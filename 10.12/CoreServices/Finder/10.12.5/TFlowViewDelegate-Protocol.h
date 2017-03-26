//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IKImageFlowDelegate-Protocol.h"

@class NSEvent, NSImage, NSPasteboard, TFlowView;

@protocol TFlowViewDelegate <IKImageFlowDelegate>
- (_Bool)handleQuickLookWithEvent:(NSEvent *)arg1;
- (_Bool)makeBrowserViewFirstResponder;
- (void)flowView:(TFlowView *)arg1 dragImage:(NSImage *)arg2 at:(struct CGPoint)arg3 offset:(struct CGSize)arg4 event:(NSEvent *)arg5 pasteboard:(NSPasteboard *)arg6 source:(id)arg7 slideBack:(_Bool)arg8;
@end

