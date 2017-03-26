//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@interface ETPAnger : PBCodable <NSCopying>
{
    float _duration;
    float _normalizedCenterX;
    float _normalizedCenterY;
    struct {
        unsigned int duration:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
    } _has;
}

@property(nonatomic) float normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) float normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) float duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNormalizedCenterY;
@property(nonatomic) BOOL hasNormalizedCenterX;
@property(nonatomic) BOOL hasDuration;

@end

