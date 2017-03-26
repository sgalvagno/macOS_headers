//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _timeIntervals;
    float _thumbnailsHeight;
    float _thumbnailsWidth;
    struct {
        unsigned int thumbnailsHeight:1;
        unsigned int thumbnailsWidth:1;
    } _has;
}

@property(nonatomic) float thumbnailsHeight; // @synthesize thumbnailsHeight=_thumbnailsHeight;
@property(nonatomic) float thumbnailsWidth; // @synthesize thumbnailsWidth=_thumbnailsWidth;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasThumbnailsHeight;
@property(nonatomic) BOOL hasThumbnailsWidth;
- (void)setTimeIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (double)timeIntervalsAtIndex:(unsigned long long)arg1;
- (void)addTimeIntervals:(double)arg1;
- (void)clearTimeIntervals;
@property(readonly, nonatomic) double *timeIntervals;
@property(readonly, nonatomic) unsigned long long timeIntervalsCount;
- (void)dealloc;

@end

