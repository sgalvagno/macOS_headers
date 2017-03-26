//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/PKContactEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationErrorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationHostProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationMainViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationPassphraseEntryViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/PKPostalAddressEditorViewControllerDelegate-Protocol.h>

@class CBCentralManager, NSArray, NSString, PKContactEditorViewController, PKContinuityPaymentService, PKPaymentAuthorizationChildViewController, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationErrorViewController, PKPaymentAuthorizationLayout, PKPaymentAuthorizationMainViewController, PKPaymentAuthorizationPassphraseEntryViewController, PKPaymentAuthorizationStateMachine, PKPaymentService, PKPaymentWebService, PKPostalAddressEditorViewController;
@protocol PKPaymentAuthorizationCoreViewControllerPrivateDelegate, PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationCoreViewController : NSViewController <PKPaymentAuthorizationMainViewControllerDelegate, PKPostalAddressEditorViewControllerDelegate, PKContactEditorViewControllerDelegate, PKPaymentAuthorizationErrorViewControllerDelegate, PKPaymentAuthorizationPassphraseEntryViewControllerDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceProtocol>
{
    CDUnknownBlockType block;
    BOOL _delayingSleep;
    BOOL _didSendDidPresent;
    unsigned int _sleepAssertionID;
    long long _paymentAuthorizationStyle;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    NSArray *_activeViewConstraints;
    PKPaymentAuthorizationMainViewController *_mainViewController;
    PKPostalAddressEditorViewController *_postalAddressEditorViewController;
    PKContactEditorViewController *_contactEditorViewController;
    PKPaymentAuthorizationErrorViewController *_errorViewController;
    PKPaymentAuthorizationPassphraseEntryViewController *_passphraseEntryViewController;
    CDUnknownBlockType _passphraseReplyBlock;
    CDUnknownBlockType _pendingPrepareCompletionBlock;
    CDUnknownBlockType _pendingAddNewAddressCompletionBlock;
    CDUnknownBlockType _pendingAddNewContactCompletionBlock;
    CBCentralManager *_bluetoothManager;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKContinuityPaymentService *_continuityPaymentService;
    long long _state;
    PKPaymentAuthorizationChildViewController *_activeViewController;
    id <PKPaymentAuthorizationCoreViewControllerPrivateDelegate> _privateDelegate;
}

@property(nonatomic) __weak id <PKPaymentAuthorizationCoreViewControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic) PKPaymentAuthorizationChildViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKContinuityPaymentService *continuityPaymentService; // @synthesize continuityPaymentService=_continuityPaymentService;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain, nonatomic) CBCentralManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(nonatomic) BOOL didSendDidPresent; // @synthesize didSendDidPresent=_didSendDidPresent;
@property(nonatomic) BOOL delayingSleep; // @synthesize delayingSleep=_delayingSleep;
@property(nonatomic) unsigned int sleepAssertionID; // @synthesize sleepAssertionID=_sleepAssertionID;
@property(copy, nonatomic) CDUnknownBlockType pendingAddNewContactCompletionBlock; // @synthesize pendingAddNewContactCompletionBlock=_pendingAddNewContactCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingAddNewAddressCompletionBlock; // @synthesize pendingAddNewAddressCompletionBlock=_pendingAddNewAddressCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingPrepareCompletionBlock; // @synthesize pendingPrepareCompletionBlock=_pendingPrepareCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType passphraseReplyBlock; // @synthesize passphraseReplyBlock=_passphraseReplyBlock;
@property(retain, nonatomic) PKPaymentAuthorizationPassphraseEntryViewController *passphraseEntryViewController; // @synthesize passphraseEntryViewController=_passphraseEntryViewController;
@property(retain, nonatomic) PKPaymentAuthorizationErrorViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) PKContactEditorViewController *contactEditorViewController; // @synthesize contactEditorViewController=_contactEditorViewController;
@property(retain, nonatomic) PKPostalAddressEditorViewController *postalAddressEditorViewController; // @synthesize postalAddressEditorViewController=_postalAddressEditorViewController;
@property(retain, nonatomic) PKPaymentAuthorizationMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) NSArray *activeViewConstraints; // @synthesize activeViewConstraints=_activeViewConstraints;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
@property(nonatomic) long long paymentAuthorizationStyle; // @synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle;
- (void).cxx_destruct;
- (id)hostContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)hostContext;
- (id)_hostApplicationIdentifier;
- (id)_hostApplicationName;
- (BOOL)_isBluetoothAvailable;
- (void)_notifyWindowDidBecomeKey:(id)arg1;
- (void)_notifyWindowDidResignKey:(id)arg1;
- (void)_notifyApplicationDidBecomeActive:(id)arg1;
- (void)_notifyApplicationDidResignActive:(id)arg1;
- (void)_notifyWorkspaceWillSleep:(id)arg1;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidCancel;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (void)prepareWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizationDidPresent;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (BOOL)handleTransitionToSuccessFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToFatalErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToCancelFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToClientCallbackFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToContinuitySendFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionFromInitializeToState:(unsigned long long)arg1 withParam:(id)arg2;
- (void)updateViewControllerStateOnTransitionToState:(unsigned long long)arg1;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)paymentAuthorizationPassphraseEntryViewController:(id)arg1 didEnterPassphrase:(id)arg2;
- (void)paymentAuthorizationPassphraseEntryViewControllerDidCancel:(id)arg1;
- (void)paymentAuthorizationErrorViewControllerDidCancel:(id)arg1;
- (void)paymentAuthorizationErrorViewControllerDidFinish:(id)arg1;
- (void)contactEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2;
- (void)contactEditorViewControllerDidCancel:(id)arg1;
- (void)postalAddressEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2;
- (void)postalAddressEditorViewControllerDidCancel:(id)arg1;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completion:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)passphraseViewController;
- (void)paymentAuthorizationMainViewController:(id)arg1 willAddNewShippingContactWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationMainViewController:(id)arg1 willAddNewShippingAddressWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationMainViewController:(id)arg1 willAddNewBillingAddressWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationMainViewControllerDidCancel:(id)arg1;
- (void)paymentAuthorizationChildViewController:(id)arg1 didTransitionToSize:(struct CGSize)arg2;
- (id)layoutConstraintsForChildView:(id)arg1;
- (void)setActiveViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActiveViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
- (id)childViewControllerForState:(long long)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

