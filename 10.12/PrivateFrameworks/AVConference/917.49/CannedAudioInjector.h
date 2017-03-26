//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CannedAudioInjector : NSObject
{
    NSString *_cannedMoviePath;
    NSMutableData *_samples;
    int _position;
    BOOL _fromBeginning;
    struct _opaque_pthread_mutex_t _samplesMutex;
    struct _opaque_pthread_cond_t _samplesConditional;
    struct AudioStreamBasicDescription _internalFormat;
}

+ (BOOL)isAudioAvailable:(id)arg1;
@property(nonatomic) BOOL fromBeginning; // @synthesize fromBeginning=_fromBeginning;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableData *samples; // @synthesize samples=_samples;
@property(retain, nonatomic) NSString *cannedMoviePath; // @synthesize cannedMoviePath=_cannedMoviePath;
- (int)readRawAudioSamples;
- (int)decodeAudio;
- (void)injectToBuffer:(char *)arg1 size:(int)arg2 time:(double)arg3 muted:(BOOL)arg4;
- (void)dealloc;
- (id)initWithPath:(id)arg1 withDescription:(struct AudioStreamBasicDescription)arg2 fromBeginning:(BOOL)arg3;

@end

