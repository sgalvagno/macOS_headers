//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEVPNManager, NSDate;

@interface NEVPNConnection : NSObject
{
    int _sessionType;
    long long _status;
    NSDate *_connectedDate;
    void *_session;
    NEVPNManager *_weakmanager;
}

@property __weak NEVPNManager *weakmanager; // @synthesize weakmanager=_weakmanager;
@property(readonly) int sessionType; // @synthesize sessionType=_sessionType;
@property void *session; // @synthesize session=_session;
@property(readonly) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly) NEVPNManager *manager;
- (void)destroySession;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateSessionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopVPNTunnel;
- (BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;
- (BOOL)startVPNTunnelAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

