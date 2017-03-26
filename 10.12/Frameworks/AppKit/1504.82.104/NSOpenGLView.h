//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSOpenGLContext, NSOpenGLPixelFormat;

@interface NSOpenGLView : NSView
{
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)defaultPixelFormat;
+ (void)initialize;
- (void)setLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_surfaceNeedsUpdate:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (id)_invalidateGStatesForTree;
- (void)update;
- (void)reshape;
- (void)prepareOpenGL;
- (BOOL)lockFocusIfCanDraw;
@property(retain) NSOpenGLPixelFormat *pixelFormat;
- (BOOL)isOpaque;
- (void)clearGLContext;
@property(retain) NSOpenGLContext *openGLContext;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2;
- (id)makeBackingLayer;
- (long long)layerContentsRedrawPolicy;
@property BOOL canAnimateOnBackgroundThread;
@property BOOL animates;
- (void)setWantsBestResolutionOpenGLSurface:(BOOL)arg1;
- (BOOL)wantsBestResolutionOpenGLSurface;
- (struct CGRect)convertRectFromOpenGLSurface:(struct CGRect)arg1;
- (struct CGRect)convertRectToOpenGLSurface:(struct CGRect)arg1;
- (struct CGSize)convertSizeFromOpenGLSurface:(struct CGSize)arg1;
- (struct CGSize)convertSizeToOpenGLSurface:(struct CGSize)arg1;
- (struct CGPoint)convertPointFromOpenGLSurface:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToOpenGLSurface:(struct CGPoint)arg1;
@property(readonly) struct CGSize openGLSurfaceSize;

@end

