//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSMutableSet;

@interface IPMessageReceiver : NSObject
{
    NSMutableSet *_senders;
    id _target;
    CDUnknownFunctionPointerType _legacyReceiverProc;
    long long _disableCount;
}

- (void)notificationReceived:(id)arg1;
- (void)unlinkFromSenders;
- (void)unlinkFromSender:(id)arg1;
- (void)linkToSender:(id)arg1;
- (BOOL)isEnabled;
- (void)disable;
- (BOOL)enable;
- (void)_suspendListening;
- (void)_resumeListening;
- (id)initWithTarget:(id)arg1 legacyReceiverProc:(CDUnknownFunctionPointerType)arg2;
- (void)dealloc;

@end

