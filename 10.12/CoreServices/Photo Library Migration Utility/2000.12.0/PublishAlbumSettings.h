//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSButton, NSImageView, NSMutableArray, NSPanel, NSString, NSTextField, NSWindow;

@interface PublishAlbumSettings : NSObject
{
    NSPanel *mSubscribePanel;
    NSTextField *mSubscribeTitle;
    NSTextField *mSubscribeURL;
    NSButton *mSubscribeOKButton;
    NSButton *mSubscribeCancelButton;
    NSPanel *mPasswordPanel;
    NSTextField *mPasswordTitle;
    NSTextField *mPasswordUsernameText;
    NSTextField *mPasswordPasswordText;
    NSButton *mPasswordOKButton;
    NSButton *mPasswordCancelButton;
    NSButton *mPasswordRememberButton;
    NSPanel *mRetryPanel;
    NSTextField *mRetryTitle;
    NSTextField *mRetryUsernameText;
    NSTextField *mRetryPasswordText;
    NSButton *mRetryOKButton;
    NSButton *mRetryCancelButton;
    NSButton *mRetryRememberButton;
    NSPanel *mSubConfirmPanel;
    NSImageView *mSubConfirmPicture;
    NSTextField *mSubConfirmTitle;
    NSTextField *mSubConfirmMessage;
    NSButton *mSubConfirmDontAskCheckbox;
    NSButton *mSubConfirmSubscribeButton;
    NSButton *mSubConfirmCancelButton;
    NSMutableArray *mPublishAlbumNibObjects;
    NSString *mPasswordSavedTitle;
    NSString *mRetrySavedTitle;
    NSWindow *mWindow;
    NSString *mPublishServiceKey;
    NSString *mSubConfirmURL;
    _Bool mShowedRetry;
    id mModalDelegate;
    SEL mDidEndSelector;
    void *mContextInfo;
}

- (BOOL)subscribeConfirmDontAsk;
- (id)subscribeConfirmURL;
- (void)hitSubConfirmDontAsk:(id)arg1;
- (void)hitSubConfirmCancel:(id)arg1;
- (void)hitSubConfirmOK:(id)arg1;
- (void)hitRetryCancel:(id)arg1;
- (void)hitRetryOK:(id)arg1;
- (BOOL)retryRememberInKeychain;
- (id)retryPassword;
- (id)retryUsername;
- (void)hitPasswordCancel:(id)arg1;
- (void)hitPasswordOK:(id)arg1;
- (BOOL)passwordRememberInKeychain;
- (id)passwordPassword;
- (id)passwordUsername;
- (void)hitSubscribeCancel:(id)arg1;
- (void)hitSubscribeOK:(id)arg1;
- (id)subscribeURL;
- (void)controlTextDidChange:(id)arg1;
- (_Bool)showedRetry;
- (void)dealloc;
- (void)_ensureNib;

@end

