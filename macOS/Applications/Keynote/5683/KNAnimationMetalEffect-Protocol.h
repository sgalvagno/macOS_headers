//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MTLRenderCommandEncoder;

@protocol KNAnimationMetalEffect <NSObject>
- (void)teardown;
- (void)renderEffectAtPercent:(double)arg1 atBufferIndex:(unsigned long long)arg2 withEncoder:(id <MTLRenderCommandEncoder>)arg3;
- (void)setupEffectIfNecessary;
@end

