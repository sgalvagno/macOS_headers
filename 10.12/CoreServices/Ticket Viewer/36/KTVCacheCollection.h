//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface KTVCacheCollection : NSManagedObject
{
}

- (void)infoAboutCaches:(id)arg1;
- (void)deleteCaches:(id)arg1;
- (void)addCache;
- (void)syncAllCaches;

// Remaining properties
@property(retain, nonatomic) NSSet *caches; // @dynamic caches;

@end

