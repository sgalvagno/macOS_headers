//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, NSView, TLayoutBinder;

@interface TInfoWindowViewController : TViewController <CAAnimationDelegate>
{
    struct TFENodeVector _nodes;
    double _expandedHeight;
    NSView *_bottomBindingView;
    _Bool _expanded;
    _Bool _prefExpanded;
    _Bool _isSetFrameHeightInProgress;
    _Bool _isToggleInProgress;
    NSArray *_valueControllers;
    TLayoutBinder *_layoutBinder;
    TLayoutBinder *_separatorLayoutBinder;
    struct TNotificationCenterObserver _bottomBindingViewFrameChangedObserver;
}

+ (id)controller;
@property(retain, nonatomic) NSArray *valueControllers; // @synthesize valueControllers=_valueControllers;
@property(readonly, retain, nonatomic) TLayoutBinder *layoutBinder; // @synthesize layoutBinder=_layoutBinder;
@property(readonly, nonatomic) _Bool isToggleInProgress; // @synthesize isToggleInProgress=_isToggleInProgress;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disableBottomViewBindings;
- (void)enableBottomViewBindings;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)nodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)bulkNodesDeleted:(const map_124b91a2 *)arg1;
- (void)bulkNodesChanged:(const map_39732344 *)arg1;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
@property(nonatomic) _Bool prefExpanded; // @synthesize prefExpanded=_prefExpanded;
- (id)expandedPrefKey;
- (_Bool)expandedDefaultValue;
- (double)disclosedHeight;
@property(readonly, nonatomic) double bottomMargin;
- (void)refresh;
- (void)targetNodesChanged;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (void)targetNodesChanging;
- (const struct TFENodeVector *)nodes;
- (void)setFrameHeight:(double)arg1;
- (void)bottomBindingViewFrameChanged;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)toggleExpanded:(id)arg1;
- (unsigned int)scriptingID;
- (void)setSubviewsHidden:(_Bool)arg1;
- (void)postToggle;
- (void)preToggle;
- (void)loadValueControllers;
- (void)aboutToTearDown;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

