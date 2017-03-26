//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/MDRenderTarget-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MDTextureCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    struct CGSize _sizeInPixels;
    double _contentScale;
    struct Device *_device;
    struct RenderTargetFormat _format;
}

@property(readonly, nonatomic) struct Device *device; // @synthesize device=_device;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void)didDrawView;
- (void)willDrawView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) BOOL shouldRasterize;
@property(readonly, nonatomic) BOOL multiSample;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
- (id)initWithDevice:(struct Device *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

