//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewServiceHostProtocol-Protocol.h>

@class NCRemotePlugIn, NSString;

@protocol NCRemotePlugInClient <NCRemoteViewServiceHostProtocol>
@property(readonly) NSString *remotePlugInClientIdentifier;
- (BOOL)remotePlugInDidDie:(NCRemotePlugIn *)arg1;
- (void)remotePlugInDidDeActivate:(NCRemotePlugIn *)arg1;
- (void)remotePlugInDidActivate:(NCRemotePlugIn *)arg1;
@end

