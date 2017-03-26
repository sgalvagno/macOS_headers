//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class PXNSPhotoKitImageProvider;

@interface _PXNSPhotoKitImageProviderOperation : NSOperation
{
    int _resourceRequestID;
    PXNSPhotoKitImageProvider *_imageProvider;
    struct CGSize _targetSize;
}

+ (struct CGSize)imageSizeForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3;
+ (struct CGRect)fillRectForAspectRatio:(double)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) int resourceRequestID; // @synthesize resourceRequestID=_resourceRequestID;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) __weak PXNSPhotoKitImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)_handleImageRequestFinishedWithResult:(id)arg1 info:(id)arg2;
- (void)main;
- (void)cancel;

@end

