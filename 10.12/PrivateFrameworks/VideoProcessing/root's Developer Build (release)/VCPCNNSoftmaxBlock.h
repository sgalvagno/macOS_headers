//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNSoftmaxBlock : VCPCNNBlock
{
    int _numClasses;
    float *_weight;
    float *_bias;
}

- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithParameters:(int)arg1;

@end

