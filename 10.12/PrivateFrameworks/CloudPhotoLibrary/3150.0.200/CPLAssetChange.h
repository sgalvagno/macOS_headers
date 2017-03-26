//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, CPLFaceAnalysisReference, CPLPlaceAnnotation, NSArray, NSData, NSDate, NSNumber, NSString;

@interface CPLAssetChange : CPLItemChange
{
    BOOL _favorite;
    BOOL _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSDate *_addedDate;
    NSDate *_assetDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    long long _orientation;
    long long _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    NSString *_mediaGroupIdentifier;
    long long _videoComplementDurationValue;
    long long _videoComplementDurationTimescale;
    long long _videoComplementImageDisplayValue;
    long long _videoComplementImageDisplayTimescale;
    unsigned long long _videoComplementVisibilityState;
    unsigned long long _assetSubtype;
    unsigned long long _assetHDRType;
    CPLAdjustments *_adjustments;
    unsigned long long _originalChoice;
    long long _customRenderedValue;
    NSArray *_people;
    long long _facesVersion;
    NSString *_facesAdjustmentsFingerprint;
    CPLPlaceAnnotation *_placeAnnotation;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
    NSData *_facesData;
}

+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)serverSupportsVision;
@property(copy, nonatomic) NSData *facesData; // @synthesize facesData=_facesData;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) CPLPlaceAnnotation *placeAnnotation; // @synthesize placeAnnotation=_placeAnnotation;
@property(copy, nonatomic) NSString *facesAdjustmentsFingerprint; // @synthesize facesAdjustmentsFingerprint=_facesAdjustmentsFingerprint;
@property(nonatomic) long long facesVersion; // @synthesize facesVersion=_facesVersion;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property(nonatomic) long long customRenderedValue; // @synthesize customRenderedValue=_customRenderedValue;
@property(nonatomic) unsigned long long originalChoice; // @synthesize originalChoice=_originalChoice;
@property(retain, nonatomic) CPLAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property(nonatomic) unsigned long long assetHDRType; // @synthesize assetHDRType=_assetHDRType;
@property(nonatomic) unsigned long long assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(nonatomic) unsigned long long videoComplementVisibilityState; // @synthesize videoComplementVisibilityState=_videoComplementVisibilityState;
@property(nonatomic) long long videoComplementImageDisplayTimescale; // @synthesize videoComplementImageDisplayTimescale=_videoComplementImageDisplayTimescale;
@property(nonatomic) long long videoComplementImageDisplayValue; // @synthesize videoComplementImageDisplayValue=_videoComplementImageDisplayValue;
@property(nonatomic) long long videoComplementDurationTimescale; // @synthesize videoComplementDurationTimescale=_videoComplementDurationTimescale;
@property(nonatomic) long long videoComplementDurationValue; // @synthesize videoComplementDurationValue=_videoComplementDurationValue;
@property(copy, nonatomic) NSString *mediaGroupIdentifier; // @synthesize mediaGroupIdentifier=_mediaGroupIdentifier;
@property(copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(nonatomic) unsigned long long burstFlags; // @synthesize burstFlags=_burstFlags;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(copy, nonatomic) NSString *momentName; // @synthesize momentName=_momentName;
@property(copy, nonatomic) NSString *momentIdentifier; // @synthesize momentIdentifier=_momentIdentifier;
@property(copy, nonatomic) NSNumber *timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(copy, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription=_extendedDescription;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSDate *assetDate; // @synthesize assetDate=_assetDate;
@property(copy, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(copy, nonatomic) NSDate *lastSharedDate; // @synthesize lastSharedDate=_lastSharedDate;
@property(copy, nonatomic) NSString *masterIdentifier; // @synthesize masterIdentifier=_masterIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) CPLFaceAnalysisReference *faces;
- (BOOL)validateChangeWithError:(id *)arg1;
- (BOOL)validateFullRecord;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (BOOL)supportsDeletion;
- (BOOL)supportsResources;
- (id)allRelatedIdentifiers;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)propertiesDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;
- (BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id *)arg3;

@end

