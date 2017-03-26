//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBAFeedbackFollowup, NSDate, NSNumber, NSString;

@interface FBAFeedbackFollowupResponse : FBAManagedFeedbackObject
{
}

+ (long long)sortValueOfFollowupResponseRole:(id)arg1;
+ (unsigned long long)followupResponseTypeFromString:(id)arg1;
+ (id)entityName;
@property unsigned long long type;
- (BOOL)isValidationResponse;
- (BOOL)isValidated;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)exportTimestamp;

// Remaining properties
@property(retain) NSDate *createdAt; // @dynamic createdAt;
@property(retain) FBAFeedbackFollowup *followup; // @dynamic followup;
@property(retain, nonatomic) NSNumber *primitiveType; // @dynamic primitiveType;
@property(retain) NSString *role; // @dynamic role;
@property(retain) NSString *text; // @dynamic text;

@end

