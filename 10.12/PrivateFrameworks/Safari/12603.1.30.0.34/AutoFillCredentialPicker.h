//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import <Safari/AutoFillCredentialPickerAuthorizationDelegate-Protocol.h>
#import <Safari/CredentialAndProtectionSpaceCollectionDelegate-Protocol.h>
#import <Safari/NSTableViewDataSource-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>
#import <Safari/SecureWindow-Protocol.h>

@class AutoFillCredentialPickerAuthorizationViewController, CredentialAndProtectionSpaceCollection, NSButton, NSCountedSet, NSSearchField, NSString, NSTextField, NSView, NSWindow, SecureWindowLockPolicyEnforcer;

__attribute__((visibility("hidden")))
@interface AutoFillCredentialPicker : SheetWithTableController <AutoFillCredentialPickerAuthorizationDelegate, SecureWindow, NSTableViewDataSource, NSTableViewDelegate, CredentialAndProtectionSpaceCollectionDelegate>
{
    CredentialAndProtectionSpaceCollection *_credentialAndProtectionSpaceCollection;
    NSCountedSet *_credentialHosts;
    long long _purpose;
    SecureWindowLockPolicyEnforcer *_lockPolicyEnforcer;
    AutoFillCredentialPickerAuthorizationViewController *_autoFillCredentialPickerAuthorizationViewController;
    NSButton *_cancelButton;
    NSButton *_fillButton;
    NSSearchField *_searchField;
    NSTextField *_promptTextField;
    NSView *_otherPasswordsWindowContentView;
    CDUnknownBlockType _didSelectCredentialToFillHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didSelectCredentialToFillHandler; // @synthesize didSelectCredentialToFillHandler=_didSelectCredentialToFillHandler;
@property(nonatomic) __weak NSView *otherPasswordsWindowContentView; // @synthesize otherPasswordsWindowContentView=_otherPasswordsWindowContentView;
@property(nonatomic) __weak NSTextField *promptTextField; // @synthesize promptTextField=_promptTextField;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSButton *fillButton; // @synthesize fillButton=_fillButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)_installView:(id)arg1;
@property(readonly, nonatomic) NSWindow *windowToSecure;
- (void)lockFromPolicyEnforcer:(id)arg1;
- (void)autoFillCredentialPickerAuthorizationDidSucceed:(id)arg1;
- (void)autoFillCredentialPickerAuthorizationWasCancelled:(id)arg1;
@property(readonly, nonatomic) AutoFillCredentialPickerAuthorizationViewController *autoFillCredentialPickerAuthorizationViewController; // @synthesize autoFillCredentialPickerAuthorizationViewController=_autoFillCredentialPickerAuthorizationViewController;
@property(readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer; // @synthesize lockPolicyEnforcer=_lockPolicyEnforcer;
- (id)passwordForSortingAndFilteringCredentialAndProtectionSpace:(id)arg1;
- (id)userForSortingAndFilteringCredential:(id)arg1;
- (id)addressStringForFilteringProtectionSpace:(id)arg1;
- (long long)compareAddressFromCredentialAndProtectionSpace:(id)arg1 toAddressFromCredentialAndProtectionSpace:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (id)_addressStringFromProtectionSpace:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateFillAndRemoveButtons;
- (void)_updateCredentialsToDisplay;
- (void)reloadTableData;
- (BOOL)_confirmCredentialRemoval;
- (void)removeSelectedItems:(id)arg1;
- (void)focusContentSearchField:(id)arg1;
- (void)fillSelectedItem:(id)arg1;
- (void)showSheetInWindow:(id)arg1 forPurpose:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)hideSheet:(id)arg1;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

