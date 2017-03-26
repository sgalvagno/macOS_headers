//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddySheetController.h"

@class CloudConfigurationWelcomeController, NSImage, NSString;

@interface CloudConfigurationLoginSheetController : MacBuddySheetController
{
    BOOL _authenticationFailed;
    BOOL _disableControls;
    NSString *_username;
    NSString *_password;
    CloudConfigurationWelcomeController *_controller;
    NSString *_prompt;
}

+ (id)keyPathsForValuesAffectingFieldsValid;
@property(retain) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain) CloudConfigurationWelcomeController *controller; // @synthesize controller=_controller;
@property BOOL disableControls; // @synthesize disableControls=_disableControls;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *username; // @synthesize username=_username;
@property BOOL authenticationFailed; // @synthesize authenticationFailed=_authenticationFailed;
- (void).cxx_destruct;
@property(readonly) NSImage *icon; // @dynamic icon;
- (void)cancelPressed:(id)arg1;
- (void)logInPressed:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
@property(readonly) BOOL fieldsValid; // @dynamic fieldsValid;
- (void)showForWindow:(id)arg1 terminationHandler:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
- (id)initWithWelcomeController:(id)arg1 prompt:(id)arg2;

@end

