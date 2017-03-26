//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationMetric-Protocol.h>
#import <CloudKitDaemon/NSCopying-Protocol.h>
#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
    unsigned long long _recordsUploaded;
    unsigned long long _recordsDownloaded;
    unsigned long long _recordsDeleted;
    unsigned long long _retries;
    NSMutableSet *_requestUUIDs;
    NSMutableArray *_ranges;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property unsigned long long retries; // @synthesize retries=_retries;
@property unsigned long long recordsDeleted; // @synthesize recordsDeleted=_recordsDeleted;
@property unsigned long long recordsDownloaded; // @synthesize recordsDownloaded=_recordsDownloaded;
@property unsigned long long recordsUploaded; // @synthesize recordsUploaded=_recordsUploaded;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property double duration; // @synthesize duration=_duration;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (void)addRange:(id)arg1;
@property(readonly) NSArray *rangesCopy;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithStartDate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

