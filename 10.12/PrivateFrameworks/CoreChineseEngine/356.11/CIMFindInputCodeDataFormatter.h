//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PrettyPinyin;

@interface CIMFindInputCodeDataFormatter : NSObject
{
    BOOL _simplifiedChinese;
    BOOL _zhuyinChabaiMode;
    unsigned long long _numberOfColumns;
    NSArray *_originalArray;
    NSMutableArray *_formattedData;
    PrettyPinyin *_pinyinFormatter;
}

@property(nonatomic) BOOL zhuyinChabaiMode; // @synthesize zhuyinChabaiMode=_zhuyinChabaiMode;
@property(retain, nonatomic) PrettyPinyin *pinyinFormatter; // @synthesize pinyinFormatter=_pinyinFormatter;
@property(retain, nonatomic) NSMutableArray *formattedData; // @synthesize formattedData=_formattedData;
@property(retain, nonatomic) NSArray *originalArray; // @synthesize originalArray=_originalArray;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic, getter=isSimplifiedChinese) BOOL simplifiedChinese; // @synthesize simplifiedChinese=_simplifiedChinese;
- (void).cxx_destruct;
- (double)heightOfRow:(unsigned long long)arg1;
- (id)stringForRow:(unsigned long long)arg1 column:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (void)setFormattedDictionaryForData:(id)arg1;
- (id)init;
- (id)_formatInWubiHua:(id)arg1;
- (id)_pinyinWithTones:(id)arg1;
- (id)_pinyinWithTone:(id)arg1;
- (id)_stringFromArray:(id)arg1 colorString:(BOOL)arg2;
- (void)_setHeightForRow:(id)arg1;

@end

