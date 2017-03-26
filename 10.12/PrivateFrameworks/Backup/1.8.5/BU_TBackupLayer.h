//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CABackdropLayer;

__attribute__((visibility("hidden")))
@interface BU_TBackupLayer : CALayer
{
    unsigned long long fIndex;
    _Bool fSnapshotImageRequested;
    struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *>> fTarget;
    struct TNSRef<CABackdropLayer *, void> _backdropLayer;
    struct TNSRef<CALayer *, void> _effectLayer;
    _Bool _configuredForInvalid;
}

@property(nonatomic) _Bool configuredForInvalid; // @synthesize configuredForInvalid=_configuredForInvalid;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (_Bool)showAsValidTarget;
@property(retain, nonatomic) CALayer *effectLayer;
@property(retain, nonatomic) CABackdropLayer *backdropLayer;

@end

