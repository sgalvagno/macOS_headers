//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTInvocation : NSObject
{
    id mTarget;
    SEL mSelector;
}

- (void)perform:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (id)target;
- (id)description;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2;

@end

