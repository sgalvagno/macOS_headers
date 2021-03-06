//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

#import "PXChangeObserver.h"

@class NSString, PXCMMInvitationViewModel, PXCMMPosterHeaderView, PXSelectionView, UXLabel;

@interface PXCMMInvitationView : UXView <PXChangeObserver>
{
    PXSelectionView *_selectionView;
    PXCMMPosterHeaderView *_headerView;
    UXLabel *_titleLabel;
    UXLabel *_subtitle1Label;
    UXLabel *_subtitle2Label;
    id <PXCMMInvitationViewDelegate> _delegate;
    PXCMMInvitationViewModel *_viewModel;
}

+ (id)subtitle2Color;
+ (id)subtitle1Color;
+ (id)titleBulletColor;
+ (long long)subtitle2TextStyle;
+ (long long)subtitle1TextStyle;
+ (long long)titleTextStyle;
+ (id)subtitle2Font;
+ (id)subtitle1Font;
+ (id)titleEmphasizedFont;
+ (id)titleFont;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PXCMMInvitationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PXCMMInvitationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (BOOL)test_selected;
- (id)test_subtitle2;
- (id)test_subtitle1;
- (id)test_title;
- (void)_contextClickGesture:(id)arg1;
- (void)_doubleClickGesture:(id)arg1;
- (void)_updateSelected;
- (BOOL)_updateSubtitle2;
- (BOOL)_updateSubtitle1;
- (BOOL)_updateTitle;
- (void)_updateHeaderView;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

