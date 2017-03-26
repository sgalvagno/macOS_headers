//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>
#import <AppKit/NSTouchBarItemTypePopover-Protocol.h>

@class NSImage, NSString, NSTouchBar, NSView;

@interface NSPopoverTouchBarItem : NSTouchBarItem <NSGestureRecognizerDelegate, NSTouchBarItemTypePopover>
{
    NSTouchBar *_popoverTouchBar;
    NSTouchBar *_pressAndHoldTouchBar;
    id _overlay;
    NSString *_customizationLabel;
    NSView *_collapsedRepresentation;
    NSImage *_collapsedRepresentationImage;
    NSString *_collapsedRepresentationLabel;
    unsigned int _showsCloseButton:1;
    unsigned int _showsControlStrip:1;
    unsigned int _collapsedRepresentationChevronBehavior:2;
}

+ (id)keyPathsForValuesAffectingPresented;
+ (id)makeStandardActivatePopoverGestureRecognizer;
- (long long)fingerBias;
- (void)setCollapsedRepresentationChevronBehavior:(long long)arg1;
- (long long)collapsedRepresentationChevronBehavior;
@property(readonly) BOOL isPresented;
- (id)makeStandardActivatePopoverGestureRecognizer;
- (void)dismissPopover:(id)arg1;
- (void)showPopover:(id)arg1;
- (id)view;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setShowsControlStripForOverlay:(BOOL)arg1;
- (BOOL)showsControlStripForOverlay;
@property BOOL showsCloseButton;
@property(copy) NSString *customizationLabel;
@property(retain) NSTouchBar *pressAndHoldTouchBar;
@property(retain) NSTouchBar *popoverTouchBar;
@property(retain) NSString *collapsedRepresentationLabel;
@property(retain) NSImage *collapsedRepresentationImage;
@property(retain) NSView *collapsedRepresentation;
- (void)setPopoverFunctionBar:(id)arg1;
- (id)popoverFunctionBar;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_showPressHoldPopup:(id)arg1;
- (long long)_type;
- (void)setCollapsedRepresentationShowsChevron:(BOOL)arg1;
- (BOOL)collapsedRepresentationShowsChevron;
- (void)setSupportsPressAndHold:(BOOL)arg1;
- (BOOL)supportsPressAndHold;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

