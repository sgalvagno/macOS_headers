//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying>
{
    NSMutableDictionary *_itemsBySiriIDCache;
    NSMutableDictionary *_itemsByStringCache;
    BOOL _resetOnNextSync;
    BOOL _haveAssignedAllSiriIDs;
    NSString *_appBundleID;
    NSString *_intentSlot;
    NSString *_validity;
    NSString *_thisGeneration;
    NSArray *_vocabularyItems;
}

@property(nonatomic) BOOL haveAssignedAllSiriIDs; // @synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs;
@property(copy, nonatomic) NSArray *vocabularyItems; // @synthesize vocabularyItems=_vocabularyItems;
@property(copy, nonatomic) NSString *thisGeneration; // @synthesize thisGeneration=_thisGeneration;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *intentSlot; // @synthesize intentSlot=_intentSlot;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(nonatomic) BOOL resetOnNextSync; // @synthesize resetOnNextSync=_resetOnNextSync;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)writeToFile:(id)arg1 createIntermediateDirectories:(BOOL)arg2;
- (id)_initWithDictionary:(id)arg1;
- (void)_takeValuesFromDictionary:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_stringForSelector:(SEL)arg1 from:(id)arg2;
- (id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3;
- (void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2;
- (void)_clearVocabularyItemCaches;
- (id)diffFromPreviousDocument:(id)arg1;
- (void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1;
- (id)_vocabularyItemWithString:(id)arg1;
- (id)_vocabularyItemForSiriID:(id)arg1;
- (id)_everyVocabularyItemSiriID;
- (id)_itemsBySiriID;

@end

