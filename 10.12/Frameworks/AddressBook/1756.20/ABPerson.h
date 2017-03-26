//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABRecord.h>

@class NSString;

@interface ABPerson : ABRecord
{
}

+ (id)predicateForLinkId:(id)arg1;
+ (id)makeLinkIdentifier;
+ (id)instantMessageServiceKeyToPropertyMapping;
+ (id)instantMessageServiceKeys;
+ (id)instantMessageProperties;
+ (Class)remoteObjectClass;
+ (id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;
+ (id)personFromDictionary:(id)arg1 addressBook:(id)arg2 skipUnknownProperties:(BOOL)arg3 generateMultiValueIDs:(BOOL)arg4;
+ (id)personFromDictionary:(id)arg1;
+ (id)peopleFromVCardData:(id)arg1;
+ (void)addCustomPropertiesAndTypesFromAddressBook:(id)arg1 toAddressBook:(id)arg2;
+ (long long)removeProperties:(id)arg1;
+ (long long)addPropertiesAndTypes:(id)arg1;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3 save:(BOOL)arg4;
+ (id)builtInProperties;
+ (void)cancelLoadingImageDataForTag:(long long)arg1;
+ (id)_netInfoImageData;
+ (id)_pathForImageTaggedByEmails:(id)arg1;
+ (id)initialInstantMessageServiceKeys;
+ (id)initialFieldsForProperty:(id)arg1;
+ (id)builtInLabelsForProperty:(id)arg1;
+ (id)builtInLabels;
+ (id)recordIdentifierFromVCard:(id)arg1;
+ (id)personWithVCardData:(id)arg1 orFetchedFromAddressBook:(id)arg2;
+ (BOOL)includePhotosInVCards;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (BOOL)includeNotesInVCards;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (void)extractProperty:(id *)arg1 identifier:(id *)arg2 fromField:(id)arg3;
+ (void)eachPrivateField:(CDUnknownBlockType)arg1;
+ (id)vCardPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)arg1;
+ (void)clearPrivateFields;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (BOOL)privateVCardEnabled;
- (id)_mapURLForAddressWithId:(id)arg1;
- (void)nts_setTexttone:(id)arg1;
- (void)setTexttone:(id)arg1;
- (id)nts_texttone;
- (id)texttone;
- (void)nts_setRingtone:(id)arg1;
- (void)setRingtone:(id)arg1;
- (id)nts_ringtone;
- (id)ringtone;
- (BOOL)isTransient;
- (void)nts_setPhonemeData:(id)arg1;
@property(copy) NSString *phonemeData;
- (id)nts_phonemeData;
- (id)unifiedPerson;
- (id)unifiedValueForProperty:(id)arg1;
@property BOOL isPreferredForPhoto;
@property BOOL isPreferredForName;
- (id)linkedPeopleSortedForPhotos;
- (id)linkedPeopleWithSortDescriptors:(id)arg1;
- (id)linkedPeople;
- (void)unlink;
- (void)linkWithPerson:(id)arg1;
@property(copy) NSString *linkId;
- (BOOL)_propertyHasChanged:(id)arg1;
- (id)fetchUpdatedBackingObject;
- (BOOL)_requiresSeparateBirthdayCalendar;
- (void)importPerson:(id)arg1;
- (void)mergePerson:(id)arg1;
- (BOOL)canEditInCardView;
- (id)cropRectsFromArchivableData:(id)arg1;
- (id)archivableDataFromCropRects:(id)arg1;
- (void)nts_importSingleValue:(id)arg1 fromArchive:(id)arg2 forPropertyKey:(id)arg3;
- (void)nts_addPropertyValueToArchive:(id)arg1 forPropertyKey:(id)arg2;
- (BOOL)nts_canRemove;
- (BOOL)isReadOnly;
- (id)parentGroups;
- (BOOL)_isLastNameFirst;
- (BOOL)_isMe;
- (BOOL)nts__isCompany;
- (BOOL)_isCompany;
- (id)similarNameForHashing;
- (id)_compositeNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)compositeName;
- (id)displayName;
- (id)nts__RealCompositeName;
- (id)_realCompositeNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)_realCompositeName;
- (id)nts__fullPhoneticName;
- (id)nts_coreDataFullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)nts__fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)nts__fullName;
- (id)stringForXcode;
- (void)createFirstLastSortingNamePart1:(const struct __CFString **)arg1 part2:(const struct __CFString **)arg2;
- (void)createLastFirstSortingNamePart1:(const struct __CFString **)arg1 part2:(const struct __CFString **)arg2;
- (id)createAlternateName;
- (id)createFirstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (id)nts_AlternateName;
- (id)alternateName;
- (BOOL)nts__isLastNameFirst;
- (id)_fullPhoneticName;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)_fullName;
- (void)populateWithDictionary:(id)arg1 skipUnknownProperties:(BOOL)arg2 generateMultiValueIDs:(BOOL)arg3 recordIsNew:(BOOL)arg4;
- (void)resetWithDictionary:(id)arg1 skipUnknownProperties:(BOOL)arg2 generateMultiValueIDs:(BOOL)arg3;
- (id)imagePathOfKind:(id)arg1;
- (id)imageDirectory;
- (BOOL)hasCustomImageOfKind:(id)arg1;
- (BOOL)hasCustomImage;
- (void)nts_CascadeRemove;
- (id)stringForIndexing;
- (id)nts_StringForIndexing;
- (id)vCardRepresentation;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (id)initWithVCardRepresentation:(id)arg1 addressBook:(id)arg2;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)availableLabelsForProperty:(id)arg1;
- (id)uniquelyNamedLinkedPeople;
- (void)setImageFromMemento:(id)arg1;
- (id)imageMemento;
- (BOOL)isDataCachedForImageReference:(id)arg1;
- (id)imageReference;
- (id)imageReferences;
- (void)removeImageReference:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (id)clippingRectParametersForAllTypes;
- (id)clippingRectParametersForType:(id)arg1;
- (id)imageClippingRectTypesOfKind:(id)arg1;
- (id)largeImageClippingRectTypes;
- (BOOL)clearAllClippingRects;
- (BOOL)setHashOfData:(id)arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)setIdentifier:(id)arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)setClippingRect:(struct CGRect)arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)removeExtendedAttributesWithKeys:(id)arg1 fromFile:(id)arg2;
- (BOOL)setLargeImageClippingRect:(id)arg1;
- (id)largeImageHashOfType:(id)arg1;
- (id)largeImageClippingRectIDOfType:(id)arg1;
- (struct CGRect)largeImageClippingRectOfType:(id)arg1;
- (id)imageDataFromLargeImageByApplyingClippingRect:(struct CGRect)arg1;
- (id)imageDataFromLargeImageByApplyingClippingRectOfType:(id)arg1;
- (struct CGRect)imageClippingRectOfType:(id)arg1 imageKind:(id)arg2;
- (id)imageClippingRectsOfKind:(id)arg1;
- (BOOL)setLargeImageData:(id)arg1;
- (id)largeImageData;
- (id)largeImagePath;
- (long long)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)beginLoadingImageDataForClient:(id)arg1;
- (long long)_beginLoadingImageDataForClient:(id)arg1;
- (BOOL)setImageData:(id)arg1 kind:(id)arg2;
- (BOOL)setImageData:(id)arg1;
- (id)_jpegImageDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned long long)arg2 cropRectangles:(id *)arg3;
- (id)photoHelper;
- (id)imageDataOfKind:(id)arg1;
- (id)imageData;
- (id)_imageOfKind:(id)arg1;
- (id)_image;
- (BOOL)nts_SetImageData:(id)arg1 kind:(id)arg2;
- (BOOL)_saveImageDataToDisk:(id)arg1 kind:(id)arg2;
- (BOOL)_writeImageData:(id)arg1 toURL:(id)arg2;
- (void)_removeExistingImageAtURL:(id)arg1;
- (void)_makeSureImagesFolderExistsForImageWithURL:(id)arg1;
- (id)nts_pathForLocalImageOfKind:(id)arg1;
- (id)nts_pathForLocalImage;
- (id)_customImageData;
- (id)nts_CustomImageData;
- (id)pathForUIDTaggedImage;
- (id)nts_PathForUIDTaggedImage;
- (id)nts_PathForUIDTaggedImageOfKind:(id)arg1;
- (BOOL)abHasSimilarAddress:(id)arg1;
- (BOOL)_abAddress:(id)arg1 isSimilarToAddress:(id)arg2;
- (id)abUsedProperties;
- (id)relatedMatchesForIdentifier:(id)arg1;
- (id)relatedMatchesForName:(id)arg1 label:(id)arg2 givenLastName:(id)arg3;
- (void)setAllProperties:(id)arg1;
- (id)allPropertiesIncludingImage:(BOOL)arg1;
- (id)allProperties;
- (void)updateMultiValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3 replaceValues:(BOOL)arg4;
- (void)updateMultiValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;
- (id)mergedSimilarMultiValuesIn:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;
- (unsigned long long)indexOfLabel:(id)arg1 inMultiValue:(id)arg2 testValue:(CDUnknownBlockType)arg3;
- (void)updateSingleValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;
- (void)updateNote:(id)arg1 changes:(id)arg2;
- (void)mergeSingleValue:(id)arg1 forProperty:(id)arg2;
- (void)mergeMultiValue:(id)arg1 forProperty:(id)arg2;
- (void)mergeNote:(id)arg1;
- (BOOL)isEmptyPerson;
- (id)_vCardRepresentationAsString;
- (id)_vCardRepresentationAsStringIncludeNotes:(BOOL)arg1 includePhotos:(BOOL)arg2;
- (id)_vCardRepresentationAsStringWithOptions:(id)arg1;
- (id)_vCardRepresentationAsStringUsingPreferencesForOptions;
- (id)_21vCardRepresentationAsData;
- (id)encodedDataForValue:(id)arg1 charsetName:(id *)arg2;
- (BOOL)_takeGroupMembershipsFromPeople:(id)arg1;
- (BOOL)_takeGroupMembershipsFromPerson:(id)arg1;
- (BOOL)_matchAndMerge_MergePerson:(id)arg1;
- (BOOL)_isIgnoredPropertyForMerging:(id)arg1;
- (BOOL)_mergeProperty:(id)arg1 forPerson:(id)arg2;
- (BOOL)_propertyIsIdentical:(id)arg1 forPerson:(id)arg2;

@end

