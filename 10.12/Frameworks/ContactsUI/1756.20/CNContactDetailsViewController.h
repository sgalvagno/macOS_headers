//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/ABCardCollectionViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactCardWidget-Protocol.h>

@class ABCardCollectionView, ABCardCollectionViewController, ABCardViewStyleProvider, AKCardViewDataSource, CNContact, CNScrollViewOccluderController, NSScrollView, NSString, NSView;
@protocol CNContactDetailsViewControllerDelegate;

@interface CNContactDetailsViewController : NSViewController <ABCardCollectionViewControllerDelegate, CNContactCardWidget>
{
    BOOL _isUnified;
    CNContact *_contact;
    id <CNContactDetailsViewControllerDelegate> _controllerDelegate;
    ABCardViewStyleProvider *_styleProvider;
    AKCardViewDataSource *_dataSource;
    unsigned long long _mode;
    ABCardCollectionView *_cardCollectionView;
    ABCardCollectionViewController *_cardCollectionViewController;
    CNScrollViewOccluderController *_occluderController;
    NSScrollView *_scrollView;
    NSView *_topOccluder;
    NSView *_bottomOccluder;
}

@property(retain, nonatomic) NSView *bottomOccluder; // @synthesize bottomOccluder=_bottomOccluder;
@property(retain, nonatomic) NSView *topOccluder; // @synthesize topOccluder=_topOccluder;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CNScrollViewOccluderController *occluderController; // @synthesize occluderController=_occluderController;
@property(retain, nonatomic) ABCardCollectionViewController *cardCollectionViewController; // @synthesize cardCollectionViewController=_cardCollectionViewController;
@property(retain, nonatomic) ABCardCollectionView *cardCollectionView; // @synthesize cardCollectionView=_cardCollectionView;
@property(nonatomic) BOOL isUnified; // @synthesize isUnified=_isUnified;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) id <CNContactDetailsViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)userActionListDataSource;
- (void)setPropertyKeysToDisplay:(id)arg1;
- (void)addTemplateItemForKey:(id)arg1;
- (void)updateFaceTimeAvailability:(BOOL)arg1;
- (void)notifyDelegateActionWasPerformed;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (id)delegate;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isSelectable;
- (BOOL)isPrivateMeEnabled;
- (BOOL)suggestedCardMode;
- (BOOL)isTemplate;
- (BOOL)importMode;
- (BOOL)editMode;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (id)updateKeyViewLoopAndReturnTailView;
- (void)commitEditing;
- (void)applyDisplayAttributes;
- (void)editCollectionItemWithKey:(id)arg1 label:(id)arg2;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusCollectionItemWithKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadData;
- (double)desiredHeight;
- (void)createConstrains;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

