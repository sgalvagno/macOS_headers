//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <LoginUIKit/LUITextFieldDelegate-Protocol.h>
#import <LoginUIKit/NSTextFieldDelegate-Protocol.h>

@class CALayer, LUIEffectsButton, LUITextField, NSStackView, NSString;

@interface LUITextFieldView : NSView <LUITextFieldDelegate, NSTextFieldDelegate>
{
    CALayer *_backgroundLayer;
    NSStackView *_stackView;
    LUITextField *_textField;
    LUIEffectsButton *_actionButton;
    id _delegate;
}

@property id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityPlaceholderValue;
- (void)setUIEnabled:(BOOL)arg1;
- (void)setPlaceholderString:(id)arg1;
- (id)placeholderString;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (struct CGRect)focusRingMaskBounds;
- (id)textField;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_setupSubviews;
- (void)actionButtonSetTarget:(id)arg1;
- (void)actionButtonSetAction:(SEL)arg1;
- (void)actionButtonSetImage:(id)arg1;
- (void)actionButtonSetHidden:(BOOL)arg1;
- (BOOL)actionButtonIsHidden;
- (BOOL)textField:(id)arg1 processTextMovement:(long long)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)_placeholderTextColor;
- (float)_backgroundLayerOpacity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

