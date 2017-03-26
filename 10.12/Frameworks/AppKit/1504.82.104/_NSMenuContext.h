//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSError, NSMutableArray, NSSet, NSString;

@interface _NSMenuContext : NSObject
{
    id _requestor;
    NSArray *_sendTypes;
    NSMutableArray *_requestorInfos;
    NSArray *_fileURLsToCheck;
    NSSet *_preloadedUTIsOfFileURLsToCheck;
    NSError *_errorLoadingUTIs;
    NSString *_stringToCheck;
    struct _NSRange _rangeOfStringToCheck;
    NSAttributedString *_attrStringToCheck;
    struct _NSRange _rangeOfAttrStringToCheck;
    NSArray *_carbonCopyUTIs;
    NSArray *_carbonPasteUTIs;
    unsigned long long _duplicateServicesMask;
    unsigned long long _source;
    struct {
        unsigned int isForContextMenu:1;
        unsigned int checkedForString:1;
        unsigned int checkedForAttrString:1;
        unsigned int checkedForURLs:1;
        unsigned int checkedForWhitespace:1;
        unsigned int isAllWhitespace:1;
        unsigned int reserved:26;
    } _flags;
}

@property(nonatomic) unsigned long long duplicateServicesMask; // @synthesize duplicateServicesMask=_duplicateServicesMask;
- (void)dealloc;
- (BOOL)qualifyEntries:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_concurrentPortionOfQualifyEntriesWithEntriesNeedingURLTypechecking:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_preconcurrentPortionOfQualifyEntries:(id)arg1 returningEntriesNeedingURLTypecheckingIntoSet:(id)arg2;
- (id)utisForURLs:(id)arg1 error:(id *)arg2;
- (void)filterEntriesWithCarbonPasteboardTypesBySupportedSendAndReceiveTypes:(id)arg1 returningSendTypesIntoArray:(id)arg2;
- (BOOL)serviceEntryTypesConformToCarbonPasteboardTypes:(id)arg1;
- (void)filterEntriesByUnmatchedFileTypes:(id)arg1 entriesNeedingURLTypechecking:(id)arg2;
- (void)filterEntriesWithRequestorBySupportedSendAndReceiveTypes:(id)arg1 returningSendTypesIntoArray:(id)arg2 returningEntriesNeedingURLTypecheckingIntoSet:(id)arg3;
- (id)infoForRequestor:(id)arg1;
- (void)filterEntriesByRemovingItemsWithNoSendOrReceiveTypes:(id)arg1;
- (void)filterEntriesByRemovingItemsThatDoNotUseSelection:(id)arg1;
- (void)filterEntriesByRemovingItemsThatUseSelectionIfItIsWhitespace:(id)arg1;
- (void)filterEntriesByDuplicates:(id)arg1;
- (void)filterEntriesByTheirFilters:(id)arg1;
- (void)moveQualifiedEntries:(id)arg1 approvedEntries:(id)arg2 havingRunFilters:(unsigned long long)arg3;
- (void)reportNoTextForTrackingFiltersThatRequireText:(id)arg1;
- (void)filterEntriesByAvailableInputSources:(id)arg1;
- (void)filterEntriesByLinkDetection:(id)arg1;
- (void)filterEntriesByDataDetectors:(id)arg1;
- (void)filterEntriesByScript:(id)arg1;
- (void)filterEntriesByTextTransformations:(id)arg1;
- (void)filterEntriesByLanguage:(id)arg1;
- (void)filterEntriesByRadar:(id)arg1;
- (void)filterEntriesByFilePath:(id)arg1;
- (void)filterEntriesByWidthForm:(id)arg1;
- (void)filterEntriesByWordLimit:(id)arg1;
- (void)filterEntriesByCharacterLimit:(id)arg1;
- (void)filterEntriesByFileType:(id)arg1;
- (void)filterEntriesByMenuLocation:(id)arg1;
- (void)filterEntriesByBundleID:(id)arg1;
- (BOOL)_stringContainsFilePath:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)_selectionExistsAndIsAllWhitespace;
- (BOOL)_sendTypesContainsTextTypeAppropriateForFiltering;
- (id)_selectedURLsForApplyingFilters;
- (id)_selectedStringAndRangeForApplyingFilters:(struct _NSRange *)arg1 attributed:(BOOL)arg2;
- (BOOL)determineSelectedStringForApplyingFiltersViaPasteboardFromRequestorSupplyingType:(id)arg1 attributed:(BOOL)arg2;
- (BOOL)determineSelectedStringForApplyingFiltersDirectlyFromRequestorSupplyingType:(id)arg1 attributed:(BOOL)arg2;
- (id)getObjectsOfClass:(Class)arg1 fromRequestorProvidingType:(id)arg2;
- (BOOL)serviceEntryIsActiveInThisContext:(id)arg1;
- (id)requestorProvidingType:(id)arg1;
@property(nonatomic) BOOL isForContextMenu;
- (id)initForCarbonServicesMenuWithCopyUTIs:(id)arg1 pasteUTIs:(id)arg2;
- (id)initForServicesMenuWithRequestorChain:(id)arg1;

@end

