//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SPConnectionToken.h"
#import "SPNearbyToken.h"

@class NSData, NSDateInterval, NSString, SPBeaconingKey;

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken>
{
    SPBeaconingKey *_beaconingKey;
    NSData *_commandKey;
    NSData *_connectionToken;
    NSData *_nearbyToken;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *nearbyToken; // @synthesize nearbyToken=_nearbyToken;
@property(copy, nonatomic) NSData *connectionToken; // @synthesize connectionToken=_connectionToken;
@property(copy, nonatomic) NSData *commandKey; // @synthesize commandKey=_commandKey;
@property(copy, nonatomic) SPBeaconingKey *beaconingKey; // @synthesize beaconingKey=_beaconingKey;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSData *address;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

