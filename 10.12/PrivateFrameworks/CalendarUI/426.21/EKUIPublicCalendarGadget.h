//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSButton, NSView;

@interface EKUIPublicCalendarGadget : EKUISingleViewGadget
{
    NSButton *_publicCalendarCheckbox;
    NSView *_publicLinkDescriptionContainer;
}

@property(retain) NSView *publicLinkDescriptionContainer; // @synthesize publicLinkDescriptionContainer=_publicLinkDescriptionContainer;
@property(retain) NSButton *publicCalendarCheckbox; // @synthesize publicCalendarCheckbox=_publicCalendarCheckbox;
- (void).cxx_destruct;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)arg1;
- (void)publicURLBoxClicked:(id)arg1;
- (id)control;
- (id)initWithViewController:(id)arg1;

@end

