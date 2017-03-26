//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface AMActionMetadataStore : NSObject
{
    BOOL _cacheDataIsDirty;
    NSURL *_cacheFileURL;
    NSMutableDictionary *_actionMetadataByBundleIdentifier;
}

+ (id)actionMetadataCacheFileURL;
@property BOOL cacheDataIsDirty; // @synthesize cacheDataIsDirty=_cacheDataIsDirty;
@property(retain) NSMutableDictionary *actionMetadataByBundleIdentifier; // @synthesize actionMetadataByBundleIdentifier=_actionMetadataByBundleIdentifier;
@property(retain) NSURL *cacheFileURL; // @synthesize cacheFileURL=_cacheFileURL;
- (void)writeUpdatedStoreFileIfNeeded;
- (void)setValue:(id)arg1 forKey:(id)arg2 forActionWithBundleIdentifier:(id)arg3;
- (id)valueForKey:(id)arg1 forActionWithBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithCacheFileURL:(id)arg1;
- (void)_loadCacheFileData;
- (void)_removeDeadEntries;

@end

