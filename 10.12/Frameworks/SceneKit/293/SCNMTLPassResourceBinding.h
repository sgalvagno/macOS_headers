//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding
{
    struct {
        struct __C3DFXPassInput *_field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_inputs;
    struct __C3DFXPassInput *_samplerInput;
    long long inputsCount;
    long long bufferSize;
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long inputsCount; // @synthesize inputsCount;
- (void)dealloc;
- (id)init;

@end

