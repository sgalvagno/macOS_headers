//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;
@protocol GEOTransitRoutingIncidentMessage;

@protocol GEODirectionsError
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (BOOL)hasError:(long long)arg1;
@end

