//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSProgressIndicator, NSStackView;

@interface AACManagementAudioUnitInfoViewController : NSViewController
{
    NSStackView *_audioUnitNameStack;
    NSProgressIndicator *_audioUnitNameProgress;
    NSStackView *_samplingRateStack;
    NSProgressIndicator *_samplingRateProgress;
}

@property(nonatomic) __weak NSProgressIndicator *samplingRateProgress; // @synthesize samplingRateProgress=_samplingRateProgress;
@property(nonatomic) __weak NSStackView *samplingRateStack; // @synthesize samplingRateStack=_samplingRateStack;
@property(nonatomic) __weak NSProgressIndicator *audioUnitNameProgress; // @synthesize audioUnitNameProgress=_audioUnitNameProgress;
@property(nonatomic) __weak NSStackView *audioUnitNameStack; // @synthesize audioUnitNameStack=_audioUnitNameStack;
- (void).cxx_destruct;
- (void)changeSamplingRate:(id)arg1;
- (void)changeAudioUnitName:(id)arg1;
- (void)viewDidLoad;

@end

