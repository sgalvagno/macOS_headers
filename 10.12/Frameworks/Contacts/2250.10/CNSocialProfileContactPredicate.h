//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSocialProfile:(id)arg1;

@end

