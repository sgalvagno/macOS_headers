//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSProPopOverDrawingDefinition;

@interface NSProPopOverView : NSView
{
    NSView *_documentView;
    int _arrowDirection;
    int _validArrowDirection;
    BOOL _foundValidWindowOrigin;
    NSProPopOverDrawingDefinition *_drawingDefinition;
    double _documentPadding;
    NSImage *_cachedBackground;
    double _arrowPointOffset;
    BOOL _animates;
    BOOL _useSolidDrawing;
    int _proPopOverStyle;
    BOOL _disableRimShadow;
    double _arrowHeight;
    double _animationDuration;
}

+ (double)animationDuration;
+ (id)_pathForRect:(struct CGRect)arg1 radius:(double)arg2 arrowHeight:(double)arg3 arrowExtension:(double)arg4 arrowInset:(double)arg5 arrowPointOffset:(double)arg6 arrowWidth:(double)arg7 direction:(int)arg8 solidDrawing:(BOOL)arg9;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) int proPopOverStyle; // @synthesize proPopOverStyle=_proPopOverStyle;
@property(nonatomic) BOOL disableRimShadow; // @synthesize disableRimShadow=_disableRimShadow;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) BOOL useSolidDrawing; // @synthesize useSolidDrawing=_useSolidDrawing;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(nonatomic) double arrowPointOffset; // @synthesize arrowPointOffset=_arrowPointOffset;
@property(retain, nonatomic) NSProPopOverDrawingDefinition *drawingDefinition; // @synthesize drawingDefinition=_drawingDefinition;
@property(nonatomic) double documentPadding; // @synthesize documentPadding=_documentPadding;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) NSView *documentView; // @synthesize documentView=_documentView;
- (void)_setupAnimations;
- (void)_removeAnimations;
- (id)_coachTipLearnMoreDrawingDefinition;
- (id)_coachTipMiniDrawingDefinition;
- (id)_coachTipDrawingDefinition;
- (void)_animateOutPreviousDocumentViewDidEnd;
- (void)_windowFrameAnimationDidEndForDocumentViewChange;
- (BOOL)_foundValidWindowOrigin;
- (void)updateFrame;
- (void)_clearCachedBackgroundAndDisplay:(BOOL)arg1;
- (struct CGPoint)_documentViewOrigin;
- (struct CGSize)_frameSizeForDocumentView:(id)arg1 arrowDirection:(int)arg2;
- (struct CGRect)frameForTargetRect:(struct CGRect)arg1 arrowDirection:(int *)arg2 displayRect:(struct CGRect)arg3 arrowPointOffset:(double *)arg4;
- (id)maskPath;
- (id)_maskPathForBounds:(struct CGRect)arg1;
- (id)_backgroundImage;
- (void)_drawOuterStrokeInRect:(struct CGRect)arg1 path:(id)arg2;
- (void)_drawInnerStrokeInRect:(struct CGRect)arg1 path:(id)arg2;
- (void)_drawFillInRect:(struct CGRect)arg1 path:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupDrawingDefinition;

@end

