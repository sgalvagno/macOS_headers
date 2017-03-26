//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAGetSingleClientState-Protocol.h>

@class NSArray, NSString, SALocalSearchGeoClientState;

@interface SALocalSearchGetGeoClientState : SABaseClientBoundCommand <SAGetSingleClientState>
{
}

+ (id)getGeoClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getGeoClientState;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SALocalSearchGeoClientState *clientState;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

