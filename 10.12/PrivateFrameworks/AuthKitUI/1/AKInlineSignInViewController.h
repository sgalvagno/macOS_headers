//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationDelegate-Protocol.h>

@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext, AKRoundLoginContainerView, NSButton, NSProgressIndicator, NSString, NSTextField, NSView;
@protocol AKInlineSignInViewControllerDelegate;

@interface AKInlineSignInViewController : NSViewController <AKAppleIDAuthenticationDelegate>
{
    BOOL _usesDarkMode;
    BOOL _usesCenteringContainerView;
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _wantsAuthenticationProgress;
    AKAppleIDAuthenticationInAppContext *_context;
    id <AKInlineSignInViewControllerDelegate> _delegate;
    NSView *_signInView;
    NSTextField *_usernameLabel;
    NSTextField *_passwordLabel;
    NSTextField *_usernameTextField;
    NSTextField *_passwordTextField;
    NSTextField *_errorTextField;
    NSButton *_signInButton;
    NSButton *_forgotButton;
    NSButton *_createAccountButton;
    AKRoundLoginContainerView *_roundLoginContainerView;
    NSProgressIndicator *_indeterminateSpinner;
}

@property(retain) NSProgressIndicator *indeterminateSpinner; // @synthesize indeterminateSpinner=_indeterminateSpinner;
@property(retain) AKRoundLoginContainerView *roundLoginContainerView; // @synthesize roundLoginContainerView=_roundLoginContainerView;
@property(retain) NSButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain) NSButton *forgotButton; // @synthesize forgotButton=_forgotButton;
@property(retain) NSButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property(retain) NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain) NSTextField *usernameTextField; // @synthesize usernameTextField=_usernameTextField;
@property(retain) NSTextField *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(retain) NSTextField *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain) NSView *signInView; // @synthesize signInView=_signInView;
@property __weak id <AKInlineSignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AKAppleIDAuthenticationInAppContext *context; // @synthesize context=_context;
@property BOOL wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;
- (void).cxx_destruct;
- (void)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createAccountButtonClicked:(id)arg1;
- (void)forgotButtonClicked:(id)arg1;
- (void)signInButtonClicked:(id)arg1;
@property(readonly) AKAppleIDAuthenticationController *authenticationController;
- (void)provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)showIndeterminateSpinner:(BOOL)arg1;
- (void)allowUserInteraction:(BOOL)arg1;
- (void)updateUIToReflectDarkMode;
@property(nonatomic) BOOL usesDarkMode;
- (void)_authenticateWithCredentialRecovery:(BOOL)arg1 needsNewAppleID:(BOOL)arg2;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

