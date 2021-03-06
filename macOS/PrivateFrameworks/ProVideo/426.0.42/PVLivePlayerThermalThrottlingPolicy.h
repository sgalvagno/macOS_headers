//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVLivePlayerThermalThrottlingPolicy : NSObject
{
    struct HGSynchronizable *_lock;
    struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> _policy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)populatedControlParametersForCurrentThermalLevel;
- (id)populatedControlParametersForThermalLevel:(int)arg1;
- (id)controlParametersForThermalLevel:(int)arg1;
- (void)setThermalLevel:(int)arg1 controlParameters:(id)arg2;
- (void)dealloc;
- (id)init;

@end

