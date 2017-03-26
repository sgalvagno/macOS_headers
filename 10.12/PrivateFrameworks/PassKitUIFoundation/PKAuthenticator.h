//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAuthenticatorEvaluationContext;
@protocol OS_dispatch_queue, PKAuthenticatorDelegate;

@interface PKAuthenticator : NSObject
{
    unsigned long long _authenticationIdentifier;
    NSObject<OS_dispatch_queue> *_contextMutationQueue;
    PKAuthenticatorEvaluationContext *_context;
    id <PKAuthenticatorDelegate> _delegate;
    double _fingerPresentTimeout;
}

+ (id)viewServiceBundleID;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)preheatAuthenticator;
@property(nonatomic) double fingerPresentTimeout; // @synthesize fingerPresentTimeout=_fingerPresentTimeout;
@property(nonatomic) __weak id <PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (BOOL)_delegateSupportsPasscodePresentation;
@property(readonly, nonatomic) BOOL fingerPresentTimeoutExpired;
@property(readonly, nonatomic) BOOL fingerPresentTimeoutRequired;
@property(readonly, nonatomic) BOOL passcodeWasPresented;
@property(readonly, nonatomic) BOOL passphraseActive;
@property(readonly, nonatomic) BOOL passcodeActive;
@property(readonly, nonatomic) BOOL fingerPresent;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long authenticationIdentifier;
- (void)applyPaymentInstructions:(id)arg1;
- (void)applyDynamicFunctionRowScene:(long long)arg1;
- (void)accessExternalizedContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartEvaluation;
- (void)cancelEvaluation;
- (void)fallbackToSystemPasscodeUI;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)evaluatePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_contextMatchesContext:(id)arg1;
- (id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2;
- (id)_swapContext:(id)arg1;
- (void)_contextChanged;
- (id)_context;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

