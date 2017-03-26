//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMManualUpdater : NSObject
{
    id _target;
    SEL _action;
    unsigned int _needsUpdate:1;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) BOOL needsUpdate; // @dynamic needsUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;

@end

