//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRRulerMarker : SCRElement
{
    SCRUIElement *_rulerUIElement;
    struct {
        unsigned int isHorizontal:1;
        unsigned int isOrientationKnown:1;
        unsigned int reserved:30;
    } _srrFlags;
}

- (BOOL)brailleLineAllowsChildren;
- (void)setBrailleLineNeedsRebuild;
- (id)brailleLineElementForUIElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)sendBrailleLineWithElement:(id)arg1 focusThrough:(BOOL)arg2 forceRebuild:(BOOL)arg3;
- (id)unitDescription;
- (void)addItemNameToRequest:(id)arg1;
- (id)typeDescription;
- (id)valueDescription;
- (BOOL)handleTaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (void)handleInteractionOutput:(id)arg1 forCommand:(id)arg2 withStatus:(BOOL)arg3;
- (BOOL)interactRightShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownBigWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageupWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)isControlElement;
- (BOOL)isInteractive;
- (void)_openTabStopSheet;
- (BOOL)deleteTabStopCallbackWithRequest:(id)arg1;
- (BOOL)deleteTabStopWithRequest:(id)arg1;
- (BOOL)decrement:(float)arg1;
- (BOOL)increment:(float)arg1;
- (id)_rulerUIElement;
- (BOOL)_isHorizontal;
- (float)max;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

