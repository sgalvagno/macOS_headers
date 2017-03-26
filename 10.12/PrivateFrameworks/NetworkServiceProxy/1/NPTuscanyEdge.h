//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPLocation, NPNetworkInfo, NPTuscanyOnRamp, NSArray, NSDate, NSString, NWEndpoint, NWParameters, NWTCPConnection;
@protocol OS_dispatch_source;

@interface NPTuscanyEdge : NSObject <NSSecureCoding>
{
    BOOL _probePending;
    BOOL _dayPassPending;
    NSString *_name;
    NSString *_label;
    unsigned long long _index;
    NPLocation *_location;
    double _distance;
    NSArray *_onRamps;
    long long _currentOnRampIndex;
    NWTCPConnection *_probeConnection;
    CDUnknownBlockType _probeCompletionHandler;
    NSObject<OS_dispatch_source> *_probeTimer;
    NPNetworkInfo *_currentNWInfo;
    NWParameters *_currentParameters;
    NWEndpoint *_probeEndpoint;
    NSDate *_lastUsed;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *lastUsed; // @synthesize lastUsed=_lastUsed;
@property BOOL dayPassPending; // @synthesize dayPassPending=_dayPassPending;
@property(readonly) NWEndpoint *probeEndpoint; // @synthesize probeEndpoint=_probeEndpoint;
@property(retain) NWParameters *currentParameters; // @synthesize currentParameters=_currentParameters;
@property(retain) NPNetworkInfo *currentNWInfo; // @synthesize currentNWInfo=_currentNWInfo;
@property(retain) NSObject<OS_dispatch_source> *probeTimer; // @synthesize probeTimer=_probeTimer;
@property(copy) CDUnknownBlockType probeCompletionHandler; // @synthesize probeCompletionHandler=_probeCompletionHandler;
@property(retain) NWTCPConnection *probeConnection; // @synthesize probeConnection=_probeConnection;
@property long long currentOnRampIndex; // @synthesize currentOnRampIndex=_currentOnRampIndex;
@property(readonly) NSArray *onRamps; // @synthesize onRamps=_onRamps;
@property BOOL probePending; // @synthesize probePending=_probePending;
@property double distance; // @synthesize distance=_distance;
@property(readonly) NPLocation *location; // @synthesize location=_location;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)hasValidDayPass;
- (void)retainValidDayPassesFromEdge:(id)arg1;
- (long long)compareByDistance:(id)arg1;
- (void)replaceOnRampAtIndex:(unsigned long long)arg1 withOnRamp:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pingPong:(id)arg1;
- (void)cancelLatencyMeasurement;
- (void)measureLatency:(id)arg1 withNPNetworkInfo:(id)arg2 probeTFO:(BOOL)arg3 probeNoTFOCookie:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)tfoFailed:(id)arg1;
- (id)getOnRamp:(long long)arg1;
@property(readonly) long long nextOnRampIndex;
- (long long)nextIndexWithCurrentIndex:(long long)arg1 bound:(long long)arg2;
@property(readonly) NPTuscanyOnRamp *currentOnRamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 onRamps:(id)arg4 probeEndpoint:(id)arg5 location:(id)arg6;

@end

