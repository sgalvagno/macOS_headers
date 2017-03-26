//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PKPaymentHeroImageManifest;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject
{
    PKPaymentHeroImageManifest *_manifest;
    NSArray *_featuredNetworks;
    NSMutableArray *_currentNetworksDownloading;
    id <PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

+ (BOOL)_networkImageHasDownloadedWithError:(id)arg1;
+ (void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2;
+ (id)defaultPaymentCredentials;
@property(nonatomic) long long watchSize; // @synthesize watchSize=_watchSize;
@property(nonatomic) id <PKPaymentHeroImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_debugString;
- (void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3;
- (id)_builtInNetworksCardImageData;
- (struct CGSize)imageSizeForScreenSize:(struct CGSize)arg1;
- (id)primaryFeaturedNetwork;
- (void)downloadRemoteImageForNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)containsPaymentCredentialType:(long long)arg1;
- (id)featuredNetworksImageData;
- (void)beginDownloadingRemoteImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginDownloadingRemoteImages;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 webService:(id)arg3;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2;

@end

