//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NFIMAPAccountProxy.h>

@interface NFAosImapAccountProxy : NFIMAPAccountProxy
{
}

- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setSessionPassword:(id)arg1;

@end

