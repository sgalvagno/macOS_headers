//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSGradient;

@interface AKTrackpadBackgroundView : NSView
{
    NSColor *_topColor;
    NSColor *_bottomColor;
    NSGradient *_gradient;
}

@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) NSColor *topColor; // @synthesize topColor=_topColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

