//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <FinderKit/NSCollectionViewSectionHeaderView-Protocol.h>
#import <FinderKit/NSCollectionViewSectionHeaderViewPrivate-Protocol.h>

@class NSButton, NSString;

@interface FIIconHeaderView : NSView <NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate>
{
    struct TNSRef<FI_TIconCollectionGroupHeaderView *, void> _headerView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)setCollapseButtonPressedBlock:(CDUnknownBlockType)arg1;
@property NSButton *sectionCollapseButton;
@property(getter=isFloating) BOOL floating; // @dynamic floating;
@property(getter=isCollapseButtonHiddenManually) BOOL collapseButtonHiddenManually;
@property(getter=isCollapseButtonHidden) BOOL collapseButtonHidden; // @dynamic collapseButtonHidden;
@property(getter=isCollapsed) BOOL collapsed; // @dynamic collapsed;
@property unsigned long long itemCount; // @dynamic itemCount;
@property(copy) NSString *titleStr; // @dynamic titleStr;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

