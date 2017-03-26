//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PHAssetResource, RDCloudResource;

@interface PHAssetResourceDownloadRequest : NSObject
{
    BOOL _localOnly;
    BOOL _cancelled;
    NSData *_data;
    CDUnknownBlockType _progressHandler;
    PHAssetResource *_assetResource;
    RDCloudResource *_cloudResource;
}

+ (id)inMemoryDownloadRequestForAssetResource:(id)arg1 cloudResource:(id)arg2;
+ (id)localOnlyDownloadRequest;
@property(readonly, nonatomic) RDCloudResource *cloudResource; // @synthesize cloudResource=_cloudResource;
@property(readonly, nonatomic) PHAssetResource *assetResource; // @synthesize assetResource=_assetResource;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL localOnly; // @synthesize localOnly=_localOnly;
- (void).cxx_destruct;
- (void)cancel;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithAssetResource:(id)arg1 cloudResource:(id)arg2;

@end

