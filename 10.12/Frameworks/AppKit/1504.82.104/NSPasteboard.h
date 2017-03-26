//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface NSPasteboard : NSObject
{
    id _pboard;
    int _gen;
    id _owners;
    long long _cachedTypeNameChangeCount;
    id _cachedTypeNames;
    NSMutableDictionary *_promiseTypeNamesByIdentifier;
    id _support;
    id _pasteboardItems;
    void *_reserved[3];
}

+ (id)_propertyListForType:(id)arg1 fromData:(id)arg2;
+ (BOOL)_isValidPasteboardUTI:(id)arg1 logStringMessage:(id)arg2;
+ (id)_convertDataToString:(id)arg1;
+ (id)_convertStringToData:(id)arg1;
+ (id)_convertDataToPropertyList:(id)arg1;
+ (id)_convertPropertyListToData:(id)arg1;
+ (void)initialize;
+ (void)_provideAllPromisedData:(id)arg1;
+ (id)pasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)generalPasteboard;
+ (id)_pasteboardWithName:(id)arg1;
+ (id)_tmpPasteboardWithCFPasteboard:(struct __CFPasteboard *)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)_typeIdentifierIskUTTypeFileURL:(id)arg1;
+ (void)_resetUsesUTIsOnly;
+ (BOOL)_usesUTIsOnly;
+ (void)_setConversionFromData:(id)arg1 typeIdentifier:(id)arg2 inPasteboard:(struct __CFPasteboard *)arg3 generation:(long long)arg4 item:(void *)arg5;
+ (id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1 usesPboardTypes:(BOOL)arg2;
+ (id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1;
+ (id)_typesIncludingConversionsFromTypes:(id)arg1;
+ (struct __CFString *)_typeIdentifierForName:(id)arg1 securityScoped:(BOOL)arg2;
+ (struct __CFString *)_typeIdentifierForName:(id)arg1;
+ (id)_oldStyleTypeNameForIdentifier:(struct __CFString *)arg1;
+ (id)pasteboardByFilteringTypesInPasteboard:(id)arg1;
+ (id)pasteboardByFilteringData:(id)arg1 ofType:(id)arg2;
+ (id)pasteboardByFilteringFile:(id)arg1;
+ (id)typesFilterableTo:(id)arg1;
- (id)stringForType:(id)arg1;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (id)_propertyListForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)propertyListForType:(id)arg1;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (BOOL)setDataProvider:(id)arg1 forTypes:(id)arg2;
- (id)dataForType:(id)arg1;
- (id)_dataForType:(id)arg1 securityScoped:(BOOL)arg2;
- (BOOL)setData:(id)arg1 forType:(id)arg2;
- (id)availableTypeFromArray:(id)arg1;
@property(readonly, copy) NSArray *types;
- (long long)addTypes:(id)arg1 owner:(id)arg2;
- (long long)declareTypes:(id)arg1 owner:(id)arg2;
- (BOOL)canReadObjectForClasses:(id)arg1 options:(id)arg2;
- (BOOL)canReadItemWithDataConformingToTypes:(id)arg1;
- (id)_conformingTypeIdentifiers;
- (unsigned long long)indexOfPasteboardItem:(id)arg1;
@property(readonly, copy) NSArray *pasteboardItems;
- (id)readObjectsForClasses:(id)arg1 options:(id)arg2;
- (BOOL)_contentsOfURL:(id)arg1 conformToTypeIdentifiers:(id)arg2;
- (BOOL)writeObjects:(id)arg1;
- (long long)clearContents;
- (long long)prepareForNewContentsWithOptions:(unsigned long long)arg1;
- (id)_dataWithoutConversionForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_dataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3 combinesItems:(BOOL)arg4 securityScoped:(BOOL)arg5;
- (BOOL)_canRequestDataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3 combinesItems:(BOOL)arg4;
- (id)_combinedPasteboardDataForTypeIdentifier:(id)arg1;
- (BOOL)_attachSecurityScopeToURL:(id)arg1 index:(unsigned long long)arg2;
- (id)_dataWithoutConversionForTypeIdentifier:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_dataWithoutConversionForTypeIdentifier:(id)arg1 index:(unsigned long long)arg2 securityScoped:(BOOL)arg3;
- (id)_availableTypeFromArray:(id)arg1 inExistingTypes:(id)arg2;
- (id)_typesAtIndex:(unsigned long long)arg1 combinesItems:(BOOL)arg2;
- (id)_cachedTypeNameUnion;
- (void)_updateTypeCacheIfNeeded;
- (long long)_setOwner:(id)arg1 forTypes:(id)arg2 atIndex:(unsigned long long)arg3 selector:(SEL)arg4 usesPboardTypes:(BOOL)arg5;
- (BOOL)_setData:(id)arg1 forType:(id)arg2 index:(unsigned long long)arg3 usesPboardTypes:(BOOL)arg4;
- (id)_pasteboardItems;
- (id)_promiseTypeNameForIdentifier:(struct __CFString *)arg1;
@property(readonly) long long changeCount;
- (long long)_currentGeneration;
- (struct __CFPasteboard *)_cfPasteboard;
@property(readonly, copy) NSString *name;
- (oneway void)releaseGlobally;
- (void)_removeFromGlobalTable;
- (void)_clearOutstandingPromises;
- (void)dealloc;
- (void)_addConversionsFromTypeIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3;
- (id)_dataWithConversionForTypeIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 securityScoped:(BOOL)arg3;
- (id)_dataWithConversionForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_conformingTypes;
- (id)readFileWrapper;
- (id)readFileContentsType:(id)arg1 toFile:(id)arg2;
- (BOOL)attemptOverwrite:(id)arg1;
- (BOOL)writeFileWrapper:(id)arg1;
- (BOOL)writeFileContents:(id)arg1;

@end

