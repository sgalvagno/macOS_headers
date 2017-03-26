//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAddFieldTouchBarDelegate-Protocol.h>
#import <ContactsUI/CNUIShareKitTransitionProvider-Protocol.h>
#import <ContactsUI/NSTouchBarProvider-Protocol.h>

@class CNAddFieldTouchBar, CNContact, CNUIVCardSharingTask, CNUserActionTouchBar, NSButton, NSPopoverTouchBarItem, NSSharingServicePickerTouchBarItem, NSString, NSTouchBar;
@protocol CNContactViewTouchBarDelegate;

@interface CNContactViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, CNUIShareKitTransitionProvider, NSTouchBarProvider>
{
    CNContact *_contact;
    id <CNContactViewTouchBarDelegate> _delegate;
    NSTouchBar *_touchBar;
    CNAddFieldTouchBar *_addFieldTouchBar;
    NSPopoverTouchBarItem *_addFieldPopoverItem;
    CNUserActionTouchBar *_userActionTouchBar;
    NSButton *_editButton;
    CNUIVCardSharingTask *_sharingTask;
    NSSharingServicePickerTouchBarItem *_shareItem;
}

@property(retain) NSSharingServicePickerTouchBarItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain) CNUIVCardSharingTask *sharingTask; // @synthesize sharingTask=_sharingTask;
@property(retain) NSButton *editButton; // @synthesize editButton=_editButton;
@property(retain) CNUserActionTouchBar *userActionTouchBar; // @synthesize userActionTouchBar=_userActionTouchBar;
@property(retain) NSPopoverTouchBarItem *addFieldPopoverItem; // @synthesize addFieldPopoverItem=_addFieldPopoverItem;
@property(retain) CNAddFieldTouchBar *addFieldTouchBar; // @synthesize addFieldTouchBar=_addFieldTouchBar;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CNContactViewTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)addField:(id)arg1;
- (void)addGroup;
- (void)addContact;
- (BOOL)canAddField;
- (BOOL)canAddContactOrGroup;
- (id)hostWindowForShareSheet;
- (id)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)updateShareItem;
- (void)_updateTouchBarIdentifiers;
- (void)updateTouchBar;
- (id)initWithDelegate:(id)arg1 userActionListDataSource:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

