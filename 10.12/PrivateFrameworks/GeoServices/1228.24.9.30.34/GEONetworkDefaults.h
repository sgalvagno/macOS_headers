//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxyDelegate-Protocol.h>

@class NSDictionary, NSLock, NSMutableArray, NSString;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>
{
    id <_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
}

+ (id)sharedNetworkDefaults;
+ (void)_ib_disableServerConnection;
+ (void)setUseLocalProxy:(BOOL)arg1;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (BOOL)_needsUpdate;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

