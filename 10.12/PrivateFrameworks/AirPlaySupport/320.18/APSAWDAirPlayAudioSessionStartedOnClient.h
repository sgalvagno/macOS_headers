//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _announceMs;
    unsigned int _authMs;
    int _awdlCCA;
    int _awdlRSSI;
    unsigned int _bonjourMs;
    unsigned int _compressionType;
    unsigned int _connectMs;
    unsigned int _encryptionType;
    int _infraCCA;
    int _infraRSSI;
    int _infraSNR;
    unsigned int _recordMs;
    NSString *_sessionUUID;
    unsigned int _setupAudioMs;
    unsigned int _setupScreenMs;
    int _status;
    unsigned int _transportType;
    BOOL _didFallbackToInfraToAvoidP2POverDFS;
    struct {
        unsigned int timestamp:1;
        unsigned int announceMs:1;
        unsigned int authMs:1;
        unsigned int awdlCCA:1;
        unsigned int awdlRSSI:1;
        unsigned int bonjourMs:1;
        unsigned int compressionType:1;
        unsigned int connectMs:1;
        unsigned int encryptionType:1;
        unsigned int infraCCA:1;
        unsigned int infraRSSI:1;
        unsigned int infraSNR:1;
        unsigned int recordMs:1;
        unsigned int setupAudioMs:1;
        unsigned int setupScreenMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int didFallbackToInfraToAvoidP2POverDFS:1;
    } _has;
}

@property(nonatomic) int infraSNR; // @synthesize infraSNR=_infraSNR;
@property(nonatomic) int infraCCA; // @synthesize infraCCA=_infraCCA;
@property(nonatomic) int awdlCCA; // @synthesize awdlCCA=_awdlCCA;
@property(nonatomic) int infraRSSI; // @synthesize infraRSSI=_infraRSSI;
@property(nonatomic) int awdlRSSI; // @synthesize awdlRSSI=_awdlRSSI;
@property(nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS; // @synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) unsigned int recordMs; // @synthesize recordMs=_recordMs;
@property(nonatomic) unsigned int setupScreenMs; // @synthesize setupScreenMs=_setupScreenMs;
@property(nonatomic) unsigned int setupAudioMs; // @synthesize setupAudioMs=_setupAudioMs;
@property(nonatomic) unsigned int announceMs; // @synthesize announceMs=_announceMs;
@property(nonatomic) unsigned int authMs; // @synthesize authMs=_authMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property(nonatomic) unsigned int encryptionType; // @synthesize encryptionType=_encryptionType;
@property(nonatomic) unsigned int compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasInfraSNR;
@property(nonatomic) BOOL hasInfraCCA;
@property(nonatomic) BOOL hasAwdlCCA;
@property(nonatomic) BOOL hasInfraRSSI;
@property(nonatomic) BOOL hasAwdlRSSI;
@property(nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) BOOL hasRecordMs;
@property(nonatomic) BOOL hasSetupScreenMs;
@property(nonatomic) BOOL hasSetupAudioMs;
@property(nonatomic) BOOL hasAnnounceMs;
@property(nonatomic) BOOL hasAuthMs;
@property(nonatomic) BOOL hasConnectMs;
@property(nonatomic) BOOL hasBonjourMs;
@property(nonatomic) BOOL hasEncryptionType;
@property(nonatomic) BOOL hasCompressionType;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasSessionUUID;
- (void)dealloc;

@end

