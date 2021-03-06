//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMAccessoryDelegate.h"
#import "HMAccessoryDelegatePrivate.h"
#import "HMHomeDelegate.h"

@class HMHome, NSMutableDictionary, NSString;

@interface _TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate>
{
    HMHome *_currentHome;
    NSMutableDictionary *_serviceToAccessoryIDMapping;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *serviceToAccessoryIDMapping; // @synthesize serviceToAccessoryIDMapping=_serviceToAccessoryIDMapping;
@property(retain, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
- (BOOL)_checkErrorForLocallySuspendedAccessory:(id)arg1;
- (void)_readCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkAccessoryReachabilityAndFetchTVServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateServicesForAccessory:(id)arg1;
- (void)_updateAccessoriesForHome:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

