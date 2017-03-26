//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetResourceDownloadRequest.h>

@class NSString, PFDispatchQueue;

@interface PHInMemoryDownloadAssetResourceRequest : PHAssetResourceDownloadRequest
{
    BOOL _completed;
    PFDispatchQueue *_queue;
    NSString *_taskIdentifier;
}

@property(retain, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) PFDispatchQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)cancel;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithAssetResource:(id)arg1 cloudResource:(id)arg2;

@end

