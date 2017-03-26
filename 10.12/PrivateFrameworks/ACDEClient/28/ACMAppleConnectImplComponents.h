//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACCComponents.h>

@protocol ACC2SVControllerProtocol, ACFKeychainManagerProtocol, ACMAppleConnectPreferences, ACMSystemInfoProtocol, ACMTicketManagerProtocol, ACMUIControllerDelegate, ACMUIControllerProtocol;

@interface ACMAppleConnectImplComponents : ACCComponents
{
    id <ACMAppleConnectPreferences> _preferences;
    id <ACFKeychainManagerProtocol> _keychain;
    id <ACC2SVControllerProtocol> _twoSVController;
    id <ACMSystemInfoProtocol> _systemInfo;
    id <ACMUIControllerProtocol> _uiController;
    id <ACMUIControllerDelegate> _uiControllerDelegate;
    BOOL _uiControllerLoaded;
}

+ (id)defaultComponents;
+ (id)components;
@property(readonly) BOOL uiControllerLoaded; // @synthesize uiControllerLoaded=_uiControllerLoaded;
@property(setter=setUIControllerDelegate:) id <ACMUIControllerDelegate> uiControllerDelegate; // @synthesize uiControllerDelegate=_uiControllerDelegate;
@property(retain, nonatomic) id <ACMUIControllerProtocol> uiController; // @synthesize uiController=_uiController;
@property(retain, nonatomic) id <ACMSystemInfoProtocol> systemInfo; // @synthesize systemInfo=_systemInfo;
@property(retain, nonatomic) id <ACC2SVControllerProtocol> twoSVController; // @synthesize twoSVController=_twoSVController;
@property(retain, nonatomic) id <ACMAppleConnectPreferences> preferences; // @synthesize preferences=_preferences;
- (id)createTicketVerificationRequest;
- (id)createAuthenticationRequest;
- (id)createHandlerWithClass:(Class)arg1 context:(id)arg2;
- (id)createTransport;
- (void)unloadUIController;
- (void)cleanupOnMemoryWarning;

// Remaining properties
@property(retain, nonatomic) id <ACMTicketManagerProtocol> ticketManager;

@end

