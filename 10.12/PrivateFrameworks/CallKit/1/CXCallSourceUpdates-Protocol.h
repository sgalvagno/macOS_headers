//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCallFailureContext, CXCallSource, CXCallUpdate, CXProviderConfiguration, NSData, NSDate, NSString, NSUUID;

@protocol CXCallSourceUpdates <NSObject>
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 crossDeviceIdentifier:(NSString *)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 changedFrequencyData:(NSData *)arg3 forDirection:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedAudioFinishedForCallWithUUID:(NSUUID *)arg2;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 connectedAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 startedConnectingAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 sentInvitationAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 endedAtDate:(NSDate *)arg3 privateReason:(long long)arg4 failureContext:(CXCallFailureContext *)arg5;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 updated:(CXCallUpdate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedNewIncomingCallWithUUID:(NSUUID *)arg2 update:(CXCallUpdate *)arg3 completion:(void (^)(NSError *))arg4;
- (void)callSource:(CXCallSource *)arg1 registeredWithConfiguration:(CXProviderConfiguration *)arg2;
@end

