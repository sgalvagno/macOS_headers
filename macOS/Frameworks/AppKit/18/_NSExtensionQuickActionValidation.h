//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSQuickActionValidation.h"

@class NSSet, NSString, _NSExtensionQuickActionInvocation;

__attribute__((visibility("hidden")))
@interface _NSExtensionQuickActionValidation : NSObject <_NSQuickActionValidation>
{
    _NSExtensionQuickActionInvocation *_invocation;
    NSSet *_unvalidatedQuickActions;
    void *_observationInfo;
}

+ (BOOL)automaticallyNotifiesObserversOfValidQuickActions;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)validationForItemSource:(id)arg1 quickActions:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, copy) NSSet *validQuickActions;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
@property(readonly) BOOL wantsAutovalidation;
- (id)initForItemSource:(id)arg1 quickActions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

