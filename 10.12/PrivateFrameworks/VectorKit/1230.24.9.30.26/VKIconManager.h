//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSLock, NSMapTable, NSString, VKResourceManager, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    _VKLocalIconAtlas *_localAtlas;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKResourceManager *_resourceManager;
    shared_ptr_dd2d1f5e _stylesheetVendor;
    NSMapTable *_atlases;
    NSLock *_atlasesLock;
    NSArray *_nonRegionalResourceNames;
    struct read_write_lock _nameToStyleManagerLock;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>>> _nameToStyleManager;
    BOOL _shouldCacheAtlases;
}

+ (id)sharedManager;
@property(readonly, nonatomic) BOOL shouldCacheAtlases; // @synthesize shouldCacheAtlases=_shouldCacheAtlases;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)iconForIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 size:(long long)arg3 contentScale:(double)arg4;
- (id)iconForTransitType:(unsigned int)arg1 size:(long long)arg2 contentScale:(double)arg3;
- (id)iconForTransitSystemID:(unsigned int)arg1 size:(long long)arg2 contentScale:(double)arg3;
- (long long)iconStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor *)newGlyphColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor *)newHaloColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor *)newFillColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (id)iconForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6 overrides:(struct QueryOverrides)arg7;
- (id)iconForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6;
- (id)iconForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6 transitMode:(BOOL)arg7 interactive:(BOOL)arg8;
- (id)_artworkForStyleAttributes:(id)arg1 iconStyleDescriptor:(struct VKIconStyleDescriptor)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6 transitMode:(BOOL)arg7 interactive:(BOOL)arg8;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6 transitMode:(BOOL)arg7;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(BOOL)arg6;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5;
- (BOOL)_getIconStyleDescriptorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 iconStyleDescriptor:(struct VKIconStyleDescriptor *)arg4 transitMode:(BOOL)arg5 interactive:(BOOL)arg6;
- (BOOL)_getIconStyleDescriptorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 iconStyleDescriptor:(struct VKIconStyleDescriptor *)arg4 transitMode:(BOOL)arg5;
- (BOOL)_getIconStyleDescriptorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 iconStyleDescriptor:(struct VKIconStyleDescriptor *)arg4;
- (id)imageForName:(id)arg1 contentScale:(double)arg2;
- (id)_allResourceNames;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_atlasForName:(id)arg1;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longAttributeValue:(unsigned long long)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 size:(long long)arg6 hasText:(_Bool)arg7;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(_Bool)arg6;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 allowSizeFallback:(BOOL)arg4 visitUntilMatch:(CDUnknownBlockType)arg5;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 visitUntilMatch:(CDUnknownBlockType)arg4;
- (id)_nonRegionalPacks;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)purge;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 stylesheetVendor:(shared_ptr_dd2d1f5e)arg3 shouldCacheAtlases:(BOOL)arg4;
- (id)initWithConfiguration:(id)arg1 shouldCacheAtlases:(BOOL)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

