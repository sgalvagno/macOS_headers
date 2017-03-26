//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextField, NSWindow, SFPasswordAsstView;

@interface SFPasswordAssistantInspectorController : NSObject
{
    NSWindow *_baseWindow;
    NSWindow *_passwordAssistantPanel;
    SFPasswordAsstView *_passwordAssistantView;
    NSTextField *_originalPassword;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_extOriginalPassword;
    NSTextField *_extNewPassword;
    NSTextField *_extVerifyPassword;
}

- (void)setVerifyPasswordField:(id)arg1;
- (id)newPasswordField;
- (void)setNewPasswordField:(id)arg1;
- (void)setOriginalPasswordField:(id)arg1;
- (void)setBaseWindow:(id)arg1;
- (id)baseWindow;
- (void)ourPanelWillClose:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)baseWindowWillClose:(id)arg1;
- (void)closePasswordAssistantPanel;
- (void)showPasswordAssistantPanel:(id)arg1;
- (void)loadOurNib;
- (void)dealloc;
- (id)init;

@end

