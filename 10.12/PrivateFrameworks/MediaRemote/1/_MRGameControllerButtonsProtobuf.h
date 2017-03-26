//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying>
{
    float _buttonA;
    float _buttonB;
    float _buttonPause;
    float _buttonX;
    float _buttonY;
    float _dpadX;
    float _dpadY;
    float _leftShoulder;
    float _leftThumbstickX;
    float _leftThumbstickY;
    float _leftTrigger;
    float _rightShoulder;
    float _rightThumbstickX;
    float _rightThumbstickY;
    float _rightTrigger;
    struct {
        unsigned int buttonA:1;
        unsigned int buttonB:1;
        unsigned int buttonPause:1;
        unsigned int buttonX:1;
        unsigned int buttonY:1;
        unsigned int dpadX:1;
        unsigned int dpadY:1;
        unsigned int leftShoulder:1;
        unsigned int leftThumbstickX:1;
        unsigned int leftThumbstickY:1;
        unsigned int leftTrigger:1;
        unsigned int rightShoulder:1;
        unsigned int rightThumbstickX:1;
        unsigned int rightThumbstickY:1;
        unsigned int rightTrigger:1;
    } _has;
}

@property(nonatomic) float buttonPause; // @synthesize buttonPause=_buttonPause;
@property(nonatomic) float rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(nonatomic) float leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(nonatomic) float rightThumbstickY; // @synthesize rightThumbstickY=_rightThumbstickY;
@property(nonatomic) float rightThumbstickX; // @synthesize rightThumbstickX=_rightThumbstickX;
@property(nonatomic) float leftThumbstickY; // @synthesize leftThumbstickY=_leftThumbstickY;
@property(nonatomic) float leftThumbstickX; // @synthesize leftThumbstickX=_leftThumbstickX;
@property(nonatomic) float rightShoulder; // @synthesize rightShoulder=_rightShoulder;
@property(nonatomic) float leftShoulder; // @synthesize leftShoulder=_leftShoulder;
@property(nonatomic) float buttonY; // @synthesize buttonY=_buttonY;
@property(nonatomic) float buttonX; // @synthesize buttonX=_buttonX;
@property(nonatomic) float buttonB; // @synthesize buttonB=_buttonB;
@property(nonatomic) float buttonA; // @synthesize buttonA=_buttonA;
@property(nonatomic) float dpadY; // @synthesize dpadY=_dpadY;
@property(nonatomic) float dpadX; // @synthesize dpadX=_dpadX;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasButtonPause;
@property(nonatomic) BOOL hasRightTrigger;
@property(nonatomic) BOOL hasLeftTrigger;
@property(nonatomic) BOOL hasRightThumbstickY;
@property(nonatomic) BOOL hasRightThumbstickX;
@property(nonatomic) BOOL hasLeftThumbstickY;
@property(nonatomic) BOOL hasLeftThumbstickX;
@property(nonatomic) BOOL hasRightShoulder;
@property(nonatomic) BOOL hasLeftShoulder;
@property(nonatomic) BOOL hasButtonY;
@property(nonatomic) BOOL hasButtonX;
@property(nonatomic) BOOL hasButtonB;
@property(nonatomic) BOOL hasButtonA;
@property(nonatomic) BOOL hasDpadY;
@property(nonatomic) BOOL hasDpadX;

@end

