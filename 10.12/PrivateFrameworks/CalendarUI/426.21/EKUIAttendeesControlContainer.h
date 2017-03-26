//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CalendarUI/NSAccessibilityButton-Protocol.h>

@class EKUIAttendeesGadget, NSString;

@interface EKUIAttendeesControlContainer : NSView <NSAccessibilityButton>
{
    EKUIAttendeesGadget *_gadget;
}

@property __weak EKUIAttendeesGadget *gadget; // @synthesize gadget=_gadget;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)keyUp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

