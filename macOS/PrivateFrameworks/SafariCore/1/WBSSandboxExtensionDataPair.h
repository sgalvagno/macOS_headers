//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariCore/WBSPair.h>

#import "NSSecureCoding.h"

@interface WBSSandboxExtensionDataPair : WBSPair <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 permissions:(id)arg2;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

