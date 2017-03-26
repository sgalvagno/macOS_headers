//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AuthenticationPanel, NSButton, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface AuthenticationDialog : NSObject
{
    AuthenticationPanel *_panel;
    NSLayoutConstraint *_smallLabelToSeparateRealmLabelVerticalSpacingConstraint;
    NSLayoutConstraint *_logInButtonToRememberThisPasswordCheckboxVerticalSpacingConstraint;
    NSTextField *_mainLabel;
    NSTextField *_passwordTextField;
    NSTextField *_smallLabel;
    NSTextField *_usernameTextField;
    NSButton *_rememberPasswordCheckbox;
    struct RefPtr<Safari::AuthenticationSheetRequest> _sheetRequest;
    BOOL _useStopModalWithCodeToEndAuthenticationDialog;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)runAsSheetOnWindow:(id)arg1;
- (void)_handleAuthenticationDialogReturnCode:(long long)arg1;
- (void)_endAuthenticationDialogWithReturnCode:(long long)arg1;
- (void)_hideRememberThisPasswordCheckboxIfNecessary;
- (BOOL)loadNib;
- (void)logIn:(id)arg1;
- (void)cancel:(id)arg1;
- (id)initWithSheetRequest:(struct AuthenticationSheetRequest *)arg1;

@end

