//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject
{
    BOOL _previouslySentReachability;
    BOOL _currentReachability;
    NSString *_accessoryUUID;
}

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL currentReachability; // @synthesize currentReachability=_currentReachability;
@property(nonatomic) BOOL previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

