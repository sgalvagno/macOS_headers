//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConsoleKit/NSCopying-Protocol.h>

@class NSArray;

@interface CSKStreamDataBatch : NSObject <NSCopying>
{
    NSArray *_entities;
}

@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataBatch:(id)arg1;
- (id)filteredEntitiesUsingFilters:(id)arg1;
- (void)appendEntitiesFromBatch:(id)arg1 filteredUsingFilters:(id)arg2;
- (void)appendEntitiesFromBatch:(id)arg1;
- (id)init;

@end

