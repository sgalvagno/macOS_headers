//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriUIAppInfoRepository : NSObject
{
}

- (struct __CFDictionary *)_copyLsDictionaryOfAppAtIndex:(long long)arg1 inArray:(struct __CFArray *)arg2;
- (int)_pidWithLSDictionary:(struct __CFDictionary *)arg1;
- (id)_appInfoAtIndex:(long long)arg1 ofArray:(struct __CFArray *)arg2;
- (id)frontmostAppsThatAreNotSiri;

@end

