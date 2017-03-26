//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMDDLinkClicked, SGMDDLinkShown;

@interface SGNLEventSuggestionsMetrics : NSObject
{
    SGMDDLinkShown *_dataDetectorsPresentation;
    SGMDDLinkClicked *_dataDetectorsEngagement;
}

+ (struct SGMEventDurationAdj_)diffEventDurationChangedFrom:(double)arg1 to:(double)arg2;
+ (struct SGMEventDateAdj_)diffEventStartDateChangedFrom:(id)arg1 oldTimeZone:(id)arg2 to:(id)arg3 newTimeZone:(id)arg4;
+ (struct SGMEventStringAdj_)diffEventTitleChangedFrom:(id)arg1 to:(id)arg2;
+ (void)recordUserInteraction:(unsigned long long)arg1 withLinkInApplication:(long long)arg2 eventPrefillMode:(unsigned long long)arg3 eventTypeClassification:(id)arg4 proposedEvent:(id)arg5 confirmedEvent:(id)arg6;
+ (void)shownViaDataDetectorsLinkInApp:(long long)arg1;
+ (id)instance;
@property(retain, nonatomic) SGMDDLinkClicked *dataDetectorsEngagement; // @synthesize dataDetectorsEngagement=_dataDetectorsEngagement;
@property(retain, nonatomic) SGMDDLinkShown *dataDetectorsPresentation; // @synthesize dataDetectorsPresentation=_dataDetectorsPresentation;
- (void).cxx_destruct;
- (id)init;

@end

