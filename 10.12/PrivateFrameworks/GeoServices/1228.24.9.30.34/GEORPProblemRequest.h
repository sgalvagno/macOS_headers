//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPClientCapabilities, GEORPProblem, GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    GEORPProblem *_problem;
    NSString *_problemUuid;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
}

@property(retain, nonatomic) NSString *problemUuid; // @synthesize problemUuid=_problemUuid;
@property(retain, nonatomic) GEORPClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(retain, nonatomic) GEORPProblem *problem; // @synthesize problem=_problem;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasProblemUuid;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(readonly, nonatomic) BOOL hasInputLanguage;
@property(readonly, nonatomic) BOOL hasUserEmail;
@property(readonly, nonatomic) BOOL hasDevicePushToken;
@property(readonly, nonatomic) BOOL hasClientMetadata;
@property(readonly, nonatomic) BOOL hasAnalyticMetadata;
@property(readonly, nonatomic) BOOL hasUserCredentials;
@property(readonly, nonatomic) BOOL hasProblem;
- (void)dealloc;
- (id)initWithProblem:(id)arg1 pushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;

@end

