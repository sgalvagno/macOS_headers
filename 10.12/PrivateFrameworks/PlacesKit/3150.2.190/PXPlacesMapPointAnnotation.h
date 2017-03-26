//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/MKAnnotation-Protocol.h>
#import <PlacesKit/PXPlacesMapRenderable-Protocol.h>

@class NSOrderedSet, NSString;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable>
{
    id <PXPlacesMapRenderer> renderer;
    id <PXPlacesMapSelectionHandler> selectionHandler;
    NSOrderedSet *geotaggables;
    long long index;
    struct CLLocationCoordinate2D coordinate;
}

@property(nonatomic) long long index; // @synthesize index;
@property(retain) NSOrderedSet *geotaggables; // @synthesize geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer; // @synthesize renderer;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

