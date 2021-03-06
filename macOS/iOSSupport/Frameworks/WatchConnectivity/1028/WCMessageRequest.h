//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchConnectivity/WCMessage.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding>
{
    BOOL _expectsResponse;
}

+ (BOOL)supportsSecureCoding;
@property BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 expectsResponse:(BOOL)arg5;

@end

