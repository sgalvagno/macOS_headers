//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSTouchBarPressAndHoldTransposerDelegate;

@interface NSTouchBarPressAndHoldTransposer : NSObject
{
    double _initialXLocation;
    id <NSTouchBarPressAndHoldTransposerDelegate> _delegate;
    id _trackingTouchID;
    BOOL _transposingTouches;
}

@property(readonly) double initialXLocation; // @synthesize initialXLocation=_initialXLocation;
@property __weak id <NSTouchBarPressAndHoldTransposerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchEnded:(id)arg1 withEvent:(id)arg2;
- (void)transposeTouch:(id)arg1;
- (BOOL)transposeEvent:(id)arg1;
- (void)beginTransposingWithTouch:(id)arg1;
@property(readonly) double minimumRequiredDistance;
- (void)dealloc;
- (id)initWithSourceFrame:(struct CGRect)arg1 destinationContentView:(id)arg2 frame:(struct CGRect)arg3;

@end

