//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface Measurement : NSObject
{
    struct vector<MeasurementRecord, std::__1::allocator<MeasurementRecord>> *currentMeasurements;
    struct vector<MeasurementRecord, std::__1::allocator<MeasurementRecord>> *finishedMeasurements;
}

+ (void)reportMeasurement:(id)arg1;
+ (void)endMeasurement:(unsigned int)arg1;
+ (void)beginMeasurement:(unsigned int)arg1;
+ (id)measurement;
- (void)reportMeasurement:(id)arg1;
- (void)endMeasurement:(unsigned int)arg1 time:(double)arg2;
- (void)beginMeasurement:(unsigned int)arg1 time:(double)arg2;
- (void)dealloc;
- (id)init;

@end

