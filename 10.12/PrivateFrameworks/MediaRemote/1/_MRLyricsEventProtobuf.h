//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying>
{
    double _endTime;
    double _startTime;
    _MRLyricsTokenProtobuf *_token;
    struct {
        unsigned int endTime:1;
        unsigned int startTime:1;
    } _has;
}

@property(retain, nonatomic) _MRLyricsTokenProtobuf *token; // @synthesize token=_token;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasToken;
@property(nonatomic) BOOL hasEndTime;
@property(nonatomic) BOOL hasStartTime;
- (void)dealloc;

@end

