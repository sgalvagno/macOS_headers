//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/NSCopying-Protocol.h>
#import <CoreSpectrum/NSSecureCoding-Protocol.h>
#import <CoreSpectrum/SPCObjectArchival-Protocol.h>

@class NSArray, NSString, SPCTablePageStore, SPCTableUserKeyStore;

@interface SPCTable : NSObject <SPCObjectArchival, NSCopying, NSSecureCoding>
{
    NSString *_name;
    unsigned long long _memoryOptions;
    NSArray *_tableSortDescriptors;
    SPCTablePageStore *_pageStore;
    SPCTableUserKeyStore *_pageKeys;
    SPCTableUserKeyStore *_rowKeys;
    SPCTableUserKeyStore *_columnKeys;
    unsigned long long _rowKeyMemoryStorage;
    unsigned long long _columnKeyMemoryStorage;
    unsigned long long _pageKeyMemoryStorage;
}

+ (unsigned long long)memoryStorageFromOptions:(unsigned long long)arg1 forDimension:(unsigned long long)arg2;
+ (unsigned long long)pointerFunctionOptionsForStorage:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)tableWithRowValues:(id)arg1 columnKeys:(id)arg2;
+ (id)tableFromTableDescriptor:(id)arg1;
@property(readonly, nonatomic) unsigned long long pageKeyMemoryStorage; // @synthesize pageKeyMemoryStorage=_pageKeyMemoryStorage;
@property(readonly, nonatomic) unsigned long long columnKeyMemoryStorage; // @synthesize columnKeyMemoryStorage=_columnKeyMemoryStorage;
@property(readonly, nonatomic) unsigned long long rowKeyMemoryStorage; // @synthesize rowKeyMemoryStorage=_rowKeyMemoryStorage;
@property(retain, nonatomic) SPCTableUserKeyStore *columnKeys; // @synthesize columnKeys=_columnKeys;
@property(retain, nonatomic) SPCTableUserKeyStore *rowKeys; // @synthesize rowKeys=_rowKeys;
@property(retain, nonatomic) SPCTableUserKeyStore *pageKeys; // @synthesize pageKeys=_pageKeys;
@property(retain, nonatomic) SPCTablePageStore *pageStore; // @synthesize pageStore=_pageStore;
@property(copy, nonatomic) NSArray *tableSortDescriptors; // @synthesize tableSortDescriptors=_tableSortDescriptors;
@property(readonly, nonatomic) unsigned long long memoryOptions; // @synthesize memoryOptions=_memoryOptions;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumeratePagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageForKey:(id)arg1;
- (id)pageAtIndex:(unsigned long long)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (id)rowForKey:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)indexOfPageForKey:(id)arg1;
- (unsigned long long)indexOfColumnForKey:(id)arg1;
- (unsigned long long)indexOfRowForKey:(id)arg1;
- (id)keyAtPageIndex:(unsigned long long)arg1;
- (id)keyAtColumnIndex:(unsigned long long)arg1;
- (id)keyAtRowIndex:(unsigned long long)arg1;
- (id)_keyAtIndex:(unsigned long long)arg1 fromKeyStore:(id)arg2;
- (void)setKey:(id)arg1 atPageIndex:(unsigned long long)arg2;
- (void)setKey:(id)arg1 atColumnIndex:(unsigned long long)arg2;
- (void)setKey:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)_setNewKey:(id)arg1 inKeyStore:(id)arg2 forIndex:(unsigned long long)arg3;
- (void)removePageForKey:(id)arg1;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)removeColumnForKey:(id)arg1;
- (void)removeRowForKey:(id)arg1;
- (void)removeColumnAtIndex:(unsigned long long)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)insertValues:(id)arg1 andColumnKey:(id)arg2 atColumnIndex:(unsigned long long)arg3 inPageWithKey:(id)arg4;
- (void)insertValues:(id)arg1 andColumnKey:(id)arg2 atColumnIndex:(unsigned long long)arg3 inPageAtIndex:(unsigned long long)arg4;
- (void)insertValues:(id)arg1 andRowKey:(id)arg2 atRowIndex:(unsigned long long)arg3 inPageWithKey:(id)arg4;
- (void)insertValues:(id)arg1 andRowKey:(id)arg2 atRowIndex:(unsigned long long)arg3 inPageAtIndex:(unsigned long long)arg4;
- (void)insertValues:(id)arg1 andColumnKey:(id)arg2 atColumnIndex:(unsigned long long)arg3;
- (void)insertValues:(id)arg1 andRowKey:(id)arg2 atRowIndex:(unsigned long long)arg3;
- (void)setValues:(id)arg1 forColumnKey:(id)arg2 pageKey:(id)arg3;
- (void)setValues:(id)arg1 atColumnIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (void)setValues:(id)arg1 forRowKey:(id)arg2 pageKey:(id)arg3;
- (void)setValues:(id)arg1 atRowIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (void)setValuesForAllPages:(id)arg1 forRowKey:(id)arg2 columnKey:(id)arg3;
- (void)setValuesForAllPages:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setValues:(id)arg1 forColumnKey:(id)arg2;
- (void)setValues:(id)arg1 atColumnIndex:(unsigned long long)arg2;
- (void)setValues:(id)arg1 forRowKey:(id)arg2;
- (void)setValues:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forRowKey:(id)arg2 columnKey:(id)arg3 pageKey:(id)arg4;
- (void)setObject:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 pageIndex:(unsigned long long)arg4;
- (void)setObject:(id)arg1 forRowKey:(id)arg2 columnKey:(id)arg3;
- (void)setObject:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (id)valuesInAllPagesForColumnKey:(id)arg1 rowKey:(id)arg2;
- (id)valuesInAllPagesAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)valuesInColumnForKey:(id)arg1 pageKey:(id)arg2;
- (id)valuesInColumnAtIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2;
- (id)valuesInColumnForKey:(id)arg1;
- (id)valuesInColumnAtIndex:(unsigned long long)arg1;
- (id)valuesInRowForKey:(id)arg1 pageKey:(id)arg2;
- (id)valuesInRowAtIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2;
- (id)valuesInRowForKey:(id)arg1;
- (id)valuesInRowAtIndex:(unsigned long long)arg1;
- (id)objectForRowKey:(id)arg1 columnKey:(id)arg2 pageKey:(id)arg3;
- (id)objectAtRowIndex:(unsigned long long)arg1 columnIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (id)objectForRowKey:(id)arg1 columnKey:(id)arg2;
- (id)objectAtRowIndex:(unsigned long long)arg1 columnIndex:(unsigned long long)arg2;
- (unsigned long long)pageCount;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) unsigned long long rowCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMemoryOptions:(unsigned long long)arg1;
- (id)init;
- (id)uniqueIdentifierForArchiving;

@end

