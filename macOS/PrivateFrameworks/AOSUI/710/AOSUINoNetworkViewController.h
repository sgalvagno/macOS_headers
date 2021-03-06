//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/AOSUISpyglassBaseViewController.h>

@class NSButton, NSString, NSTextField;

@interface AOSUINoNetworkViewController : AOSUISpyglassBaseViewController
{
    BOOL _isAlternate;
    id <AOSUINoNetworkViewControllerDelegate> _delegate;
    NSTextField *_noNetworkTitle;
    NSTextField *_noNetworkDescription;
    NSButton *_noNetworkButton;
}

@property(retain, nonatomic) NSButton *noNetworkButton; // @synthesize noNetworkButton=_noNetworkButton;
@property(retain, nonatomic) NSTextField *noNetworkDescription; // @synthesize noNetworkDescription=_noNetworkDescription;
@property(retain, nonatomic) NSTextField *noNetworkTitle; // @synthesize noNetworkTitle=_noNetworkTitle;
@property __weak id <AOSUINoNetworkViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL isAlternate; // @synthesize isAlternate=_isAlternate;
- (void).cxx_destruct;
- (void)helpPressed:(id)arg1;
- (void)noNetworkActionPressed:(id)arg1;
@property(copy) NSString *localizedActionTitle;
@property(copy) NSString *localizedDescription;
@property(copy) NSString *localizedTitle;
- (void)_setGenericStrings;
- (void)viewDidLoad;
- (id)nibName;
- (id)nibBundle;
- (id)initWithAccountManager:(id)arg1 delegate:(id)arg2;
- (id)initWithAccountManager:(id)arg1;

@end

