//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GSMux : NSObject
{
}

+ (BOOL)isOnDiscreteOnlyMode;
+ (BOOL)isOnIntegratedOnlyMode;
+ (BOOL)isUsingOldStyleSwitchPolicy;
+ (BOOL)isUsingDynamicSwitching;
+ (BOOL)isUsingDiscreteGPU;
+ (BOOL)isUsingIntegratedGPU;
+ (BOOL)setMode:(int)arg1;
+ (void)switcherClose;
+ (BOOL)switcherOpen;

@end

