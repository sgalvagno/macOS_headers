//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSTimer, _NSAcceleratorButtonHelper;

__attribute__((visibility("hidden")))
@interface _NSSegmentedCellAuxiliary : NSObject
{
    _NSAcceleratorButtonHelper *_acceleratorHelper;
    NSColor *_selectedSegmentBezelColor;
    struct CGRect _segmentFrameOfTrackedCell;
    struct CGRect *_segmentTrackingRects;
    unsigned long long _segmentTrackingRectCount;
    long long _highlightedSegment;
    BOOL _sendSelectionAction;
    NSTimer *_menuTimer;
    BOOL _sendActionOnGasPedal;
    BOOL _lastGasPedalActionWasHighlighted;
    double _gasPedalDoubleValue;
    BOOL _inTouchBar;
}

@property BOOL inTouchBar; // @synthesize inTouchBar=_inTouchBar;
@property double gasPedalDoubleValue; // @synthesize gasPedalDoubleValue=_gasPedalDoubleValue;
@property BOOL lastGasPedalActionWasHighlighted; // @synthesize lastGasPedalActionWasHighlighted=_lastGasPedalActionWasHighlighted;
@property BOOL sendActionOnGasPedal; // @synthesize sendActionOnGasPedal=_sendActionOnGasPedal;
@property(retain) NSTimer *menuTimer; // @synthesize menuTimer=_menuTimer;
@property BOOL sendSelectionAction; // @synthesize sendSelectionAction=_sendSelectionAction;
@property long long highlightedSegment; // @synthesize highlightedSegment=_highlightedSegment;
@property struct CGRect *segmentTrackingRects; // @synthesize segmentTrackingRects=_segmentTrackingRects;
@property struct CGRect segmentFrameOfTrackedCell; // @synthesize segmentFrameOfTrackedCell=_segmentFrameOfTrackedCell;
@property unsigned long long segmentTrackingRectCount;
- (void)dealloc;
- (id)init;

@end

