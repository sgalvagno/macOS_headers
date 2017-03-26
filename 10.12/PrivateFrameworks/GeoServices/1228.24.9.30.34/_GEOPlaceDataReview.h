//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemReview-Protocol.h>

@class GEOPDPlace, GEOPDReview, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview>
{
    GEOPDPlace *_placeData;
    GEOPDReview *_review;
}

@property(readonly, nonatomic, getter=_identifier) NSString *identifier;
@property(readonly, nonatomic, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property(readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property(readonly, nonatomic, getter=_date) NSDate *date;
@property(readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property(readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property(readonly, nonatomic, getter=_maxScore) double maxScore;
@property(readonly, nonatomic, getter=_score) double score;
- (void)dealloc;
- (id)initWithPlaceData:(id)arg1 review:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

