//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ACDEClient/ACC2SVAuthenticationUIControllerProtocol-Protocol.h>
#import <ACDEClient/ACD2SVCodeVerificationViewControllerDelegate-Protocol.h>
#import <ACDEClient/ACM2SVTrustedDevicesViewControllerDelegate-Protocol.h>

@class ACC2SVTrustedDeviceObject, ACDDeviceListViewController, ACDStateManager, ACDVerifyCodeViewController, ACFMessage, NSString;
@protocol ACC2SVAuthenticationUIControllerDelegate;

@interface ACD2SVAuthenticationUIController : NSObject <ACM2SVTrustedDevicesViewControllerDelegate, ACD2SVCodeVerificationViewControllerDelegate, ACC2SVAuthenticationUIControllerProtocol>
{
    id <ACC2SVAuthenticationUIControllerDelegate> _delegate;
    ACDDeviceListViewController *_trustedDevicesViewController;
    ACDVerifyCodeViewController *_codeVerificationViewController;
    ACDStateManager *_stateManager;
    ACFMessage *_currentRequest;
}

@property(retain, nonatomic) ACFMessage *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) ACDStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) ACDVerifyCodeViewController *codeVerificationViewController; // @synthesize codeVerificationViewController=_codeVerificationViewController;
@property(retain, nonatomic) ACDDeviceListViewController *trustedDevicesViewController; // @synthesize trustedDevicesViewController=_trustedDevicesViewController;
@property(nonatomic) id <ACC2SVAuthenticationUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)selectedTrustedDeviceName;
@property(readonly, nonatomic) ACC2SVTrustedDeviceObject *selectedTrustedDevice;
- (void)codeVerificationViewControllerNeedsResendCode:(id)arg1;
- (void)cancelInProgressImageDownloads;
- (void)downloadImageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)trustedDevicesViewControllerNeedsRefresh:(id)arg1;
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)arg1;
- (void)showAlertWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCodeVerificationViewController;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1;
- (void)handleFailoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideUIAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

