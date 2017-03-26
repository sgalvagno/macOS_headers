//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioAmplitudeExtractionSessionHelper, AVAudioExtractor;

__attribute__((visibility("hidden")))
@interface AVAudioAmplitudeExtractionSession : NSObject
{
    AVAudioAmplitudeExtractionSessionHelper *_helper;
}

+ (unsigned long long)numberOfAmplitudeSamplesPerSecondForPixelDisplayOfMediaWithDuration:(CDStruct_1b6d18a9)arg1;
- (void).cxx_destruct;
- (float)maximumExtractedAmplitude;
- (id)amplitudeSamplesInRange:(struct _NSRange)arg1;
- (BOOL)isExtractionFinished;
- (id)availableAmplitudeSampleIndexes;
@property(readonly, nonatomic) unsigned long long numberOfAmplitudeSamplesPerSecond;
@property(readonly, nonatomic) AVAudioExtractor *uncompressedAudioExtractor;
- (void)dealloc;
- (id)init;
- (id)initWithUncompressedAudioExtractor:(id)arg1 numberOfAmplitudeSamplesPerSecond:(unsigned long long)arg2;

@end

