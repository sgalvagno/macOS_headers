//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject
{
    struct SoundDec_t *encoder;
    int payload;
    unsigned int _codecSamplesPerFrame;
    unsigned int blockSize;
    unsigned int _codecSampleRate;
    unsigned int _inputSampleRate;
    double _srcRatio;
    unsigned int ttyBlockSize;
    unsigned int encodedBytesPerFrame;
    unsigned int bundleHeaderBytes;
    unsigned int bitrate;
    NSArray *supportedBitrates;
    BOOL canBundle;
    BOOL canSetBitrate;
    BOOL forcingBitrate;
    BOOL useSBR;
    BOOL shouldReset;
    BOOL shouldLimitMaxPacketSize;
    BOOL dtxEnabled;
    BOOL payloadOctetAligned;
    int format;
    unsigned int internalBundleFactor;
}

+ (unsigned int)blockSizeForPayload:(int)arg1;
+ (BOOL)isPayloadSupported:(int)arg1;
@property(nonatomic) BOOL payloadOctetAligned; // @synthesize payloadOctetAligned;
@property(nonatomic) BOOL dtxEnabled; // @synthesize dtxEnabled;
@property(nonatomic) BOOL useSBR; // @synthesize useSBR;
@property(readonly, nonatomic) BOOL canBundle; // @synthesize canBundle;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate;
@property(readonly, nonatomic) NSArray *supportedBitrates; // @synthesize supportedBitrates;
@property(readonly, nonatomic) unsigned int bundleHeaderBytes; // @synthesize bundleHeaderBytes;
@property(readonly, nonatomic) unsigned int encodedBytesPerFrame; // @synthesize encodedBytesPerFrame;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_codecSampleRate;
@property(readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize;
@property(readonly, nonatomic) int payload; // @synthesize payload;
@property(readonly, nonatomic) BOOL useCookie;
- (unsigned int)flags;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;
- (float)qualityForBitRate:(unsigned int)arg1;
- (BOOL)setBitrate:(unsigned int)arg1;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;
- (void)resetEncoder;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;
- (BOOL)createEncoderWithInputFormat:(struct AudioStreamBasicDescription *)arg1;
- (void)setInternalBundleSamples:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int samplesPerFrame;
- (void)setInputSampleRate:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned int)arg2;
- (BOOL)setupEncodeProperties;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForOpus;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitrates;
- (BOOL)setupInputProperties;
- (unsigned int)aacBitrate;
- (BOOL)isDtxEmptyPacket:(unsigned int)arg1;

@end

