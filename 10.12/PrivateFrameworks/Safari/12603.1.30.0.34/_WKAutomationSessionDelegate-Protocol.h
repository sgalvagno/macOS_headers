//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, _WKAutomationSession;

@protocol _WKAutomationSessionDelegate <NSObject>

@optional
- (void)_automationSession:(_WKAutomationSession *)arg1 setUserInput:(NSString *)arg2 forCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg3;
- (NSString *)_automationSession:(_WKAutomationSession *)arg1 messageOfCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 acceptCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 dismissCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (BOOL)_automationSession:(_WKAutomationSession *)arg1 isShowingJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSessionDidDisconnectFromRemote:(_WKAutomationSession *)arg1;
- (struct OpaqueWKPage *)_automationSessionDidRequestNewWindow:(_WKAutomationSession *)arg1;
@end

