//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SectionController.h"

#import "BJAPingDelegate.h"
#import "GenericLayoutContrainerDelegate.h"
#import "NSTextFieldDelegate.h"

@class BJAButton, BJACheckbox, BJAPingItem, ExtraLayoutContainerActive, ExtraLayoutContainerAvailable, ExtraLayoutItem, ISMPopUpButton, InputField, NSImageView, NSString, NSView, YRKSpinningProgressIndicator;

@interface NetworkController : SectionController <GenericLayoutContrainerDelegate, BJAPingDelegate, NSTextFieldDelegate>
{
    ExtraLayoutContainerAvailable *layoutAvailable;
    ExtraLayoutContainerActive *layoutActive;
    ISMPopUpButton *graphMode;
    ISMPopUpButton *primary;
    ISMPopUpButton *dataFormat;
    ISMPopUpButton *processesSort;
    ExtraLayoutItem *_editingItem;
    BJAButton *_manageIPButton;
    ISMPopUpButton *_ipv4Display;
    ISMPopUpButton *_ipv6Display;
    BJACheckbox *_ipv6Group;
    BJACheckbox *_ipv6ShowSecured;
    BJACheckbox *_ipv6ShowDynamic;
    BJACheckbox *_ipv6ShowTemporary;
    BJACheckbox *_ipv6ShowDeprecated;
    BJACheckbox *_ipv6ShowOther;
    ISMPopUpButton *_processCount;
    BJACheckbox *_combineBandwidth;
    BJACheckbox *_showBSD;
    ISMPopUpButton *_decimalLevelKB;
    ISMPopUpButton *_decimalLevelMB;
    BJAButton *_daemonInfoButton;
    NSView *_daemonView;
    InputField *_customStatusField;
    BJAPingItem *_customStatusPingItem;
    YRKSpinningProgressIndicator *_customStatusSpinner;
    NSImageView *_customStatusIcon;
}

@property(retain, nonatomic) NSImageView *customStatusIcon; // @synthesize customStatusIcon=_customStatusIcon;
@property(retain, nonatomic) YRKSpinningProgressIndicator *customStatusSpinner; // @synthesize customStatusSpinner=_customStatusSpinner;
@property(retain, nonatomic) BJAPingItem *customStatusPingItem; // @synthesize customStatusPingItem=_customStatusPingItem;
@property(retain, nonatomic) InputField *customStatusField; // @synthesize customStatusField=_customStatusField;
@property(retain, nonatomic) NSView *daemonView; // @synthesize daemonView=_daemonView;
@property(retain, nonatomic) BJAButton *daemonInfoButton; // @synthesize daemonInfoButton=_daemonInfoButton;
@property(retain, nonatomic) ISMPopUpButton *decimalLevelMB; // @synthesize decimalLevelMB=_decimalLevelMB;
@property(retain, nonatomic) ISMPopUpButton *decimalLevelKB; // @synthesize decimalLevelKB=_decimalLevelKB;
@property(retain, nonatomic) BJACheckbox *showBSD; // @synthesize showBSD=_showBSD;
@property(retain, nonatomic) BJACheckbox *combineBandwidth; // @synthesize combineBandwidth=_combineBandwidth;
@property(retain, nonatomic) ISMPopUpButton *processCount; // @synthesize processCount=_processCount;
@property(retain, nonatomic) BJACheckbox *ipv6ShowOther; // @synthesize ipv6ShowOther=_ipv6ShowOther;
@property(retain, nonatomic) BJACheckbox *ipv6ShowDeprecated; // @synthesize ipv6ShowDeprecated=_ipv6ShowDeprecated;
@property(retain, nonatomic) BJACheckbox *ipv6ShowTemporary; // @synthesize ipv6ShowTemporary=_ipv6ShowTemporary;
@property(retain, nonatomic) BJACheckbox *ipv6ShowDynamic; // @synthesize ipv6ShowDynamic=_ipv6ShowDynamic;
@property(retain, nonatomic) BJACheckbox *ipv6ShowSecured; // @synthesize ipv6ShowSecured=_ipv6ShowSecured;
@property(retain, nonatomic) BJACheckbox *ipv6Group; // @synthesize ipv6Group=_ipv6Group;
@property(retain, nonatomic) ISMPopUpButton *ipv6Display; // @synthesize ipv6Display=_ipv6Display;
@property(retain, nonatomic) ISMPopUpButton *ipv4Display; // @synthesize ipv4Display=_ipv4Display;
@property(retain, nonatomic) BJAButton *manageIPButton; // @synthesize manageIPButton=_manageIPButton;
@property(retain, nonatomic) ExtraLayoutItem *editingItem; // @synthesize editingItem=_editingItem;
- (void).cxx_destruct;
- (void)updateOptions;
- (void)closeCustomStatus;
- (void)saveCustomStatus;
- (void)customStatusSuccess;
- (void)customStatusFailed;
- (id)customStatusIcon:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)pingComplete:(id)arg1 results:(id)arg2;
- (void)pingBegan:(id)arg1;
- (void)pingFailed:(id)arg1 error:(id)arg2;
- (void)ping:(id)arg1 gotResult:(id)arg2;
- (void)testCustomStatus;
- (void)addCustomStatusChecker:(id)arg1;
- (void)_highlightLayoutItem:(id)arg1 container:(id)arg2 override:(BOOL)arg3;
- (void)setMenubarSpacerWidth:(id)arg1;
- (void)toggleGraphType;
- (void)updateHistoryWidth;
- (void)layoutContainerUpdated:(id)arg1;
- (void)setupLayoutItems;
- (void)updateLayoutItems;
- (void)updateAvailableItems;
- (void)importedPreferences;
- (void)updateInterfaces;
- (void)loadDaemon;
- (void)daemonStatusChanged;
- (void)setup;
- (void)daemonInfo;
- (void)setupIcon;
- (void)externalNotification:(id)arg1;
- (void)postNotificationWithKey:(id)arg1;
- (void)addPrefKey:(id)arg1 notificationKey:(id)arg2 toObject:(id)arg3 text:(BOOL)arg4 layout:(BOOL)arg5 selector:(SEL)arg6;
- (void)updateLayoutSelectors;
- (void)resetTextAttributes;
- (void)prepareDropdownOrderView;
- (void)manageIPs;
- (void)closeManageIPs;
- (id)hotkeyPreferenceKey;
- (id)stateNotificationKey;
- (id)sectionName;
- (id)bundleFile;
- (id)bundleName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

