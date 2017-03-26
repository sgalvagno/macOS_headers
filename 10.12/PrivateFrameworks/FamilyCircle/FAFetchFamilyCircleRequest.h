//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest
{
    BOOL _signedInAccountShouldBeApprover;
    BOOL _forceServerFetch;
    BOOL _doNotFetchFromServer;
    BOOL _promptUserToResolveAuthenticatonFailure;
    NSArray *_expectedDSIDs;
    NSDictionary *_serverResponse;
}

@property(readonly, retain) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property BOOL promptUserToResolveAuthenticatonFailure; // @synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure;
@property BOOL doNotFetchFromServer; // @synthesize doNotFetchFromServer=_doNotFetchFromServer;
@property BOOL forceServerFetch; // @synthesize forceServerFetch=_forceServerFetch;
@property BOOL signedInAccountShouldBeApprover; // @synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover;
@property(copy) NSArray *expectedDSIDs; // @synthesize expectedDSIDs=_expectedDSIDs;
- (void).cxx_destruct;
- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

