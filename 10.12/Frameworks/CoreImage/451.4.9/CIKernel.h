//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CIKernel : NSObject
{
    void *_priv;
}

+ (id)colorMatrixBiasKernel;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)modifiedKernelStringForFosl:(id)arg1;
+ (id)betterString:(id)arg1;
+ (id)hashForString:(id)arg1;
- (id)parameters;
- (SEL)ROISelector;
- (void)setROISelector:(SEL)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel *)arg2;
- (BOOL)_isValidOutputPixelFormat:(int)arg1;
@property(readonly) NSString *name;
- (id)_initWithDict:(id)arg1;
- (id)initWithString:(id)arg1;
- (int)_outputPixelFormatFromExplicitAttributes:(id)arg1;
- (id)_initWithFirstKernelFromString:(id)arg1 withCruftCompatibility:(_Bool)arg2;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end

