//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol GEORequestCounterProtocol <NSObject>
@property(nonatomic) BOOL countersEnabled;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)incrementAtTime:(NSDate *)arg1 app:(NSString *)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4;
- (void)incrementForApp:(NSString *)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3;
@end

