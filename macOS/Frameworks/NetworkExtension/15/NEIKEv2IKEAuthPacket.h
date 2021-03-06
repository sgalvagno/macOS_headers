//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2AuthPayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload, NEIKEv2EAPPayload, NEIKEv2InitiatorIdentifierPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderIdentifierPayload, NEIKEv2ResponderTrafficSelectorPayload, NSArray;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet
{
    NEIKEv2ChildSAPayload *_sa;
    NEIKEv2InitiatorIdentifierPayload *_idi;
    NEIKEv2ResponderIdentifierPayload *_idr;
    NSArray *_certificates;
    NSArray *_certificateRequests;
    NEIKEv2AuthPayload *_auth;
    NEIKEv2EAPPayload *_eap;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}

+ (unsigned long long)exchangeType;
+ (id)copyTypeDescription;
+ (id)createIKEAuthResponse:(id)arg1 refusalError:(unsigned long long)arg2;
+ (id)createIKEAuthResponse:(id)arg1 ikeSA:(id)arg2 childSA:(id)arg3;
+ (id)createEAPForInitiatorIKESA:(id)arg1 childSA:(id)arg2 lastResponderPacket:(id)arg3;
+ (id)createIKEAuthForInitiatorIKESA:(id)arg1 childSA:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSArray *vendorIDs; // @synthesize vendorIDs=_vendorIDs;
@property(retain) NEIKEv2ResponderTrafficSelectorPayload *tsr; // @synthesize tsr=_tsr;
@property(retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi; // @synthesize tsi=_tsi;
@property(retain) NEIKEv2ConfigPayload *config; // @synthesize config=_config;
@property(retain) NEIKEv2EAPPayload *eap; // @synthesize eap=_eap;
@property(retain) NEIKEv2AuthPayload *auth; // @synthesize auth=_auth;
@property(retain) NSArray *certificateRequests; // @synthesize certificateRequests=_certificateRequests;
@property(retain) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain) NEIKEv2ResponderIdentifierPayload *idr; // @synthesize idr=_idr;
@property(retain) NEIKEv2InitiatorIdentifierPayload *idi; // @synthesize idi=_idi;
@property(retain) NEIKEv2ChildSAPayload *sa; // @synthesize sa=_sa;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (id)validateEAPOnlyAuthentication:(id)arg1;
- (id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg1 childSA:(id)arg2;
- (id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg1;
- (BOOL)validateAuthAsInitiator:(id)arg1 childSA:(id)arg2;
- (BOOL)validateFirstAuthPayloadsForInitiator:(id)arg1 childSA:(id)arg2;

@end

