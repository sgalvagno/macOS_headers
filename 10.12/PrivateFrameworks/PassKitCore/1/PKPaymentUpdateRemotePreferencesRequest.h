//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKRemotePreferences;

@interface PKPaymentUpdateRemotePreferencesRequest : PKPaymentWebServiceRequest
{
    PKRemotePreferences *_preferences;
}

@property(retain, nonatomic) PKRemotePreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (id)initWithRemotePreferences:(id)arg1;

@end

