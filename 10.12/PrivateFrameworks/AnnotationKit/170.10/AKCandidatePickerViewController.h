//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController, AKShapesGridViewController, NSArray, NSButton, NSStackView;

@interface AKCandidatePickerViewController : NSViewController
{
    AKController *_controller;
    NSArray *_items;
    NSButton *_closeButton;
    long long _orientation;
    NSStackView *_stackView;
    AKShapesGridViewController *_shapesPicker;
    NSArray *_annotationImages;
}

+ (id)_imagesForAnnotations:(id)arg1;
@property(retain) NSArray *annotationImages; // @synthesize annotationImages=_annotationImages;
@property(retain) AKShapesGridViewController *shapesPicker; // @synthesize shapesPicker=_shapesPicker;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) NSArray *items; // @synthesize items=_items;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (BOOL)setSelectionIndexes:(id)arg1;
@property(copy) CDUnknownBlockType potentialActionBlock;
@property(copy) CDUnknownBlockType actionBlock;
- (void)closePicker:(id)arg1;
- (void)loadView;
- (id)initWithController:(id)arg1 items:(id)arg2 annotations:(id)arg3 orientation:(long long)arg4;

@end

