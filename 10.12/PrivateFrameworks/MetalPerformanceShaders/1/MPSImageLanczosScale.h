//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@protocol MTLTexture;

@interface MPSImageLanczosScale : MPSUnaryImageKernel
{
    struct MPSScaleTransform _transformStorage;
    struct MPSScaleTransform *_scaleTransform;
    struct {
        id <MTLTexture> weights;
        double scale;
        double offset;
        unsigned int limit;
        unsigned int phaseCount;
        float phaseStride;
        float kernelTaps;
        unsigned int phaseMask;
        unsigned int kernelSize;
    } weights[2];
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) const struct MPSScaleTransform *scaleTransform; // @synthesize scaleTransform=_scaleTransform;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

