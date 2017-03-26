//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACDEAppleConnectDelegate-Protocol.h"

@class NSString;

@interface FBADSAuth : NSObject <ACDEAppleConnectDelegate>
{
    CDUnknownBlockType _completionHandler;
}

+ (id)sharedInstance;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (BOOL)shouldUseOldEncryptionFormat;
- (void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2;
- (void)nativeLoginWithAccount:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

