//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSCredentials : NSObject
{
    NSString *_authenticationType;
}

+ (id)noAuthenticationNeededCredentials;
@property NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
- (id)description;
- (id)initWithAuthenticationType:(id)arg1;

@end

