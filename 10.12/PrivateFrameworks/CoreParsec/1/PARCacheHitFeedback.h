//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/PARSkipSearchFeedback.h>

#import <CoreParsec/SFProtobufObject-Protocol.h>

@class NSString, PBCodable;

@interface PARCacheHitFeedback : PARSkipSearchFeedback <SFProtobufObject>
{
    NSString *_uuid;
}

+ (BOOL)supportsSecureCoding;
+ (Class)protobufClass;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTriggerEvent:(unsigned long long)arg1 input:(id)arg2 uuid:(id)arg3;
@property(readonly, nonatomic) PBCodable *protobufMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

