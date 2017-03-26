//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, _IDSService;

@interface IDSService : NSObject
{
    _IDSService *_internal;
}

+ (BOOL)checkMessageSize:(unsigned long long)arg1 priority:(long long)arg2;
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)datagramChannelForSessionDestination:(id)arg1 error:(id *)arg2;
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id *)arg2;
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id *)arg2;
- (BOOL)updateSubServices:(id)arg1 forDevice:(id)arg2;
- (void)updateSubServices:(id)arg1;
- (long long)maxHomeKitPayloadSize;
- (void)testCloudQRConnection;
- (BOOL)isPretendingToBeFull;
- (void)setPretendingToBeFull:(BOOL)arg1;
- (void)startOTRTest:(long long)arg1;
- (void)setLinkPreferences:(id)arg1;
- (void)setPreferInfraWiFi:(BOOL)arg1;
- (id)uriForFromID:(id)arg1;
- (id)devicesForBTUUID:(id)arg1;
- (id)deviceForUniqueID:(id)arg1;
- (id)deviceForFromID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy, nonatomic) NSSet *internalAccounts;
@property(readonly, copy, nonatomic) NSSet *accounts;
- (id)iCloudAccount;
- (id)serviceDomain;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (BOOL)cancelIdentifier:(id)arg1 error:(id *)arg2;
- (void)sendAckForMessageWithContext:(id)arg1;
- (BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (BOOL)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (BOOL)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, retain, nonatomic) _IDSService *_internal;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 manuallyAckMessages:(BOOL)arg2;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2;
- (id)internal;

@end

