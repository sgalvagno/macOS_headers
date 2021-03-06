//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSError, NSSet, RBSAssertionIdentifier, RBSInheritanceChangeSet, RBSProcessExitContext, RBSProcessIdentifier;

@protocol RBSClientProtocol
- (oneway void)async_processDidExit:(RBSProcessIdentifier *)arg1 withContext:(RBSProcessExitContext *)arg2;
- (oneway void)async_observedProcessStatesDidChange:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)async_assertionsDidInvalidate:(NSSet *)arg1 withError:(NSError *)arg2;
- (oneway void)async_assertionWillInvalidate:(RBSAssertionIdentifier *)arg1;
- (oneway void)async_willExpireAssertionsSoon;
- (oneway void)async_didChangeInheritances:(RBSInheritanceChangeSet *)arg1 completion:(void (^)(void))arg2;
@end

