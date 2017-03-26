//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject
{
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (int)defaultItalic;
+ (int)defaultBold;
+ (id)defaultFontReference;
+ (id)defaultColor;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setItalic:(int)arg1;
- (int)italic;
- (void)setBold:(int)arg1;
- (int)bold;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setFontReference:(id)arg1;
- (id)fontReference;
- (void)dealloc;
- (id)init;

@end

