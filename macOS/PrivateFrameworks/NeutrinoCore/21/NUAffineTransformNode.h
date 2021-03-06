//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUAffineTransformNode : NUTransformNode
{
    NUImageTransformAffine *_transform;
}

- (void).cxx_destruct;
- (id)_transformWithError:(out id *)arg1;
- (id)debugQuickLookObject;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)initWithAffineTransform:(id)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;

@end

