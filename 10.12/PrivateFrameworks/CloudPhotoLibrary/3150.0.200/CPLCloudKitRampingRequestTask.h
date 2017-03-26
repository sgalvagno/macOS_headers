//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import <CloudPhotoLibrary/CPLEngineTransportRampingRequestTask-Protocol.h>

@class NSString;

@interface CPLCloudKitRampingRequestTask : CPLCloudKitTransportTask <CPLEngineTransportRampingRequestTask>
{
    unsigned long long _resourceType;
    unsigned long long _numRequested;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)run;
- (id)initWithResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

