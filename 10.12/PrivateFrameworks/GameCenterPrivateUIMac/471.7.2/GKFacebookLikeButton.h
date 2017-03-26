//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GKOpenGraphNode, GKStoreItemInternal, GKUITheme, NSButton, NSImageView, NSProgressIndicator, NSTextField, UIActivityIndicatorView;

@interface GKFacebookLikeButton : NSView
{
    NSButton *_button;
    NSImageView *_logoView;
    NSTextField *_labelView;
    UIActivityIndicatorView *_spinner;
    GKUITheme *_theme;
    GKOpenGraphNode *_openGraphNode;
    BOOL _connectionError;
    unsigned long long _numberOfFriendLikes;
    unsigned long long _numberOfLikes;
    BOOL _liked;
    BOOL _loading;
    GKStoreItemInternal *_storeItem;
}

@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKOpenGraphNode *openGraphNode; // @synthesize openGraphNode=_openGraphNode;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL connectionError; // @synthesize connectionError=_connectionError;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSTextField *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) NSImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)buttonPressed:(id)arg1;
- (BOOL)isEnabled;
- (void)updateContent;
- (void)dealloc;
- (void)applyConstraints;
- (void)commonSetup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

