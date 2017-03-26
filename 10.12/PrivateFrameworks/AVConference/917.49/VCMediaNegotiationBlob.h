//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobVideoSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable <NSCopying>
{
    VCMediaNegotiationBlobAudioSettings *_audioSettings;
    NSMutableArray *_bandwidthSettings;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;
    VCMediaNegotiationBlobVideoSettings *_screenSettings;
    NSString *_userAgent;
    VCMediaNegotiationBlobVideoSettings *_videoSettings;
    BOOL _allowDynamicMaxBitrate;
    BOOL _allowsContentsChangeWithAspectPreservation;
    struct {
        unsigned int basebandCodecSampleRate:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;
}

+ (Class)bandwidthSettingsType;
@property(retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // @synthesize captionsSettings=_captionsSettings;
@property(retain, nonatomic) NSMutableArray *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // @synthesize screenSettings=_screenSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL allowDynamicMaxBitrate; // @synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCaptionsSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bandwidthSettingsCount;
- (void)addBandwidthSettings:(id)arg1;
- (void)clearBandwidthSettings;
@property(nonatomic) BOOL hasBasebandCodecSampleRate;
@property(readonly, nonatomic) BOOL hasBasebandCodec;
@property(readonly, nonatomic) BOOL hasUserAgent;
@property(readonly, nonatomic) BOOL hasScreenSettings;
@property(readonly, nonatomic) BOOL hasVideoSettings;
@property(readonly, nonatomic) BOOL hasAudioSettings;
@property(nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL hasAllowDynamicMaxBitrate;
- (void)dealloc;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2;
- (void)printCaptionsSettings;
- (void)printBandwidthSettings;

@end

