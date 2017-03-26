//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

#import <InputMethodKit/IMKCandidateIndexing-Protocol.h>

@class IMKCandidateController, IMKCandidateLayoutUnit, IMKCandidateUnitViewContentView, NSColor, NSString;

@interface IMKCandidateUnitView : IMKUIView <IMKCandidateIndexing>
{
    IMKCandidateLayoutUnit *_layoutUnit;
    IMKCandidateController *_controller;
    IMKCandidateUnitViewContentView *_contentView;
    BOOL _animateChanges;
    BOOL _keptHidden;
    NSString *_guideNumber;
    BOOL _forceNoSelection;
    BOOL _roundsLeftCorners;
    BOOL _roundsRightCorners;
}

@property(nonatomic) BOOL roundsRightCorners; // @synthesize roundsRightCorners=_roundsRightCorners;
@property(nonatomic) BOOL roundsLeftCorners; // @synthesize roundsLeftCorners=_roundsLeftCorners;
@property(nonatomic) BOOL forceNoSelection; // @synthesize forceNoSelection=_forceNoSelection;
@property(copy, nonatomic) NSString *guideNumber; // @synthesize guideNumber=_guideNumber;
@property(nonatomic) BOOL keptHidden; // @synthesize keptHidden=_keptHidden;
@property(nonatomic) BOOL animateChanges; // @synthesize animateChanges=_animateChanges;
@property(nonatomic) IMKCandidateController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) IMKCandidateUnitViewContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) IMKCandidateLayoutUnit *layoutUnit; // @synthesize layoutUnit=_layoutUnit;
- (void)shouldUpdateForPressAndHold:(id)arg1 position:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 position:(struct CGPoint)arg2;
- (void)scrubbed:(id)arg1 position:(struct CGPoint)arg2;
- (void)tapped:(id)arg1 position:(struct CGPoint)arg2;
- (void)mouseUp:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueKey;
- (void)setNeedsDisplay:(BOOL)arg1;
@property(nonatomic) BOOL drawsBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (void)setUpLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

