//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStatusItem.h>

@class NSArray, NSBundle, NSImage, NSMenu, NSView;
@protocol NSMenuExtraController;

@interface NSMenuExtra : NSStatusItem
{
    NSBundle *_bundle;
    NSMenu *_menu;
    NSView *_view;
    double _length;
    struct {
        unsigned int customView:1;
        unsigned int menuDown:1;
        unsigned int reserved:30;
    } _flags;
    id _controller;
    BOOL _reserved1;
    NSArray *_reserved2;
    double _reserved3;
    double _reserved4;
    BOOL _supportsAnimation;
}

+ (unsigned int)defaultLength;
@property(nonatomic) BOOL supportsAnimation; // @synthesize supportsAnimation=_supportsAnimation;
- (void).cxx_destruct;
- (double)defaultLength;
@property(nonatomic, getter=isMenuDown) BOOL menuDown;
- (BOOL)menuDown;
@property(nonatomic) __weak id <NSMenuExtraController> controller;
- (void)setsSupportsAnimation:(BOOL)arg1;
- (void)stopTextAnimation;
- (void)startTextAnimation;
- (void)stopImageAnimation;
- (void)startImageAnimation;
- (void)setStaticText:(id)arg1;
- (void)setAnimationText:(id)arg1;
@property(copy, nonatomic) NSArray *images;
@property(nonatomic) double maxWidth;
@property(nonatomic) double imageFrameRate;
- (void)_adjustLength;
- (id)_button;
- (id)_window;
- (id)_initInStatusBar:(id)arg1 withLength:(float)arg2 withPriority:(int)arg3;
- (long long)sendActionOn:(long long)arg1;
- (BOOL)highlightMode;
- (void)setHighlightMode:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)statusBar;
- (void)unload;
- (void)popUpMenu:(id)arg1;
- (void)drawMenuBackground:(BOOL)arg1;
@property(readonly, getter=isMenuDownForAX) BOOL menuDownForAX;
@property(readonly) BOOL convertedForNewUI;
- (void)setView:(id)arg1;
- (id)view;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
@property(retain, nonatomic) NSImage *alternateImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setLength:(double)arg1;
- (double)length;
@property(readonly) NSBundle *bundle;
- (void)willUnload;
- (id)initWithBundle:(id)arg1 data:(id)arg2;
- (id)initWithBundle:(id)arg1;
- (void)_destroyAccessibilityElement;
- (id)_accessibilityElement;

@end

