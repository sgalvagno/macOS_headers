//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet;

@interface _PXGAssetImageCacheEntry : NSObject
{
    unsigned int _imageOrientation;
    NSMutableIndexSet *_requestIDs;
    id <PXDisplayAsset> _asset;
    struct CGImage *_image;
}

@property(nonatomic) unsigned int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSMutableIndexSet *requestIDs; // @synthesize requestIDs=_requestIDs;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

@end

