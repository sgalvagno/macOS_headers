//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFAirDropDiscoveryControllerDelegate;

@interface SFAirDropDiscoveryController : NSObject
{
    id _delegate;
    BOOL _isVisible;
    BOOL _isLegacyDevice;
    BOOL _isLegacyModeEnabled;
    BOOL _isLegacyModeSettable;
    struct __SFOperation *_controller;
    long long _discoverableMode;
}

@property __weak id <SFAirDropDiscoveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)discoverableModeToString:(long long)arg1;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
@property long long discoverableMode;
- (void)dealloc;
@property(readonly, getter=isLegacyModeSettable) BOOL legacyModeSettable;
@property(getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property(readonly, getter=isLegacyDevice) BOOL legacyDevice;
@property(readonly, getter=isVisible) BOOL visible;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end

