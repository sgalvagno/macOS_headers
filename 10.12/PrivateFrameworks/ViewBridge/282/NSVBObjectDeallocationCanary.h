//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSVBObjectDeallocationCanary : NSObject
{
    NSObject *_object;
}

+ (void)attachCanaryToObject:(id)arg1;
+ (unsigned char)actions;
+ (void)_logDeallocation:(id)arg1 withCallStackSymbols:(BOOL)arg2;
- (id)init;
- (id)_initForObject:(id)arg1;
- (id)retain;
- (void)dealloc;
- (void)_dealloc:(id)arg1;
- (void)_logDeallocation:(id)arg1 withCallStackSymbols:(BOOL)arg2;

@end

