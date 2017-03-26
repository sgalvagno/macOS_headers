//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXEditorialLayoutMetrics, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator : PXLayoutGenerator
{
    BOOL _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    struct CGSize _actualSize;
    struct CGRect *_rectBuffer;
    unsigned long long _rectBufferCount;
}

- (void).cxx_destruct;
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (void)_prepareIfNeeded;
- (void)_prepareRectBufferForCount:(unsigned long long)arg1;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) PXEditorialLayoutMetrics *metrics; // @dynamic metrics;

@end

