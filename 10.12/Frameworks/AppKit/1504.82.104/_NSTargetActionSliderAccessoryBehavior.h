//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSliderAccessoryBehavior.h>

__attribute__((visibility("hidden")))
@interface _NSTargetActionSliderAccessoryBehavior : NSSliderAccessoryBehavior
{
    id _target;
    SEL _action;
}

@property(readonly) SEL action; // @synthesize action=_action;
@property(readonly) __weak id target; // @synthesize target=_target;
- (void)handleAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

