//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject
{
    NSDictionary *repairTuning;
    NSDictionary *sessionTuning;
}

+ (id)sessionParametersForTuning:(unsigned long long)arg1;
+ (id)repairParametersForTuning:(unsigned long long)arg1;
+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;
@property(retain, nonatomic) NSDictionary *sessionTuning; // @synthesize sessionTuning;
@property(retain, nonatomic) NSDictionary *repairTuning; // @synthesize repairTuning;
- (void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2;
- (void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2;
- (unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2;
- (void)dealloc;
- (id)initWithTuning:(unsigned long long)arg1;

@end

