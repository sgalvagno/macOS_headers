//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying>
{
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)setPitch:(int)arg1;
- (int)pitch;
- (void)setCharacterSet:(int)arg1;
- (int)characterSet;
- (void)setFontFamily:(int)arg1;
- (int)fontFamily;
- (id)secondName;
- (void)addAlternateName:(id)arg1;
- (id)alternateNames;
- (void)setName:(id)arg1;
- (id)name;

@end

