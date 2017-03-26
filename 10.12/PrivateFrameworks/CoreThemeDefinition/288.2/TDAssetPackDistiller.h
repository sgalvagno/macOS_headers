//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDDistiller.h>

@class NSSet;

@interface TDAssetPackDistiller : TDDistiller
{
    NSSet *assetPackMap;
}

@property(retain, nonatomic) NSSet *assetPackMap; // @synthesize assetPackMap;
- (BOOL)assetStoreWriteToDisk;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)_storeRenditions;
- (id)assetPackForTags:(id)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 usingAssetPackMapping:(id)arg4 attemptIncremental:(BOOL)arg5;

@end

