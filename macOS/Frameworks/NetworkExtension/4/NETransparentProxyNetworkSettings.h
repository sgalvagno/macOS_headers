//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings
{
    NSArray *_includedNetworkRules;
    NSArray *_excludedNetworkRules;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *excludedNetworkRules; // @synthesize excludedNetworkRules=_excludedNetworkRules;
@property(copy) NSArray *includedNetworkRules; // @synthesize includedNetworkRules=_includedNetworkRules;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (BOOL)validateNetworkRule:(id)arg1 collectErrors:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

