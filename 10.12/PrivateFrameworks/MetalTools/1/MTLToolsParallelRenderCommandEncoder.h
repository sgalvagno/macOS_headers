//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLToolsCommandEncoder.h>

#import <MetalTools/MTLParallelRenderCommandEncoder-Protocol.h>

@class MTLToolsPointerArray, NSString;
@protocol MTLDevice;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>
{
    MTLToolsPointerArray *_renderCommandEncoders;
}

@property(readonly, nonatomic) MTLToolsPointerArray *renderCommandEncoders; // @synthesize renderCommandEncoders=_renderCommandEncoders;
- (void).cxx_destruct;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)renderCommandEncoder;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

