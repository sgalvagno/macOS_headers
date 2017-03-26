//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterProtocol-Protocol.h>

@class NSString;
@protocol GEORequestCounterProtocol;

@interface GEORequestCounter : NSObject <GEORequestCounterProtocol>
{
    id <GEORequestCounterProtocol> _proxy;
}

+ (id)sharedCounter;
+ (void)setUseLocalProxy:(BOOL)arg1;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)readRequestsPerAppSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3;
@property(nonatomic) BOOL countersEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

