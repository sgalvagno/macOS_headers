//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

#import <CalendarUI/NSAccessibilityImage-Protocol.h>

@class MKMapItem, NSString, NSURL;

@interface EKUIMapView : MKMapView <NSAccessibilityImage>
{
    BOOL _directionsAreWalking;
    BOOL _suggestedEvent;
    NSURL *_mapHandleURL;
    MKMapItem *_location;
    MKMapItem *_startLocation;
    NSString *_searchString;
}

@property BOOL suggestedEvent; // @synthesize suggestedEvent=_suggestedEvent;
@property BOOL directionsAreWalking; // @synthesize directionsAreWalking=_directionsAreWalking;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain) MKMapItem *startLocation; // @synthesize startLocation=_startLocation;
@property(retain) MKMapItem *location; // @synthesize location=_location;
@property(retain) NSURL *mapHandleURL; // @synthesize mapHandleURL=_mapHandleURL;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

