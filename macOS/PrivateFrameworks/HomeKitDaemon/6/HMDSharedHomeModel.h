//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSNumber;

@interface HMDSharedHomeModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
- (BOOL)isReplayable;

// Remaining properties
@property(retain, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;
@property(retain, nonatomic) NSData *homeData; // @dynamic homeData;

@end

