//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MallocTotal : NSObject
{
    unsigned long long totalBytesReclaimable;
    unsigned long long totalNodesReclaimable;
    unsigned long long totalBytesNonReclaimable;
    unsigned long long totalNodesNonReclaimable;
    NSMutableArray *purgeTypeTotals;
}

@property(retain) NSMutableArray *purgeTypeTotals; // @synthesize purgeTypeTotals;
@property unsigned long long totalNodesNonReclaimable; // @synthesize totalNodesNonReclaimable;
@property unsigned long long totalBytesNonReclaimable; // @synthesize totalBytesNonReclaimable;
@property unsigned long long totalNodesReclaimable; // @synthesize totalNodesReclaimable;
@property unsigned long long totalBytesReclaimable; // @synthesize totalBytesReclaimable;
- (void)printTotals:(id)arg1;
- (void)dealloc;
- (id)initWithMallocData:(id)arg1;
- (id)totalForPurgeType:(int)arg1;

@end

