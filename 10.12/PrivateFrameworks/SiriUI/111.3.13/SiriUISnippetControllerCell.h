//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SiriUI/NSCollectionViewElement-Protocol.h>
#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSMutableArray, NSString, NSTextField, SiriUIContentButton, SiriUISnippetViewController;
@protocol NSCollectionViewElement><SiriUIReusableView;

@interface SiriUISnippetControllerCell : NSView <NSCollectionViewElement, SiriUIReusableView>
{
    SiriUIContentButton *_snippetPunchOutButton;
    NSTextField *_cancelledLabel;
    NSView<NSCollectionViewElement><SiriUIReusableView> *_headerView;
    NSView<NSCollectionViewElement><SiriUIReusableView> *_footerView;
    NSView<NSCollectionViewElement><SiriUIReusableView> *_transparentHeaderView;
    NSView<NSCollectionViewElement><SiriUIReusableView> *_transparentFooterView;
    NSMutableArray *_allConstraints;
    SiriUISnippetViewController *_snippetViewController;
    struct NSEdgeInsets _snippetEdgeInsets;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
@property(nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct NSEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (double)_heightForContent;
- (void)_configureSubviewsForCurrentInset;
- (void)updateConstraints;
- (void)layout;
- (BOOL)allowsVibrancy;
- (void)prepareForReuse;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

