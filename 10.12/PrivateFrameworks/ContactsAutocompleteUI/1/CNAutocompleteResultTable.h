//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSTrackingArea;

@interface CNAutocompleteResultTable : NSTableView
{
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)moveDown;
- (BOOL)moveUp;
- (BOOL)selectNextValidRowFromRow:(long long)arg1;
- (void)selectFirstRow;
- (void)selectRow:(unsigned long long)arg1;
- (BOOL)allowsVibrancy;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1;

@end

