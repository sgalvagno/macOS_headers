//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPEdgeSelection, NSDate, NSString;

@interface NPNetworkInfo : NSObject <NSSecureCoding>
{
    NSDate *_lastVisited;
    NSDate *_lastUsed;
    long long _TFOStatus;
    NPEdgeSelection *_edgeSelection;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NPEdgeSelection *edgeSelection; // @synthesize edgeSelection=_edgeSelection;
@property long long TFOStatus; // @synthesize TFOStatus=_TFOStatus;
@property(retain) NSDate *lastUsed; // @synthesize lastUsed=_lastUsed;
@property(retain) NSDate *lastVisited; // @synthesize lastVisited=_lastVisited;
- (void).cxx_destruct;
@property(readonly) NSString *TFOStatusDesc;
@property(readonly) NSString *lastUsedDesc;
@property(readonly) NSString *lastVisitedDesc;
- (long long)compareLastVisited:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

