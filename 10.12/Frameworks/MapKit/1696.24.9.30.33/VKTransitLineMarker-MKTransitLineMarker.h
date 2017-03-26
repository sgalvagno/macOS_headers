//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKTransitLineMarker.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>
#import <MapKit/GEOTransitShieldDataSource-Protocol.h>
#import <MapKit/MKTransitLineMarker-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface VKTransitLineMarker (MKTransitLineMarker) <MKTransitLineMarker, GEOTransitShieldDataSource, GEOTransitArtworkDataSource>
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) long long artworkUseType;
@property(readonly, nonatomic) long long artworkSourceType;
- (id)artwork;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *shieldText;
@property(readonly, nonatomic) long long shieldType;
@property(readonly) Class superclass;
@end

