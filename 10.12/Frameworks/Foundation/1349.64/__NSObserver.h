//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject
{
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;
    CDUnknownBlockType block;
}

+ (void)forgetObserver:(id)arg1;
+ (BOOL)isAnObserver:(id)arg1;
+ (id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)_doit:(id)arg1;
- (id)object;
- (id)name;
- (void)dealloc;

@end

