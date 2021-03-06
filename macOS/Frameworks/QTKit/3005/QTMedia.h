//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTTrack;

@interface QTMedia : NSObject
{
    int _proxy;
    long long _flags;
    QTTrack *_track;
}

+ (id)mediaWithProxy:(int)arg1;
- (CDStruct_900afa40)movieTimeForTimeCode:(id)arg1;
- (id)currentTimeCode;
- (id)timeCodeAtTime:(CDStruct_900afa40)arg1;
- (BOOL)restrictedToPlaybackAPI;
- (void)setRestrictedToPlaybackAPI:(BOOL)arg1;
- (void)setPlayHints:(long long)arg1 hintsMask:(long long)arg2;
- (void)setTimeScale:(long long)arg1;
- (void)setQuality:(short)arg1;
- (void)setLanguage:(short)arg1;
- (short)language;
- (id)subType;
- (id)typeInMedia;
- (id)type;
- (long long)timeScale;
- (long long)playHints;
- (short)quality;
- (long long)sampleCount;
- (id)modificationTime;
- (CDStruct_900afa40)duration;
- (id)creationTime;
- (id)dataReferenceEnumerator;
- (id)dataReferences;
- (void)setDataReference:(id)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (id)dataReferenceAtIndex:(int)arg1;
- (int)dataReferenceCount;
- (int)proxy;
- (BOOL)hasCharacteristic:(id)arg1;
- (id)description;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)setMediaAttributes:(id)arg1;
- (id)mediaAttributes;
- (id)track;
- (void)invalidate;
- (void)dealloc;
- (void)finalize;
- (id)initWithProxy:(int)arg1;

@end

