//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKRasterMapTile : NSObject
{
    shared_ptr_edb96180 _bitmapData;
    struct VKTileKey _superTileKey;
    struct VKTileKey _finalTileKey;
    double _scale;
    struct CGImage *_image;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)_image;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (id)imageDataInFormat:(unsigned long long)arg1 compressionLevel:(double)arg2;
- (BOOL)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)tileForKey:(const struct VKRasterTileKey *)arg1;
- (void)foreachTileOfSize:(unsigned int)arg1 perform:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithBitmapData:(shared_ptr_edb96180)arg1 tileKey:(const struct VKTileKey *)arg2 scale:(double)arg3;
- (id)initWithBitmapData:(shared_ptr_edb96180)arg1 superKey:(const struct VKTileKey *)arg2 finalKey:(const struct VKTileKey *)arg3 scale:(double)arg4;
@property(readonly, nonatomic) struct VKRasterTileKey tileKey;

@end

