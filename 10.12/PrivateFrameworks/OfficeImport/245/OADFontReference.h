//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <NSCopying>
{
    int mIndex;
    OADColor *mColor;
}

- (id)description;
- (void)applyToParagraphProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setIndex:(int)arg1;
- (int)index;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

