//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ProPSDGradientEvaluator;

__attribute__((visibility("hidden")))
@interface ProPSDGradient : NSObject
{
    ProPSDGradientEvaluator *evaluator;
    double drawingAngle;
    unsigned int gradientStyle;
}

@property unsigned int gradientStyle; // @synthesize gradientStyle;
@property double drawingAngle; // @synthesize drawingAngle;
@property(retain) ProPSDGradientEvaluator *evaluator; // @synthesize evaluator;
- (void)dealloc;
- (id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned int)arg3;

@end

