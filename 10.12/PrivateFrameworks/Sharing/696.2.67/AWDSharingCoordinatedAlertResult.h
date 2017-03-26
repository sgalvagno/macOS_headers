//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@interface AWDSharingCoordinatedAlertResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _activityLevel;
    unsigned int _eventType;
    int _otherDevices;
    BOOL _bestIsMe;
    BOOL _skipScanPhoneCall;
    BOOL _skipScanVeryActive;
    struct {
        unsigned int timestamp:1;
        unsigned int activityLevel:1;
        unsigned int eventType:1;
        unsigned int otherDevices:1;
        unsigned int bestIsMe:1;
        unsigned int skipScanPhoneCall:1;
        unsigned int skipScanVeryActive:1;
    } _has;
}

@property(nonatomic) BOOL skipScanVeryActive; // @synthesize skipScanVeryActive=_skipScanVeryActive;
@property(nonatomic) BOOL skipScanPhoneCall; // @synthesize skipScanPhoneCall=_skipScanPhoneCall;
@property(nonatomic) BOOL bestIsMe; // @synthesize bestIsMe=_bestIsMe;
@property(nonatomic) int otherDevices; // @synthesize otherDevices=_otherDevices;
@property(nonatomic) unsigned int activityLevel; // @synthesize activityLevel=_activityLevel;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSkipScanVeryActive;
@property(nonatomic) BOOL hasSkipScanPhoneCall;
@property(nonatomic) BOOL hasBestIsMe;
@property(nonatomic) BOOL hasOtherDevices;
@property(nonatomic) BOOL hasActivityLevel;
@property(nonatomic) BOOL hasEventType;
@property(nonatomic) BOOL hasTimestamp;

@end

