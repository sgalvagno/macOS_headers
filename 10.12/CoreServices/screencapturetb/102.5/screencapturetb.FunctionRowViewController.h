//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSFunctionRow;

@interface screencapturetb.FunctionRowViewController : NSViewController <CAAnimationDelegate>
{
    // Error parsing type: , name: functionRow
    // Error parsing type: , name: _setModal
    // Error parsing type: , name: _visibleX
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) BOOL _visibleX; // @synthesize _visibleX;
@property(nonatomic) BOOL _setModal; // @synthesize _setModal;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateHidden;
- (void)animateVisible;
- (void)dismissTouchBar;
- (void)presentTouchBarWithPlacement:(long long)arg1 modal:(BOOL)arg2;
@property(nonatomic, retain) NSFunctionRow *functionRow; // @synthesize functionRow;

@end

