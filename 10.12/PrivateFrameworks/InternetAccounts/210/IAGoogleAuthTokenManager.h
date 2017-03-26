//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IAAListPlugin, NSArray, NSButton, NSPanel, NSString, NSURL, NSWindow, NSXPCConnection, WebView;
@protocol IAXPCProtocol;

@interface IAGoogleAuthTokenManager : NSObject
{
    NSXPCConnection *_connection;
    id <IAXPCProtocol> _agent;
    NSWindow *_hostWindow;
    BOOL _isSheet;
    NSPanel *_currentSheet;
    IAAListPlugin *_googlePlugin;
    NSString *_currentToken;
    NSArray *_topLevelObjects;
    NSURL *_webLoginURL;
    WebView *_webview;
    struct __CFURLStorageSession *_privateSession;
    NSPanel *_googleWebLoginWebViewPanel;
    NSButton *_doneButton;
    CDUnknownBlockType _completion;
}

+ (void)removeKeychainEntryForUserName:(id)arg1;
+ (void)setKeychainEntry:(id)arg1 ForUserName:(id)arg2;
+ (id)keychainEntryForUserName:(id)arg1;
+ (id)googleTokenForEmailAddress:(id)arg1 shouldCreateToken:(BOOL)arg2;
+ (id)shared;
@property(retain) NSString *currentToken; // @synthesize currentToken=_currentToken;
- (void).cxx_destruct;
- (void)setGooglePlugin:(id)arg1;
- (void)closeSheet;
- (void)dropSheet:(id)arg1;
- (void)cleanUpWebLoginUI;
- (void)loadNibIfNeeded;
- (void)help:(id)arg1;
- (void)done:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)verifyIdentityButtonPressed:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)loadGoogleWebView;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)dismiss;
- (void)displayGoogleWebLoginAlertInWindow:(id)arg1 withWebLoginURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tokenForAccountUID:(id)arg1 shouldCreateToken:(BOOL)arg2;
- (id)tokenForAccountWithEmailAddress:(id)arg1 shouldCreateToken:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

