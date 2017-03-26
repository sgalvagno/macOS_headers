//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKShape.h>

#import <MapKit/MKAnnotationPrivate-Protocol.h>
#import <MapKit/MKAnnotationRepresentation-Protocol.h>
#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>

@class NSString, VKCustomFeature;

@interface MKPointAnnotation : MKShape <MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate>
{
    struct CLLocationCoordinate2D _coordinate;
    long long _representation;
    VKCustomFeature *_customFeature;
}

@property(nonatomic) long long representation; // @synthesize representation=_representation;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (BOOL)_isPendingSelectionAnimated;
- (void)_invalidateCachedCoordinate;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (BOOL)isPersistent;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)annotation;
- (id)viewRepresentation;
- (BOOL)shouldRepresentSelf;
@property(readonly, nonatomic) BOOL showsBalloonCallout;
- (void)setShowsBalloonCallout:(BOOL)arg1;
- (id)feature;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

