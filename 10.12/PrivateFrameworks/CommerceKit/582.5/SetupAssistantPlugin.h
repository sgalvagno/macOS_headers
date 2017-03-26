//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/MBSetupAssistantDelegateConfiguration-Protocol.h>

@class ISStoreClient, NSString;

@interface SetupAssistantPlugin : NSObject <MBSetupAssistantDelegateConfiguration>
{
    ISStoreClient *_storeClient;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_appPreferencesDomain;
    NSString *_listenerName;
}

@property(readonly, retain) NSString *listenerName; // @synthesize listenerName=_listenerName;
- (void).cxx_destruct;
- (id)storeUserAgentString;
- (void)terminateSetupCompletion;
- (void)completeSetupWithResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)delegateAccountInformation;
- (id)delegateSetupRequest;
- (id)delegateIdentifier;
- (id)initWithStoreClient:(id)arg1;

@end

