//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVCaptureVideoPreviewLayer, CALayer;

@interface AKSignatureCaptureView_Mac : NSView
{
    AVCaptureVideoPreviewLayer *_captureLayer;
    CALayer *_frostingLayer;
    BOOL _mirrored;
}

@property(nonatomic) BOOL mirrored; // @synthesize mirrored=_mirrored;
- (void).cxx_destruct;
- (void)setFrostingLayerVisible:(BOOL)arg1;
- (void)setCaptureSession:(id)arg1;
- (id)captureSession;
- (void)awakeFromNib;

@end

