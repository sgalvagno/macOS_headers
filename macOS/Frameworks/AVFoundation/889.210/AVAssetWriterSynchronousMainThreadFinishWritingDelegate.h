//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate-Protocol.h>

@class NSString;

@interface AVAssetWriterSynchronousMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate>
{
}

- (BOOL)shouldHelperPrepareInputs;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

