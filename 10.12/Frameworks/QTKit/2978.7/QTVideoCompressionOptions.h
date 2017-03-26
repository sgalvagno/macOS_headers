//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTCompressionOptions.h>

@class NSDictionary, NSString;

@interface QTVideoCompressionOptions : QTCompressionOptions
{
    unsigned int _codecType;
    NSDictionary *_vtCompressionProperties;
    long long _sizeMode;
    long long _width;
    long long _height;
    NSString *_localizedCompressionOptionsSummary;
    NSDictionary *_preferredInputPixelBufferAttributes;
}

+ (id)compressionOptionsWithDescription:(id)arg1;
- (BOOL)isRecommendedOnCurrentHardware;
- (BOOL)isEqualToCompressionOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedCompressionOptionsSummary;
- (id)mediaType;
- (id)_preferredInputPixelBufferAttributes;
- (id)vtCompressionProperties;
- (struct CGSize)compressedSizeForOriginalSize:(struct CGSize)arg1;
- (long long)height;
- (long long)width;
- (long long)sizeMode;
- (unsigned int)codecType;
- (void)dealloc;
- (id)initWithCodecType:(unsigned int)arg1 sizeMode:(long long)arg2 width:(long long)arg3 height:(long long)arg4 vtCompressionProperties:(id)arg5;

@end

