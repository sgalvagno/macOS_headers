//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TDrawRectView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface FI_TBasicImageView : FI_TDrawRectView
{
    struct TNSRef<NSImage *, void> _imageForDrawing;
    struct TNSRef<NSImage *, void> _imageForComparison;
    _Bool _isDimmed;
    _Bool _acceptsFirstMouse;
    struct TriStateBool _animatingFrameSizeLarger;
    unsigned long long _animatingFrameSizeCount;
}

@property _Bool acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_isDimmed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrBoundsSizeHelper:(const struct CGSize *)arg1 oldSize:(const struct CGSize *)arg2 sizeChangerBlock:(CDUnknownBlockType)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (_Bool)intersectsOpaquePixels:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)imageForDrawing;
@property(retain, nonatomic) NSImage *image; // @dynamic image;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)initCommon;

@end

