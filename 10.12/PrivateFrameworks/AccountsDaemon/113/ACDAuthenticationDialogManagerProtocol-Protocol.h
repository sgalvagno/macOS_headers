//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class NSDictionary;

@protocol ACDAuthenticationDialogManagerProtocol <NSObject>
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(NSDictionary *)arg2;
- (void)contextForAuthenticationDialog:(void (^)(NSURL *, NSString *, NSString *, NSString *, NSString *))arg1;
@end

