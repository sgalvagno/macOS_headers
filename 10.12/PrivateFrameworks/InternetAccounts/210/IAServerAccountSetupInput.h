//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IAServerAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverName;
    NSString *_serverAddress;
    BOOL _enableMail;
    BOOL _enableJabber;
    BOOL _enableCalDAV;
    BOOL _enableCardDAV;
    BOOL _enableVPN;
}

@property BOOL enableVPN; // @synthesize enableVPN=_enableVPN;
@property BOOL enableCardDAV; // @synthesize enableCardDAV=_enableCardDAV;
@property BOOL enableCalDAV; // @synthesize enableCalDAV=_enableCalDAV;
@property BOOL enableJabber; // @synthesize enableJabber=_enableJabber;
@property BOOL enableMail; // @synthesize enableMail=_enableMail;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain) NSString *serverName; // @synthesize serverName=_serverName;
- (void).cxx_destruct;

@end

