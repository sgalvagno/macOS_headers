//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MailCore/MCAuthScheme.h>

@interface MCGssapiAuthScheme : MCAuthScheme
{
}

+ (id)gssApiAuthScheme;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)supportedSaslMechanisms;
- (BOOL)requiresPassword;
- (unsigned int)applescriptScheme;
- (id)humanReadableName;
- (id)name;
- (void)dealloc;

@end

