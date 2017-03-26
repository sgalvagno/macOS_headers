//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRCAMLBezierData : NSObject
{
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
}

- (double)evaluate_inverseAtTime:(double)arg1;
- (double)evaluatAtTime:(double)arg1;
- (double)solve_y:(double)arg1 epsilon:(double)arg2;
- (double)solve_x:(double)arg1 epsilon:(double)arg2;
- (double)sample_y_derivative:(double)arg1;
- (double)sample_x_derivative:(double)arg1;
- (double)sample_y:(double)arg1;
- (double)sample_x:(double)arg1;
- (id)initWithTimingFunction:(id)arg1;
- (id)initWithControlPoints:(const double *)arg1;

@end

