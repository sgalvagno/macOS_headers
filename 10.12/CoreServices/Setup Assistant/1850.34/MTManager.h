//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MTManager : NSObject
{
    BOOL _isMacBuddy;
    NSMutableDictionary *_timers;
    NSMutableDictionary *_messageBlocks;
    NSObject<OS_dispatch_queue> *_messageQueue;
    long long _paneCount;
}

+ (id)sharedManager;
@property BOOL isMacBuddy; // @synthesize isMacBuddy=_isMacBuddy;
@property long long paneCount; // @synthesize paneCount=_paneCount;
@property(retain) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSMutableDictionary *messageBlocks; // @synthesize messageBlocks=_messageBlocks;
@property(retain) NSMutableDictionary *timers; // @synthesize timers=_timers;
- (void).cxx_destruct;
- (void)sendMessages;
- (void)optedToSetupLater:(id)arg1;
- (void)noteSelectedKeyboard:(id)arg1 wasSuggested:(BOOL)arg2 typingStyles:(id)arg3;
- (void)noteSelectedCountry:(id)arg1 wasSuggested:(BOOL)arg2;
- (void)usingMigrationMethod:(id)arg1;
- (void)logPaneCount;
- (void)decrementPaneCount;
- (void)incrementPaneCount;
- (void)hitFeatureEligibilityCase:(id)arg1 withResult:(id)arg2;
- (void)hitErrorCase:(id)arg1 withResult:(id)arg2;
- (void)optedInToFeatureWithDetails:(id)arg1 forKey:(id)arg2;
- (void)optedInToFeature:(BOOL)arg1 forKey:(id)arg2;
- (void)endTimerForKey:(id)arg1 domain:(id)arg2 sendNow:(BOOL)arg3;
- (void)endTimerForKey:(id)arg1 domain:(id)arg2;
- (void)startTimerForKey:(id)arg1;
- (id)init;

@end

