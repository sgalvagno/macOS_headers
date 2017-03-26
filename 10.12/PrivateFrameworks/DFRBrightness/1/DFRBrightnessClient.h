//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface DFRBrightnessClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidClient;
    struct __IOHIDServiceClient *_DFRService;
    NSObject<OS_os_log> *_logHandle;
    NSMutableDictionary *_propertyCache;
    NSObject<OS_dispatch_queue> *_scheduledQueue;
    CDUnknownBlockType _clientCallbackBlock;
    CDUnknownBlockType _displayStateNotificationHandler;
    int _displayStateNotificationToken;
    long long _displayState;
}

- (id)copyPropertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)unregisterDisplayStateUpdateCallback;
- (_Bool)registerDisplayStateUpdateCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)unscheduleWithDispatchQueue:(id)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)flushPropertyCache;
- (_Bool)addDFRService:(struct __IOHIDServiceClient *)arg1;
- (_Bool)initializeHID;
- (_Bool)setServiceProperty:(id)arg1 forKey:(id)arg2;
- (_Bool)updateState:(int)arg1 withPeriod:(float)arg2;
- (_Bool)_dimToStep:(id)arg1 withPeriod:(id)arg2 andCoefficient:(id)arg3;
- (_Bool)setBurninCounterValue:(unsigned long long)arg1;
- (_Bool)getBurninCounterValue:(unsigned long long *)arg1;
- (int)getDimmingStep;
- (_Bool)dimToStep:(int)arg1;
- (_Bool)dimToStep:(int)arg1 withCoefficient:(float)arg2;
- (_Bool)dimToStep:(int)arg1 withPeriod:(float)arg2;
- (_Bool)dimToStep:(int)arg1 withPeriod:(float)arg2 andCoefficient:(float)arg3;
@property(readonly) long long displayState; // @synthesize displayState=_displayState;
- (_Bool)turnOffWithPeriod:(float)arg1;
- (_Bool)turnOnWithPeriod:(float)arg1;
- (_Bool)turnOff;
- (_Bool)turnOn;
- (void)dealloc;
- (id)init;

@end

