//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDPowerAssertionObserver : NSObject
{
    NSMapTable *_operationsHoldingPowerAssertionsByID;
}

+ (id)sharedObserver;
@property(retain, nonatomic) NSMapTable *operationsHoldingPowerAssertionsByID; // @synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)operationDidReleasePowerAssertion:(id)arg1;
- (void)operationDidAcquirePowerAssertion:(id)arg1;
- (id)init;
- (id)_init;

@end

