//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SpeechObjects/SOVoiceObject.h>

@class NSString;

@interface DownloadableVoice : SOVoiceObject
{
    unsigned long long _byteSize;
    NSString *_variant;
    NSString *_version;
    NSString *_tagName;
    NSString *_voiceIdentifierToMarkAsPurgeableAfterInstall;
    NSString *_compactSizeBundleIdentifier;
    unsigned long long _compactSizeByteSize;
    NSString *_compactSizeTagName;
    NSString *_compactSizeVersion;
    BOOL _downloadCompactSize;
}

@property BOOL downloadCompactSize; // @synthesize downloadCompactSize=_downloadCompactSize;
@property(readonly) NSString *compactSizeVersion; // @synthesize compactSizeVersion=_compactSizeVersion;
@property(readonly) NSString *compactSizeTagName; // @synthesize compactSizeTagName=_compactSizeTagName;
@property(readonly) unsigned long long compactSizeByteSize; // @synthesize compactSizeByteSize=_compactSizeByteSize;
@property(readonly) NSString *compactSizeBundleIdentifier; // @synthesize compactSizeBundleIdentifier=_compactSizeBundleIdentifier;
@property(readonly) NSString *voiceIdentifierToMarkAsPurgeableAfterInstall; // @synthesize voiceIdentifierToMarkAsPurgeableAfterInstall=_voiceIdentifierToMarkAsPurgeableAfterInstall;
@property(readonly, retain) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, retain) NSString *version; // @synthesize version=_version;
@property(readonly, retain) NSString *variant; // @synthesize variant=_variant;
@property(readonly) unsigned long long byteSize; // @synthesize byteSize=_byteSize;
- (id)displayedSize;
- (void)dealloc;
- (id)initWithVoiceID:(id)arg1 properties:(id)arg2;

@end

