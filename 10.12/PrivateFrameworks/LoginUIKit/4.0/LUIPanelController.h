//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@interface LUIPanelController : LUIController
{
}

- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)setFocusOn:(int)arg1 forced:(BOOL)arg2;
- (void)setFocusOn:(int)arg1;
- (void)setFocused:(BOOL)arg1;
- (void)shake;
- (void)setUserNameHidden:(BOOL)arg1;
- (void)setUserImageHidden:(BOOL)arg1;
- (id)viewForPopover;
- (void)setSecureTextFieldUsesHint:(BOOL)arg1;
- (void)setSecureTextFieldMode:(int)arg1;
- (struct CGPoint)pointForPopover:(int)arg1;
- (struct CGRect)progressRect;
- (void)setSecurityTextFieldPlaceholderString:(id)arg1;
- (void)setNameTextFieldPlaceholderString:(id)arg1;
- (void)setBackButtonHidden:(BOOL)arg1;
- (id)secureTextField;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)setUserLikeness:(id)arg1;
- (void)resetNameAndPassword;
- (void)forceDrawFocusRing;
- (void)forceClearFocusRing;

@end

