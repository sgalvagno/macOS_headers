//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ROCKit/ROCKFFICIFObject.h>

#import <ROCKit/ROCKInvocationInterface-Protocol.h>

@class NSMethodSignature, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ROCKFFIObject : ROCKFFICIFObject <ROCKInvocationInterface>
{
    unsigned char _invocationBuffer[128];
    BOOL _isBlockInvocation;
    BOOL _argumentsRetained;
    void **_argumentPointers;
    unsigned char *_argumentRetentionTypes;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    CDUnknownBlockType _returnHandler;
    CDUnknownBlockType _autoreleasingHandler;
}

+ (id)invocationWithMethodSignature:(id)arg1 argumentPointers:(void **)arg2;
+ (id)invocationWithMethodSignature:(id)arg1 invocationQueue:(id)arg2 returnHandler:(CDUnknownBlockType)arg3 autoreleasingHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType autoreleasingHandler; // @synthesize autoreleasingHandler=_autoreleasingHandler;
@property(copy, nonatomic) CDUnknownBlockType returnHandler; // @synthesize returnHandler=_returnHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue; // @synthesize invocationQueue=_invocationQueue;
@property(nonatomic) BOOL argumentsRetained; // @synthesize argumentsRetained=_argumentsRetained;
@property(nonatomic) unsigned char *argumentRetentionTypes; // @synthesize argumentRetentionTypes=_argumentRetentionTypes;
@property(nonatomic) void **argumentPointers; // @synthesize argumentPointers=_argumentPointers;
@property(nonatomic) BOOL isBlockInvocation; // @synthesize isBlockInvocation=_isBlockInvocation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)retainArguments;
- (void)invokeWithTarget:(id)arg1;
- (void)invoke;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void *)arg1;
- (void)getReturnValue:(void *)arg1;
@property(nonatomic) SEL selector;
@property(nonatomic) id target;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSMethodSignature *methodSignature;
@property(readonly) Class superclass;

@end

