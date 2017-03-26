//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NCDuetController : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    CDAttribute *_duetAttr;
    NSSet *_predictedValues;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)_schedule;
- (void)schedule;
- (void)occurredWithValue:(id)arg1;
- (void)stoppedWithValue:(id)arg1;
- (void)startedWithValue:(id)arg1;
- (void)_calendarDayChanged:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

