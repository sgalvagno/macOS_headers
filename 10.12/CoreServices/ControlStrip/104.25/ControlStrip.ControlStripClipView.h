//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface ControlStrip.ControlStripClipView : NSView
{
    // Error parsing type: , name: platter
}

+ (double)cornerRadius;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayer;
- (void)layout;
- (void)awakeFromNib;
@property(nonatomic) long long layerContentsRedrawPolicy;
@property(nonatomic, readonly) BOOL wantsUpdateLayer;
@property(nonatomic) BOOL wantsLayer;
@property(nonatomic, readonly) CALayer *platter; // @synthesize platter;

@end

