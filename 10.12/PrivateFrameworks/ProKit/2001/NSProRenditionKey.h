//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProKit/NSCoding-Protocol.h>
#import <ProKit/NSCopying-Protocol.h>

@interface NSProRenditionKey : NSObject <NSCopying, NSCoding>
{
    struct _renditionkeytoken _stackKey[14];
    struct _renditionkeytoken *_key;
    unsigned short _highwaterKeyCount;
    void *reserved1;
    void *reserved2;
    void *reserved3;
}

+ (id)_placeHolderKey;
+ (void)initialize;
- (id)description;
- (long long)themeScaleFactor;
- (void)setThemeScaleFactor:(long long)arg1;
- (long long)themeLayer;
- (void)setThemeLayer:(long long)arg1;
- (long long)themeState;
- (void)setThemeState:(long long)arg1;
- (long long)themeDimension2;
- (void)setThemeDimension2:(long long)arg1;
- (long long)themeDimension1;
- (void)setThemeDimension1:(long long)arg1;
- (long long)themeTint;
- (void)setThemeTint:(long long)arg1;
- (long long)themeValue;
- (void)setThemeValue:(long long)arg1;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (long long)themeDirection;
- (void)setThemeDirection:(long long)arg1;
- (long long)themeSize;
- (void)setThemeSize:(long long)arg1;
- (long long)themePart;
- (void)setThemePart:(long long)arg1;
- (long long)themeElement;
- (void)setThemeElement:(long long)arg1;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeVariant:(long long)arg5 themeValue:(long long)arg6 themeTint:(long long)arg7 themeDimension1:(long long)arg8 themeDimension2:(long long)arg9 themeState:(long long)arg10 themeLayer:(long long)arg11 themeScaleFactor:(long long)arg12;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeVariant:(long long)arg5 themeValue:(long long)arg6 themeTint:(long long)arg7 themeDimension1:(long long)arg8 themeDimension2:(long long)arg9 themeState:(long long)arg10 themeLayer:(long long)arg11;
- (long long)themeLook;
- (void)setThemeLook:(long long)arg1;
- (const struct _renditionkeytoken *)keyList;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1;
- (id)init;
- (void)_expandKeyIfNecessaryForCount:(long long)arg1;
- (unsigned short)_systemTokenCount;

@end

