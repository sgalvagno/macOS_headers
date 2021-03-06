//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedPersonalizingItem-Protocol.h>
#import <NewsCore/FCIssueAccessCheckable-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCAssetHandle, FCColor, FCInterestToken, NSArray, NSDate, NSString, NTPBIssueRecord;
@protocol FCChannelProviding;

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying>
{
    BOOL _isCurrent;
    BOOL _isDraft;
    BOOL _paid;
    NSString *_identifier;
    long long _type;
    NSString *_title;
    NSDate *_publicationDate;
    NSString *_coverDate;
    FCAssetHandle *_metadataJSONAssetHandle;
    FCAssetHandle *_coverImageAssetHandle;
    double _coverImageAspectRatio;
    FCColor *_coverImagePrimaryColor;
    NSString *_layeredCoverJSON;
    double _layeredCoverAspectRatio;
    FCColor *_layeredCoverPrimaryColor;
    long long _minimumNewsVersion;
    NSString *_notificationDescription;
    NSString *_issueDescription;
    NSArray *_allArticleIDs;
    NSString *_coverArticleID;
    NSArray *_allowedStorefrontIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_topicTagIDs;
    id <FCChannelProviding> _sourceChannel;
    FCInterestToken *_interestToken;
    NTPBIssueRecord *_issueRecord;
}

@property(readonly, nonatomic) NTPBIssueRecord *issueRecord; // @synthesize issueRecord=_issueRecord;
@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, copy, nonatomic) NSArray *topicTagIDs; // @synthesize topicTagIDs=_topicTagIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSString *coverArticleID; // @synthesize coverArticleID=_coverArticleID;
@property(readonly, copy, nonatomic) NSArray *allArticleIDs; // @synthesize allArticleIDs=_allArticleIDs;
@property(readonly, copy, nonatomic) NSString *issueDescription; // @synthesize issueDescription=_issueDescription;
@property(readonly, copy, nonatomic) NSString *notificationDescription; // @synthesize notificationDescription=_notificationDescription;
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(readonly, nonatomic, getter=isPaid) BOOL paid; // @synthesize paid=_paid;
@property(readonly, nonatomic) BOOL isDraft; // @synthesize isDraft=_isDraft;
@property(readonly, nonatomic) BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
@property(readonly, copy, nonatomic) FCColor *layeredCoverPrimaryColor; // @synthesize layeredCoverPrimaryColor=_layeredCoverPrimaryColor;
@property(readonly, nonatomic) double layeredCoverAspectRatio; // @synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio;
@property(readonly, copy, nonatomic) NSString *layeredCoverJSON; // @synthesize layeredCoverJSON=_layeredCoverJSON;
@property(readonly, copy, nonatomic) FCColor *coverImagePrimaryColor; // @synthesize coverImagePrimaryColor=_coverImagePrimaryColor;
@property(readonly, nonatomic) double coverImageAspectRatio; // @synthesize coverImageAspectRatio=_coverImageAspectRatio;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle; // @synthesize coverImageAssetHandle=_coverImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *metadataJSONAssetHandle; // @synthesize metadataJSONAssetHandle=_metadataJSONAssetHandle;
@property(readonly, copy, nonatomic) NSString *coverDate; // @synthesize coverDate=_coverDate;
@property(readonly, copy, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isLocalDraft;
@property(readonly, nonatomic) BOOL isBlockedExplicitContent;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIssueRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 sourceChannel:(id)arg4;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageAspectRatio:(double)arg8 coverImagePrimaryColor:(id)arg9 layeredCoverJSON:(id)arg10 layeredCoverAspectRatio:(double)arg11 layeredCoverPrimaryColor:(id)arg12 isCurrent:(BOOL)arg13 isDraft:(BOOL)arg14 isPaid:(BOOL)arg15 minimumNewsVersion:(long long)arg16 allArticleIDs:(id)arg17 coverArticleID:(id)arg18 allowedStorefrontIDs:(id)arg19 blockedStorefrontIDs:(id)arg20 topicTagIDs:(id)arg21 sourceChannel:(id)arg22 notificationDescription:(id)arg23 issueDescription:(id)arg24;
- (id)initWithData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (id)init;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic, getter=isANF) BOOL anf;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageHQAssetHandle:(id)arg8 coverImageLQAssetHandle:(id)arg9 coverImageAspectRatio:(double)arg10 coverImagePrimaryColor:(id)arg11 layeredCoverJSON:(id)arg12 layeredCoverAspectRatio:(double)arg13 layeredCoverPrimaryColor:(id)arg14 isCurrent:(BOOL)arg15 isDraft:(BOOL)arg16 isPaid:(BOOL)arg17 minimumNewsVersion:(long long)arg18 allArticleIDs:(id)arg19 coverArticleID:(id)arg20 allowedStorefrontIDs:(id)arg21 blockedStorefrontIDs:(id)arg22 PDFResourceIDs:(id)arg23 topicTagIDs:(id)arg24 sourceChannel:(id)arg25 notificationDescription:(id)arg26 issueDescription:(id)arg27;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

