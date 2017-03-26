//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEAppProxyProvider;
@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;

@interface NEAppProxyProviderContainer : NSObject
{
    unsigned int _delegateInterfaceIndex;
    NEAppProxyProvider *_provider;
    id <NEAppProxyProviderContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector *_director;
    CDUnknownBlockType _stopCompletionHandler;
}

@property(copy) CDUnknownBlockType stopCompletionHandler; // @synthesize stopCompletionHandler=_stopCompletionHandler;
@property unsigned int delegateInterfaceIndex; // @synthesize delegateInterfaceIndex=_delegateInterfaceIndex;
@property struct _NEFlowDirector *director; // @synthesize director=_director;
@property(retain) NSObject<OS_dispatch_queue> *flowQueue; // @synthesize flowQueue=_flowQueue;
@property(retain) id <NEAppProxyProviderContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NEAppProxyProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 pid:(int)arg2 uuid:(unsigned char [16])arg3 signingIdentifier:(struct __CFString *)arg4;
- (void)flowDivertOpenControlSocket;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)stop;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setConfiguration:(id)arg1;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2;

@end

