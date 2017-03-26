//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying>
{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct {
        unsigned int deviceID:1;
        unsigned int recordingState:1;
    } _has;
}

@property(retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRecordingState:(id)arg1;
- (id)recordingStateAsString:(int)arg1;
@property(nonatomic) BOOL hasRecordingState;
@property(nonatomic) int recordingState; // @synthesize recordingState=_recordingState;
@property(readonly, nonatomic) BOOL hasDescriptor;
@property(nonatomic) BOOL hasDeviceID;
- (void)dealloc;

@end

