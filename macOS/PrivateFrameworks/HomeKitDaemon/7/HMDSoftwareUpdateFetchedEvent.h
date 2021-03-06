//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _userInitiated;
    BOOL _newUpdateFetched;
}

+ (id)eventWasUserInitiated:(BOOL)arg1 wasNewUpdateFetched:(BOOL)arg2;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched; // @synthesize newUpdateFetched=_newUpdateFetched;
@property(nonatomic, getter=wasUserInitiated) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

