//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption
{
    AVAssetWriterInput *_input;
    NSString *_mediaType;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    NSArray *_metadata;
    NSDictionary *_trackReferences;
    BOOL _displaysNonForcedSubtitles;
    BOOL _enabled;
}

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;
@property(readonly, nonatomic) BOOL displaysNonForcedSubtitles; // @synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles;
@property(readonly, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) AVAssetWriterInput *input; // @synthesize input=_input;
- (id)propertyList;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (BOOL)_isDesignatedDefault;
- (BOOL)isPlayable;
- (BOOL)_isAuxiliaryContent;
- (id)_taggedCharacteristics;
- (id)mediaSubTypes;
- (id)_ancillaryDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)initWithAssetWriterInput:(id)arg1;

@end

