//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSUserActivity;

@protocol NSUIActivityProvider <NSObject>
@property(retain) NSUserActivity *userActivity;
- (void)_cleanUpUserActivity;
- (void)_didRestoreUserActivity:(NSUserActivity *)arg1;
- (void)_becomeCurrentUserActivityIfNecessary;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)restoreUserActivityState:(NSUserActivity *)arg1;
- (void)updateUserActivityState:(NSUserActivity *)arg1;
@end

