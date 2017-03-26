//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject
{
    AVWeakReference *_weakReferenceToListener;
    CDUnknownFunctionPointerType _callback;
    void *_callbackContextToken;
}

@property(nonatomic) void *callbackContextToken; // @synthesize callbackContextToken=_callbackContextToken;
@property(readonly, nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id listener;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (id)init;

@end

