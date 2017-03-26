//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class SCRElement;

__attribute__((visibility("hidden")))
@interface SCRSlider : SCRMapElement
{
    long long _orientation;
    SCRElement *_valueIndicator;
    unsigned char _echoState;
    BOOL __handlingValueChangeNotification;
}

@property(nonatomic) BOOL _handlingValueChangeNotification; // @synthesize _handlingValueChangeNotification=__handlingValueChangeNotification;
@property(nonatomic) unsigned char echoState; // @synthesize echoState=_echoState;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)arg1 request:(id)arg2;
- (void)handleAttributeChange:(id)arg1;
- (BOOL)brailleLineAllowsChildren;
- (id)brailleLineElementForUIElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)sendBrailleLineWithElement:(id)arg1 focusThrough:(BOOL)arg2 forceRebuild:(BOOL)arg3;
- (id)description;
- (void)delayOutputValueDescription;
- (void)addElementSummaryToRequest:(id)arg1;
- (id)summaryTypeDescription;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (id)valueDescription;
- (id)interactionValueDescription;
- (id)_linkedDescription;
- (BOOL)_isBackwardNavigationCommand:(id)arg1;
- (void)_handleInteractionChangeWithRequest:(id)arg1 forCommand:(id)arg2 withStatus:(BOOL)arg3;
- (void)handleInteractionOutput:(id)arg1 forCommand:(id)arg2 withStatus:(BOOL)arg3;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (BOOL)isControlElement;
- (BOOL)isInteractive;
- (BOOL)isAdjustable;
- (BOOL)handleRotorAdjustWithEvent:(id)arg1 direction:(long long)arg2 request:(id)arg3;
- (void)highlightWithScrolling:(BOOL)arg1;
- (long long)orientation;
- (BOOL)end;
- (BOOL)home;
- (BOOL)incrementWithPercentage:(double)arg1;
- (BOOL)decrementWithPercentage:(double)arg1;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)incrementSmall;
- (BOOL)decrementSmall;
- (BOOL)increment;
- (BOOL)decrement;
- (BOOL)supportsMaxFloatValue;
- (BOOL)supportsMinFloatValue;
- (double)percentValue;
- (id)maxValue;
- (id)minValue;
- (double)maxFloatValue;
- (double)minFloatValue;
- (float)floatValue;
- (BOOL)_hasMultipleIndicators;
- (BOOL)allowBuildChildren;
- (BOOL)canHandleValueChange;
- (void)deallocChildren;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

