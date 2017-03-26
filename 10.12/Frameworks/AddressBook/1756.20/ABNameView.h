//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AddressBook/ABNameView-Protocol.h>

@class ABCardViewStyleProvider, ABOverlayView, ABShadowTextField, ABWidthLimitingStackView, NSArray, NSButton, NSDictionary, NSFont, NSFormatter, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTextField;
@protocol ABCardViewDataSource, ABNameViewDelegate;

@interface ABNameView : NSView <ABNameView>
{
    NSMutableArray *_sortedFieldsNestedByLine;
    NSMutableSet *_dirtyFields;
    NSMutableSet *_displayedFields;
    NSMutableSet *_propetyKeysToDisplay;
    NSMapTable *_fieldToKeyMap;
    NSDictionary *_keyToFieldMap;
    id <ABCardViewDataSource> _dataSource;
    ABCardViewStyleProvider *_styleProvider;
    ABOverlayView *_overlayView;
    id <ABNameViewDelegate> _delegate;
    NSButton *mCompanyCheckbox;
    NSTextField *mTitleAndDepartmentSeparator;
    ABShadowTextField *_completeNameView;
    ABShadowTextField *_suffixView;
    ABShadowTextField *_lastNameView;
    ABShadowTextField *_middleNameView;
    ABShadowTextField *_organizationView;
    ABShadowTextField *_phoneticOrganizationView;
    ABShadowTextField *_departmentView;
    ABShadowTextField *_jobTitleView;
    ABShadowTextField *_nicknameView;
    ABShadowTextField *_firstNameView;
    ABShadowTextField *_titleView;
    ABShadowTextField *_completePhoneticNameView;
    ABShadowTextField *_phoneticLastNameView;
    ABShadowTextField *_phoneticMiddleNameView;
    ABShadowTextField *_phoneticFirstNameView;
    NSFont *_largeFont;
    NSFont *_normalFont;
    NSFormatter *_normalFormatter;
    NSFormatter *_nicknameFormatter;
    BOOL _shouldHideTitleAndDepartmentSeparator;
    BOOL _didCreateConstraints;
    ABWidthLimitingStackView *_outerStackView;
    NSArray *_transientConstraints;
    NSMutableDictionary *_immediateActionGestureRecognizers;
}

+ (id)visibilityEquivalenceMap;
+ (id)largeFontKeysForDisplayStyle:(unsigned long long)arg1;
+ (id)keyToPreferenceMap;
+ (id)alwaysVisibleKeys;
@property(retain, nonatomic) NSMutableSet *propetyKeysToDisplay; // @synthesize propetyKeysToDisplay=_propetyKeysToDisplay;
@property(nonatomic) __weak id <ABNameViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSButton *companyCheckbox; // @synthesize companyCheckbox=mCompanyCheckbox;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) id <ABCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)newKeyToFieldMap;
- (id)newFieldToKeyMap;
- (id)phoneticNameKeys;
- (id)nameKeys;
- (id)personLayoutKeysByLine;
- (id)companyLayoutKeysByLine;
- (id)keyAtPoint:(struct CGPoint)arg1 inString:(id)arg2 attributes:(id)arg3 keys:(id)arg4;
- (id)possibleKeysForTextField:(id)arg1;
- (id)keyAtPoint:(struct CGPoint)arg1 textField:(id)arg2;
- (id)bestGuessForClickedKeyOfTextField:(id)arg1;
- (void)textFieldWantsEdit:(id)arg1;
- (void)invalidateClickToEditForTextField:(id)arg1;
- (void)configureClickToEditForTextField:(id)arg1;
- (void)applyDisplayStyleToDataSource:(unsigned long long)arg1;
- (void)setDisplayStyleFromCheckBox:(id)arg1;
- (BOOL)shouldUseValueFromNameField:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)reloadData;
- (void)reloadDataForKey:(id)arg1 layoutRows:(BOOL)arg2;
- (void)reloadDataForKey:(id)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusKey:(id)arg1;
- (BOOL)isPhoneticKey:(id)arg1;
- (BOOL)shouldPrunePhoneticView:(id)arg1;
- (BOOL)shouldPruneView:(id)arg1;
- (BOOL)defaultVisibilityForKey:(id)arg1;
- (BOOL)shouldPruneKey:(id)arg1;
- (id)updateKeyViewLoop;
- (void)updateCompanyCheckbox;
- (void)updateCompanyCheckBoxState;
- (void)updateCompanyCheckboxVisibility;
- (void)updateCompanyCheckboxColor;
- (void)removeFirstResponderSelection;
- (void)updateTextColor:(id)arg1;
- (void)updateAccessibilityForView:(id)arg1;
- (void)updateHidden:(id)arg1 inStackView:(id)arg2;
- (void)updateLineBreakMode:(id)arg1;
- (void)updatePlaceholderText:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)updateFormatter:(id)arg1;
- (void)layoutView:(id)arg1 inStackView:(id)arg2;
- (void)layoutRow:(id)arg1;
- (void)updateConstraints;
- (void)cullEmptyRows;
- (void)addCompanyCheckboxRow;
- (void)layoutRows;
- (id)lastVisibleField;
- (void)enumerateAllTextFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)setupLayoutFlags;
- (void)setupLayoutFonts;
- (void)updateTagForTextField:(id)arg1 displayStyle:(unsigned long long)arg2;
- (void)updateTextFields;
- (void)updateNameFieldsOrder;
- (void)updateStackViewSpacing;
- (void)updateViews;
- (void)commitEditing;
- (BOOL)isFlipped;
- (void)updateBorderOverlayView;
- (void)controlTextDidChange:(id)arg1;
- (id)valueFromNameField:(id)arg1;
- (void)applyInitialConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)translatesAutoresizingMaskIntofConstraints;
@property(readonly) BOOL editMode;
- (void)ABNameView_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

