//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriterInputPassDescription;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    BOOL _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    CDUnknownBlockType _callbackBlock;
}

- (BOOL)_hasStoppedResponding;
- (void)stopRespondingToPassDescriptions;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)respondToNewPassDescription:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

