//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MEAudioSupport : NSObject
{
}

+ (id)_makeAVAudioMixForComposition:(id)arg1 withDuration:(double)arg2 andFadeOutDuration:(double)arg3 fadingInfos:(id)arg4 duckingInfos:(id)arg5;
+ (id)_insertAudioTracksFromAsset:(id)arg1 toComposition:(id)arg2 atTime:(double)arg3 withSongStartTime:(double)arg4 songDuration:(double)arg5;
+ (void)_addAudioPlaylistsFromPlug:(id)arg1 toComposition:(id)arg2 atTime:(double)arg3 forTotalDuration:(double)arg4 withID:(id)arg5 forExport:(BOOL)arg6 fadingTimVols:(id)arg7 duckingTimVols:(id)arg8 assetManagementDelegate:(id)arg9;
+ (BOOL)_getShowTime:(double *)arg1 andShowDuration:(double *)arg2 forPlug:(id)arg3 andSlideIndex:(unsigned long long)arg4;
+ (id)compositionForExportForStartTime:(double)arg1 andDuration:(double)arg2 withDocument:(id)arg3 forExport:(BOOL)arg4 audioMix:(id *)arg5;

@end

