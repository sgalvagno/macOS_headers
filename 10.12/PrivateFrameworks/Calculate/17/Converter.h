//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface Converter : NSObject
{
    NSString *_inputString;
    NSString *_inputUnit;
    NSString *_outputUnit;
    NSNumber *_outputValue;
    NSNumber *_inputValue;
    NSString *_localizedInputValueAndUnit;
    NSString *_localizedOutputValueAndUnit;
    NSString *_localizedOutputValue;
    NSString *_localizedOutputUnit;
    BOOL _isCurrency;
    float _currencyUpdateTimeOut;
    NSArray *_additionalResults;
    NSString *_conversionType;
}

+ (BOOL)refreshCurrencyCache;
+ (id)currencyCacheLastRefreshDate;
@property(retain, nonatomic) NSString *localizedOutputValueAndUnit; // @synthesize localizedOutputValueAndUnit=_localizedOutputValueAndUnit;
@property(retain, nonatomic) NSString *conversionType; // @synthesize conversionType=_conversionType;
@property(retain, nonatomic) NSArray *additionalResults; // @synthesize additionalResults=_additionalResults;
@property float currencyUpdateTimeOut; // @synthesize currencyUpdateTimeOut=_currencyUpdateTimeOut;
@property(readonly) BOOL isCurrency; // @synthesize isCurrency=_isCurrency;
@property(retain, nonatomic) NSString *localizedOutputUnit; // @synthesize localizedOutputUnit=_localizedOutputUnit;
@property(retain, nonatomic) NSString *localizedOutputValue; // @synthesize localizedOutputValue=_localizedOutputValue;
@property(retain, nonatomic) NSString *localizedInputValueAndUnit; // @synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit;
@property(retain, nonatomic) NSNumber *outputValue; // @synthesize outputValue=_outputValue;
@property(retain, nonatomic) NSString *outputUnit; // @synthesize outputUnit=_outputUnit;
@property(retain, nonatomic) NSNumber *inputValue; // @synthesize inputValue=_inputValue;
@property(retain, nonatomic) NSString *inputUnit; // @synthesize inputUnit=_inputUnit;
@property(retain, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2;
- (double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1;
- (id)_operateConversionForOutputUnit:(id)arg1;
- (void)_performUnitPluralization;
- (id)similarUnitsForNormalizedName:(id)arg1;
- (id)_unitInfoForNormalizedName:(id)arg1;
- (void)_standardizeInputAndOutputUnits;
- (id)_normalizedUnitNamesForName:(id)arg1;
- (id)_unitsInfo;
- (void)_updateInputValueFromMatch:(id)arg1;
- (BOOL)_parseInputQuery;
- (void)processConversionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithInput:(id)arg1;

@end

