//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TDrawRectView.h"

#import "NSStackViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSStackView, NSString, TButton, TPopUpButton, TScopeBarRadioGroupView, TTextField;
@protocol TSearchScopeSliceControllerDelegate;

@interface TSearchScopeSlice : TDrawRectView <NSStackViewDelegate>
{
    NSStackView *_stackView;
    TTextField *_searchTextField;
    TScopeBarRadioGroupView *_axScopeRadioGroupView;
    TButton *_saveButton;
    TButton *_plusMinusButton;
    TPopUpButton *_scopeDropdown;
    NSLayoutConstraint *_scopeDropdownMaxWidthConstraint;
    NSLayoutConstraint *_scopeDropdownMinWidthConstraint;
    TButton *_genericRadioButton;
    struct TNSRef<TButton *, void> _genericRadioButtonRetainer;
    id <TSearchScopeSliceControllerDelegate> _delegate;
}

@property(nonatomic) id <TSearchScopeSliceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)selectedButtonTitle;
- (id)selectedButton;
- (unsigned long long)selectedButtonIndex;
- (void)selectButtonAtIndex:(unsigned long long)arg1;
- (void)setPlusMinusButtonEnabled:(_Bool)arg1;
- (void)setPlusMinusButtonTitle:(_Bool)arg1;
- (void)setSaveButtonEnabled:(_Bool)arg1;
- (void)setButtonTitles:(const vector_e0f53d80 *)arg1 andToolTips:(const vector_e0f53d80 *)arg2;
- (id)newRadioButtonForTitle:(const struct TString *)arg1 tooltip:(const struct TString *)arg2;
- (void)plusMinusButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)scopeDropdownChanged:(id)arg1;
- (void)scopeButtonPressed:(id)arg1;
- (void)chooseScopeButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

