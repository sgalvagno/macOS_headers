//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionCardType;
    _CPCardSectionForFeedback *_cardSection;
    _CPPunchoutForFeedback *_destination;
    int _feedbackType;
    int _triggerEvent;
    struct {
        unsigned int actionCardType:1;
        unsigned int feedbackType:1;
        unsigned int triggerEvent:1;
    } _has;
}

@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFeedbackType;
@property(readonly, nonatomic) BOOL hasCardSection;
- (int)StringAsActionCardType:(id)arg1;
- (id)actionCardTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionCardType;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
- (int)StringAsTriggerEvent:(id)arg1;
- (id)triggerEventAsString:(int)arg1;
@property(nonatomic) BOOL hasTriggerEvent;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) BOOL hasDestination;

@end

