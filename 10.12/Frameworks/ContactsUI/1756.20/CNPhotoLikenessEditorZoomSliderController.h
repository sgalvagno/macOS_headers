//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSSlider, NSStackView;
@protocol CNPhotoLikenessEditorZoomDelegate;

@interface CNPhotoLikenessEditorZoomSliderController : NSViewController
{
    id <CNPhotoLikenessEditorZoomDelegate> _zoomDelegate;
    NSStackView *_zoomStackView;
    NSSlider *_zoomSlider;
    NSButton *_zoomInButton;
    NSButton *_zoomOutButton;
}

@property(retain) NSButton *zoomOutButton; // @synthesize zoomOutButton=_zoomOutButton;
@property(retain) NSButton *zoomInButton; // @synthesize zoomInButton=_zoomInButton;
@property(retain) NSSlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property(retain) NSStackView *zoomStackView; // @synthesize zoomStackView=_zoomStackView;
@property __weak id <CNPhotoLikenessEditorZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
- (void).cxx_destruct;
- (void)setZoomFraction:(double)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomValueChanged:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end

