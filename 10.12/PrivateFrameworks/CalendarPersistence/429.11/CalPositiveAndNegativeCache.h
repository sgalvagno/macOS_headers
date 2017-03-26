//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalPositiveAndNegativeCache : NSObject
{
    NSMutableDictionary *_backingDictionary;
}

@property(retain) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
- (void)dealloc;
- (void)markKeysMissingFromCacheAsNegativeForKeys:(id)arg1;
- (void)markCacheNegativeForKey:(id)arg1;
- (BOOL)cacheWasNegativeForKey:(id)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

