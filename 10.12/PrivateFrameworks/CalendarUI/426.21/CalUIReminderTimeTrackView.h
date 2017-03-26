//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSCalendar, NSDate, NSDateInterval, NSMutableDictionary;

@interface CalUIReminderTimeTrackView : NSView
{
    NSDate *_selectionDate;
    NSDateInterval *_representedInterval;
    BOOL _enclosingScrollViewInInteractiveScroll;
    NSCalendar *_calendar;
    NSMutableDictionary *_markLabels;
}

@property(retain) NSMutableDictionary *markLabels; // @synthesize markLabels=_markLabels;
@property(retain) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property BOOL enclosingScrollViewInInteractiveScroll; // @synthesize enclosingScrollViewInInteractiveScroll=_enclosingScrollViewInInteractiveScroll;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)_documentWidthForDateInterval:(id)arg1;
- (double)_offsetAtDate:(id)arg1;
- (id)_dateAtOffset:(double)arg1 shouldRoundToQuarterHours:(BOOL)arg2;
- (id)_flooredHourForDate:(id)arg1;
- (void)invalidateLabels;
- (id)_dateStringForDate:(id)arg1;
- (void)updateLabelsWithVisibleRect:(struct CGRect)arg1 exclusionZone:(struct CGRect)arg2;
- (BOOL)updateSelectionDateWithVisibleRect:(struct CGRect)arg1 shouldRoundToQuarterHours:(BOOL)arg2;
- (void)centerAtPoint:(struct CGPoint)arg1 shouldRoundToQuarterHours:(BOOL)arg2;
- (void)scrollDateToCenter:(id)arg1 animate:(BOOL)arg2;
- (void)scrollDateToCenter:(id)arg1;
- (void)centerRepresentedIntervalToDate:(id)arg1;
@property(copy) NSDateInterval *representedInterval;
- (void)setSelectionDate:(id)arg1 shouldRoundToQuarterHours:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setSelectionDate:(id)arg1 shouldRoundToQuarterHours:(BOOL)arg2;
@property(copy) NSDate *selectionDate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

