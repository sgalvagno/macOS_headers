//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordsImporterSchedulingContext : NSObject
{
    NSMutableSet *_scheduledLogLocations;
    NSMutableSet *_pendingLogLocations;
    NSMutableSet *_failedLogLocations;
    NSMutableSet *_ignoredLogLocations;
    NSMutableDictionary *_logLocationsToEncounteredErrors;
    int _lock;
}

@property(readonly, nonatomic) NSDictionary *logLocationsToEncounteredErrors; // @synthesize logLocationsToEncounteredErrors=_logLocationsToEncounteredErrors;
@property(readonly, nonatomic) NSSet *ignoredLogLocations; // @synthesize ignoredLogLocations=_ignoredLogLocations;
@property(readonly, nonatomic) NSSet *failedLogLocations; // @synthesize failedLogLocations=_failedLogLocations;
@property(readonly, nonatomic) NSSet *scheduledLogLocations; // @synthesize scheduledLogLocations=_scheduledLogLocations;
@property(readonly, nonatomic) NSSet *pendingLogLocations; // @synthesize pendingLogLocations=_pendingLogLocations;
- (void)unionWithSchedulingContext:(id)arg1;
- (void)failedTransactionLogAtLocationRecovered:(id)arg1;
- (void)addPendingLogLocation:(id)arg1;
- (void)addPendingLogLocations:(id)arg1;
- (void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2;
- (void)transactionLogAtLocationWasIgnored:(id)arg1;
- (void)transactionLogAtLocationWasScheduled:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPendingLogLocations:(id)arg1;
- (id)init;

@end

