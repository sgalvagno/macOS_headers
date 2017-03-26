//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VSWebServerDelegate;

__attribute__((visibility("hidden")))
@interface VSWebServer : NSObject
{
    id <VSWebServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_privateQueue;
    struct _CFHTTPServer *_server;
}

@property(nonatomic) struct _CFHTTPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSWebServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(readonly, nonatomic) unsigned short port;
- (id)serviceType;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(unsigned short)arg1;

@end

