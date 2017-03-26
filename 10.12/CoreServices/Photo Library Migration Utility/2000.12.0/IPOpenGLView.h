//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSOpenGLView.h>

@class CIContext;

@interface IPOpenGLView : NSOpenGLView
{
    BOOL _needsReshape;
    CIContext *_ciContext;
}

+ (id)defaultPixelFormat;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCurrentFrame;
- (id)ciContext;
- (void)initializeContext;
- (void)reshapeOpenGL;
- (id)backgroundColor;
- (void)reshape;
- (void)prepareOpenGL;
- (void)dealloc;
- (void)clearGLContext;
- (id)initWithFrame:(struct CGRect)arg1;

@end

