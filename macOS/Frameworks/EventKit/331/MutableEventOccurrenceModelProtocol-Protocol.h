//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EventOccurrenceModelProtocol.h"
#import "MutableOccurrenceModelProtocol.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@protocol MutableEventOccurrenceModelProtocol <MutableOccurrenceModelProtocol, EventOccurrenceModelProtocol>
@property(retain, nonatomic) NSString *suggestionInfoUniqueKey;
@property(retain, nonatomic) NSDate *suggestionInfoTimestamp;
@property(retain, nonatomic) NSString *suggestionInfoOpaqueKey;
@property(nonatomic) unsigned long long suggestionInfoChangedFields;
@property(nonatomic) BOOL suggestionInfoAcknowledged;
@property(copy, nonatomic) NSString *sliceParentID;
@property(nonatomic) NSURL *conferenceURL;
@property(nonatomic) unsigned long long junkStatus;
@property(copy, nonatomic) NSString *travelAdvisoryBehaviorString;
@property(nonatomic) BOOL dontSendNotificationForChanges;
@property(copy, nonatomic) NSString *responseComment;
@property(copy, nonatomic) id <EKProtocolMutableStructuredLocation> ekStructuredEndLocation;
@property(copy, nonatomic) id <EKProtocolMutableStructuredLocation> ekStructuredStartLocation;
@property(nonatomic) double travelDuration;
@property(copy, nonatomic) NSString *privacyLevelString;
@property(nonatomic) BOOL needsGeocoding;
@property(nonatomic) BOOL isDetached;
@property(copy, nonatomic) NSString *statusString;
@property(nonatomic) int availabilityEnum;
@property(copy, nonatomic) NSTimeZone *endTimeZoneObject;
@property(copy, nonatomic) NSDate *endDateUnadjustedFromUTC;
@property(copy, nonatomic) NSString *lunarCalendarString;
@end

