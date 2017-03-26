//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/VCHardwareSettings.h>

#import <AVConference/VCHardwareSettingsMacProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol>
{
    BOOL _hiDefEncoding;
    int _hardwareScore;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _machineType;
    int _cpuFamily;
    NSString *_cpuType;
    NSString *_machineName;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property(readonly, nonatomic) BOOL isIMac;
@property(readonly, nonatomic) BOOL isMacPro;
@property(readonly, nonatomic) BOOL isMacBookWVGA;
@property(readonly, nonatomic) BOOL canDoHiDefDecoding;
@property(readonly, nonatomic) BOOL canDoHiDefEncoding;
- (BOOL)isGVAEncoderAvailable;
- (BOOL)isModel:(id)arg1;
- (BOOL)isMachineNewerThanSandybridge:(int)arg1;
- (id)getCPUTypeStringForMachineType:(int)arg1;
- (int)getCPUFamilyType;
- (void)dealloc;
- (id)init;

@end

