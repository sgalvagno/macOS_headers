//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEORPFeedbackSubmissionParameters.h>

@interface GEORPFeedbackSubmissionParameters (RAPGeoExtras)
- (BOOL)isPersonalizedMapsFeedback;
- (BOOL)isTransitFeedback;
- (BOOL)isDirectionsFeedback;
- (void)_insertImageIdIntoCommonCorrections:(id)arg1;
- (void)_insertImageIdIntoMapViewContext:(id)arg1;
- (void)_insertOverviewDirectionsImageId:(id)arg1;
- (void)_insertDirectionStepCommentId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)_insertDirectionStepImageId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)appendServerImageId:(id)arg1 withMatchingPhoto:(id)arg2;
- (void)setFeedbackType;
- (void)addDirectionsContextWithReport:(id)arg1 recording:(id)arg2;
@end

