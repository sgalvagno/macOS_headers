//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying>
{
    NSDictionary *_outputSettingsDictionary;
}

+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id *)arg2;
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)registeredOutputSettingsClasses;
@property(readonly, nonatomic) NSDictionary *outputSettingsDictionary; // @synthesize outputSettingsDictionary=_outputSettingsDictionary;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
@property(readonly, nonatomic) BOOL willYieldCompressedSamples;
@property(readonly, nonatomic) NSSet *compatibleMediaTypes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)init;

@end

