//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface ABOnBlueButton : NSButton
{
    id _privateTarget;
    SEL _privateAction;
    BOOL _roundPlatterStyle;
}

+ (id)image:(id)arg1 withColor:(id)arg2;
+ (void)applyDefaultStyleToButton:(id)arg1;
+ (void)applyVibrantLightStyleToButton:(id)arg1;
+ (void)applyVibrantDarkStyleToButton:(id)arg1;
+ (void)applyStylingToButton:(id)arg1;
@property(nonatomic, getter=isRoundPlatterStyle) BOOL roundPlatterStyle; // @synthesize roundPlatterStyle=_roundPlatterStyle;
@property SEL privateAction; // @synthesize privateAction=_privateAction;
@property __weak id privateTarget; // @synthesize privateTarget=_privateTarget;
- (void).cxx_destruct;
- (void)buttonWasClicked:(id)arg1;
- (void)performPrivateAction;
- (void)resetButtonStateAfterMouseUp;
- (struct CGSize)intrinsicContentSize;
- (double)baselineOffsetFromBottom;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

