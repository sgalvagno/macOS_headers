//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface NSXPCSharedListenerManagerDelegate : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

