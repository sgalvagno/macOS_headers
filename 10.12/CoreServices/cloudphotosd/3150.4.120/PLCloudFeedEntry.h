//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSOrderedSet, NSString;

@interface PLCloudFeedEntry : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (id)userInfoDictionary;
- (long long)entryType;
- (id)mutableEntryAssets;
- (id)cloudFeedEntryInfo;

// Remaining properties
@property(retain, nonatomic) NSString *entryAlbumGUID; // @dynamic entryAlbumGUID;
@property(retain, nonatomic) NSOrderedSet *entryAssets; // @dynamic entryAssets;
@property(retain, nonatomic) NSOrderedSet *entryComments; // @dynamic entryComments;
@property(retain, nonatomic) NSDate *entryDate; // @dynamic entryDate;
@property(retain, nonatomic) NSString *entryIdentifier; // @dynamic entryIdentifier;
@property(retain, nonatomic) NSString *entryInvitationRecordGUID; // @dynamic entryInvitationRecordGUID;
@property(retain, nonatomic) NSNumber *entryPriorityNumber; // @dynamic entryPriorityNumber;
@property(retain, nonatomic) NSNumber *entryTypeNumber; // @dynamic entryTypeNumber;
@property(retain, nonatomic) NSData *userInfo; // @dynamic userInfo;

@end

