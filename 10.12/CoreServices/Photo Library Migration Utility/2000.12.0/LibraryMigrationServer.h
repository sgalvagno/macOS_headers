//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol LibraryMigrationServiceDelegate;

@interface LibraryMigrationServer : NSObject <NSXPCListenerDelegate>
{
    BOOL _isStarted;
    id <LibraryMigrationServiceDelegate> _serviceDelegate;
    NSXPCListener *_xpcListener;
}

+ (id)sharedInstance;
@property(retain) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property BOOL isStarted; // @synthesize isStarted=_isStarted;
@property id <LibraryMigrationServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

