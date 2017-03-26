//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSColor, NSFont, NSLayoutConstraint, NSString, NSTextField, NSTrackingArea;

@interface PRSTrackSliceView : NSView
{
    NSTrackingArea *_trackingArea;
    BOOL _clickable;
    BOOL _playing;
    NSButton *_playButton;
    NSTextField *_numberTextField;
    NSTextField *_leadingTextField;
    NSTextField *_trailingTextField;
    NSLayoutConstraint *_additionalHeightConstraint;
}

@property __weak NSLayoutConstraint *additionalHeightConstraint; // @synthesize additionalHeightConstraint=_additionalHeightConstraint;
@property __weak NSTextField *trailingTextField; // @synthesize trailingTextField=_trailingTextField;
@property __weak NSTextField *leadingTextField; // @synthesize leadingTextField=_leadingTextField;
@property __weak NSTextField *numberTextField; // @synthesize numberTextField=_numberTextField;
@property __weak NSButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL clickable; // @synthesize clickable=_clickable;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cursorUpdate:(id)arg1;
- (void)_removeTrackingAreas;
@property(nonatomic) double additionalHeight;
@property(retain, nonatomic) NSColor *trailingTextColor;
@property(retain, nonatomic) NSFont *trailingFont;
@property(retain, nonatomic) NSString *trailingString;
@property(retain, nonatomic) NSColor *leadingTextColor;
@property(retain, nonatomic) NSFont *leadingFont;
@property(retain, nonatomic) NSString *numberString;
@property(retain, nonatomic) NSString *leadingString;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)toggleShowPlay;
- (void)updateTrackingAreas;
- (BOOL)mouseInView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

