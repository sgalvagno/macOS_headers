//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCImportFontCacheKey : NSObject
{
    int _size;
    NSString *_name;
}

+ (id)createFontCacheKeyForName:(id)arg1 size:(int)arg2;
@property(nonatomic) int size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

