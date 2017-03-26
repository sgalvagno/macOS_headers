//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountPolicy/APPolicyMinimum.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@interface APPolicyMinimumLetters : APPolicyMinimum <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andMinimum:(id)arg2;
+ (id)policyWithMinimum:(id)arg1;
- (id)_parametersForMinimum:(id)arg1;
- (id)_contentDescriptionsForMinimum:(id)arg1;
- (id)_contentForMinimum:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMinimum:(id)arg2;
- (id)initWithMinimum:(id)arg1;

@end

