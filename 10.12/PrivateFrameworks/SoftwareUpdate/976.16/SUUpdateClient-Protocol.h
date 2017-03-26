//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SoftwareUpdate/NSObject-Protocol.h>

@class NSString, NSURLAuthenticationChallenge, SUUpdateStatus;

@protocol SUUpdateClient <NSObject>
- (void)installStateDidChange:(SUUpdateStatus *)arg1 forUpdateWithProductKey:(NSString *)arg2;
- (void)availableUpdatesDidChange;

@optional
- (void)authChallengeWasReceived:(NSURLAuthenticationChallenge *)arg1 handled:(char *)arg2;
@end

