//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IconServices/NSObject-Protocol.h>

@class NSXPCConnection, NSXPCListener;

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (BOOL)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

