//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginMagicChart-Protocol.h"
#import "KNBuildCAAnimator-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface KNChartMultiDataBuild : KNAnimationEffect <KNBuildCAAnimator, KNAnimationPluginMagicChart>
{
    NSMutableArray *_layersToRestore;
    NSArray *_chartAnimatedLayers;
}

+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (id)localizedMenuString:(long long)arg1;
+ (BOOL)isMagicChart;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void).cxx_destruct;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;
- (id)animationInfoForAnimatedBuild:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

