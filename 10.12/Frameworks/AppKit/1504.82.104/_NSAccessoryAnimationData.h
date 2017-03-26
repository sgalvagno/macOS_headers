//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAnimation, NSDictionary;
@protocol NSAnimationContextCompletionHandlerSuspension;

__attribute__((visibility("hidden")))
@interface _NSAccessoryAnimationData : NSObject
{
    id <NSAnimationContextCompletionHandlerSuspension> _animationContextResumeKey;
    NSAnimation *_visibilityAnimation;
    id _animator;
    NSDictionary *_animationsDictionary;
}

@property(copy) NSDictionary *animationsDictionary; // @synthesize animationsDictionary=_animationsDictionary;
@property(retain) id animator; // @synthesize animator=_animator;
@property(retain) NSAnimation *visibilityAnimation; // @synthesize visibilityAnimation=_visibilityAnimation;
@property(retain) id <NSAnimationContextCompletionHandlerSuspension> animationContextResumeKey; // @synthesize animationContextResumeKey=_animationContextResumeKey;
- (void)dealloc;

@end

