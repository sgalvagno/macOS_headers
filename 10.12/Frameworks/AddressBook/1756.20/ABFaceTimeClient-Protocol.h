//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSString;

@protocol ABFaceTimeClient <NSObject>
- (void)telephonyAvailaibilityChanged:(BOOL)arg1;
- (void)messagingAvailabilityChanged:(BOOL)arg1 forEndpoint:(NSString *)arg2;
- (void)faceTimeAvailabilityChanged:(BOOL)arg1 forContactIdentifier:(NSString *)arg2;
@end

