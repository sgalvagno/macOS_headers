//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPromptForRouteAuthorizationMessageProtobuf : PBCodable <NSCopying>
{
    int _inputType;
    _MRAVOutputDeviceDescriptorProtobuf *_route;
    struct {
        unsigned int inputType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route; // @synthesize route=_route;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsInputType:(id)arg1;
- (id)inputTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasInputType;
@property(nonatomic) int inputType; // @synthesize inputType=_inputType;
@property(readonly, nonatomic) BOOL hasRoute;

@end

