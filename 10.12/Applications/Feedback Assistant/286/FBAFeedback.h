//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBAFormResponse, NSArray, NSDate, NSOrderedSet;

@interface FBAFeedback : FBAManagedFeedbackObject
{
}

+ (id)entityName;
@property(retain) NSArray *feedbackFollowups;
- (void)setPropertiesFromJSONObject:(id)arg1;

// Remaining properties
@property(retain) NSDate *createdAt; // @dynamic createdAt;
@property(retain) FBAFormResponse *formResponse; // @dynamic formResponse;
@property(retain) NSOrderedSet *primitiveFeedbackFollowups; // @dynamic primitiveFeedbackFollowups;

@end

