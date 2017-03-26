//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WirelessProximity/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding>
{
    unsigned char _clientType;
    NSUUID *_peerUUID;
    NSDictionary *_peerTrackingDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDictionary *peerTrackingDictionary; // @synthesize peerTrackingDictionary=_peerTrackingDictionary;
@property(retain) NSUUID *peerUUID; // @synthesize peerUUID=_peerUUID;
@property unsigned char clientType; // @synthesize clientType=_clientType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

