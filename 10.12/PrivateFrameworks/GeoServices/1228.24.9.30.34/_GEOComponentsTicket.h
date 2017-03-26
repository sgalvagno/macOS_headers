//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapServiceTicket-Protocol.h>

@class GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOComponentsTicket : NSObject <GEOMapServiceTicket>
{
    NSDictionary *_components;
    unsigned long long _muid;
    int _resultProviderID;
    NSString *_contentProvider;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

