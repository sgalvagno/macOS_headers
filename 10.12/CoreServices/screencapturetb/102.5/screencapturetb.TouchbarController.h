//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "screencapturetb.FunctionRowViewController.h"

@class NSArray, NSButton, NSSegmentedControl, NSView;

@interface screencapturetb.TouchbarController : screencapturetb.FunctionRowViewController
{
    // Error parsing type: , name: topLevelViews
    // Error parsing type: , name: delegate
    // Error parsing type: , name: captureTypeSegment
    // Error parsing type: , name: locationButtonContainer
    // Error parsing type: , name: locationButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: locationCloseButton
    // Error parsing type: , name: _overideLocationToClipboard
    // Error parsing type: , name: _locationViewController
    // Error parsing type: , name: _closeViewController
    // Error parsing type: , name: _target
    // Error parsing type: , name: _items
    // Error parsing type: , name: _locationTouchBar
}

- (CDUnknownBlockType).cxx_destruct;
- (void)captureLocationChanged:(id)arg1;
- (void)captureScreen:(id)arg1;
- (void)popoverLocationItem:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)updateTemporaryClipboardCapture:(BOOL)arg1;
- (void)updateCaptureWithType:(long long)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) NSButton *locationCloseButton; // @synthesize locationCloseButton;
@property(nonatomic, retain) NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) NSButton *locationButton; // @synthesize locationButton;
@property(nonatomic, retain) NSView *locationButtonContainer; // @synthesize locationButtonContainer;
@property(nonatomic, retain) NSSegmentedControl *captureTypeSegment; // @synthesize captureTypeSegment;
@property(nonatomic, retain) NSArray *topLevelViews; // @synthesize topLevelViews;

@end

