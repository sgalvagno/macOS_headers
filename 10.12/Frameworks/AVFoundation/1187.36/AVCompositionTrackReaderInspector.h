//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector
{
    struct OpaqueFigMutableComposition *_figMutableComposition;
}

- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(char *)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
@property(readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition *mutableComposition;
- (int)playabilityValidationResult;
- (BOOL)isPlayable;
- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

