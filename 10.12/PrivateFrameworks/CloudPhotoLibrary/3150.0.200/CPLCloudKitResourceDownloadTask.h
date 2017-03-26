//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import <CloudPhotoLibrary/CPLEngineTransportResourceDownloadTask-Protocol.h>

@class CPLResource, NSString;

@interface CPLCloudKitResourceDownloadTask : CPLCloudKitTransportTask <CPLEngineTransportResourceDownloadTask>
{
    BOOL highPriority;
    CPLResource *_resource;
    NSString *_clientBundleID;
    unsigned long long _retryCount;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
@property(nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority;
- (void).cxx_destruct;
- (void)run;
- (id)initWithResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

