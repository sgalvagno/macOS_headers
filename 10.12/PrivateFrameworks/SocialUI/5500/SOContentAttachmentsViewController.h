//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/SOAttachmentsViewController.h>

#import <SocialUI/NSCollectionViewDataSource-Protocol.h>
#import <SocialUI/NSCollectionViewDelegate-Protocol.h>
#import <SocialUI/QLPreviewPanelDataSource-Protocol.h>
#import <SocialUI/QLPreviewPanelDelegate-Protocol.h>

@class NSArray, NSCollectionViewFlowLayout, NSLayoutConstraint, NSString, QLPreviewPanel, SOContentAttachmentCollectionView;

@interface SOContentAttachmentsViewController : SOAttachmentsViewController <QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSCollectionViewDataSource, NSCollectionViewDelegate>
{
    NSArray *_attachments;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    QLPreviewPanel *_previewPanel;
}

@property(retain) QLPreviewPanel *previewPanel; // @synthesize previewPanel=_previewPanel;
@property __weak NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (double)stackViewFrameDidChange:(struct CGSize)arg1;
- (BOOL)hasAttachments;
- (void)deleteSelection:(id)arg1;
- (void)openSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)actionableIndexes:(id)arg1;
- (id)_selectionIndexSet:(id)arg1;
- (void)displayPreviewPanel;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillDisappear;
- (void)viewDidLoad;
@property(readonly) NSCollectionViewFlowLayout *flowLayout;
@property(readonly) SOContentAttachmentCollectionView *collectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

