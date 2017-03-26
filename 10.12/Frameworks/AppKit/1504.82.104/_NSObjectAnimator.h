//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol NSAnimatablePropertyContainer;

__attribute__((visibility("hidden")))
@interface _NSObjectAnimator : NSProxy
{
    NSObject<NSAnimatablePropertyContainer> *_target;
}

+ (Class)_animatorClassForTargetClass:(Class)arg1;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)animator;
- (id)initWithTarget:(id)arg1;

@end

