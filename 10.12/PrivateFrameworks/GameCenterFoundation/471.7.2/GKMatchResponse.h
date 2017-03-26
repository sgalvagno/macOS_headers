//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKDispatchGroup, GKMatchRequestInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchResponse : GKInternalRepresentation
{
    int _sequence;
    NSString *_rid;
    NSArray *_matches;
    NSData *_sessionToken;
    NSArray *_relayPushes;
    NSData *_cdxTicket;
    long long _state;
    NSDictionary *_serverRequest;
    GKMatchRequestInternal *_matchRequest;
    GKDispatchGroup *_matchingGroup;
}

+ (id)secureCodedPropertyKeys;
@property(readonly) int sequence; // @synthesize sequence=_sequence;
@property GKDispatchGroup *matchingGroup; // @synthesize matchingGroup=_matchingGroup;
@property(retain) GKMatchRequestInternal *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain) NSDictionary *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) NSData *cdxTicket; // @synthesize cdxTicket=_cdxTicket;
@property(retain) NSArray *relayPushes; // @synthesize relayPushes=_relayPushes;
@property(retain) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain) NSArray *matches; // @synthesize matches=_matches;
@property(retain) NSString *rid; // @synthesize rid=_rid;
- (BOOL)transitionToState:(long long)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (int)_incrementSequence;
- (void)dealloc;

@end

