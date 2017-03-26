//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRSpeechSynthesizerOptions : NSObject
{
    BOOL _outputToURL;
    BOOL _desiredVoicePitchBaseDefined;
    double _customizedNormalIntonation;
    double _customizedMaxIntonation;
    double _customizedMinIntonation;
    double _pitchMod;
    double _pitchDelta;
    double _desiredVoicePitchBase;
    double _volume;
    double _customizedNormalVolume;
    double _customizedMaxVolume;
    double _customizedMimVolume;
    double _customizedMinRate;
    double _customizedMaxRate;
    double _customizedNormalRate;
    double _rate;
}

@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) double customizedNormalRate; // @synthesize customizedNormalRate=_customizedNormalRate;
@property(nonatomic) double customizedMaxRate; // @synthesize customizedMaxRate=_customizedMaxRate;
@property(nonatomic) double customizedMinRate; // @synthesize customizedMinRate=_customizedMinRate;
@property(nonatomic) double customizedMimVolume; // @synthesize customizedMimVolume=_customizedMimVolume;
@property(nonatomic) double customizedMaxVolume; // @synthesize customizedMaxVolume=_customizedMaxVolume;
@property(nonatomic) double customizedNormalVolume; // @synthesize customizedNormalVolume=_customizedNormalVolume;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double desiredVoicePitchBase; // @synthesize desiredVoicePitchBase=_desiredVoicePitchBase;
@property(nonatomic) BOOL desiredVoicePitchBaseDefined; // @synthesize desiredVoicePitchBaseDefined=_desiredVoicePitchBaseDefined;
@property(nonatomic) double pitchDelta; // @synthesize pitchDelta=_pitchDelta;
@property(nonatomic) double pitchMod; // @synthesize pitchMod=_pitchMod;
@property(nonatomic) double customizedMinIntonation; // @synthesize customizedMinIntonation=_customizedMinIntonation;
@property(nonatomic) double customizedMaxIntonation; // @synthesize customizedMaxIntonation=_customizedMaxIntonation;
@property(nonatomic) double customizedNormalIntonation; // @synthesize customizedNormalIntonation=_customizedNormalIntonation;
@property(nonatomic) BOOL outputToURL; // @synthesize outputToURL=_outputToURL;
- (BOOL)isEqual:(id)arg1;

@end

