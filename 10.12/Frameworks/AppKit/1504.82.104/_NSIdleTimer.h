//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSIdleTimer : NSObject
{
    unsigned long long _id;
    int _lock;
    unsigned long long _suspensionCount;
    CDUnknownBlockType _handler;
}

+ (void)removeIdleTimer:(id)arg1;
+ (void)addIdleTimer:(id)arg1;
+ (void)idle;
- (void)resume;
- (void)suspend;
@property(copy) CDUnknownBlockType handler;
- (void)idle;
- (void)dealloc;
- (id)init;

@end

