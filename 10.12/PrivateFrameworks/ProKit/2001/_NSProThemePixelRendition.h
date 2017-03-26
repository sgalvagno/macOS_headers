//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProThemeRendition.h>

@class NSProRenditionMetrics, NSProRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface _NSProThemePixelRendition : NSProThemeRendition
{
    unsigned int nimages;
    struct CGImage *image[16];
    NSProRenditionMetrics *_renditionMetrics;
    NSProRenditionSliceInformation *_sliceInformation;
}

+ (id)_filteredPSIDataFromBasePSIData:(id)arg1;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)sliceInformation;
- (long long)themeScaleFactor;
- (id)metrics;
- (id)patternForSliceIndex:(long long)arg1;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_initWithPSIHeader:(const struct _psiheader *)arg1;
- (id)initWithPSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

