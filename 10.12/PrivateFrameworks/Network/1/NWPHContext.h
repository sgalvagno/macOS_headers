//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPHContext : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_request;
    NSObject<OS_xpc_object> *_reply;
}

@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(readonly, nonatomic) int pid;
- (id)initWithRequest:(id)arg1 onConnection:(id)arg2;

@end

