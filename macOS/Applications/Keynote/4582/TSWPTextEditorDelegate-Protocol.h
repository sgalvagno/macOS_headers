//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TSWPRep, TSWPSelection, TSWPStorage, TSWPTextEditor;
@protocol TSWPStyleProvider;

@protocol TSWPTextEditorDelegate <NSObject>

@optional
@property(readonly, nonatomic) BOOL editorAllowsListInteraction;
@property(readonly, nonatomic) BOOL editorAllowsRubyInteraction;
@property(readonly, nonatomic) BOOL editorAllowsEquationInteraction;
@property(readonly, nonatomic) BOOL editorAllowsHyperlinkInteraction;
@property(readonly, nonatomic) BOOL editorAllowsCaret;
@property(readonly, nonatomic) BOOL editorAllowsTextInputWhileTextGesturesInFlight;
@property(readonly, nonatomic) BOOL editorAllowsKeyboard;
@property(readonly, nonatomic) BOOL editorAllowsListIndentViaTabOnNoneLists;
@property(readonly, nonatomic) BOOL editorAllowsMagnifier;
@property(readonly, nonatomic) BOOL editorShouldAlwaysBeInParagraphMode;
- (void)didSetTappedSelectionWithWPEditor:(TSWPTextEditor *)arg1 onWPRep:(TSWPRep *)arg2;
- (BOOL)disallowEditingOfTextStringWithStorage:(TSWPStorage *)arg1;
- (void)knobTrackingDidEnd;
- (void)knobTrackingDidBegin;
- (void)showCustomEditMenuForStorage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2;
- (BOOL)willChangeContentOffsetIfKeyboardHidden;
- (BOOL)editorShouldShowInsertMenuItemsForSelection:(TSWPSelection *)arg1;
- (void)filterPasteboardTextStorages:(NSArray *)arg1 forTargetStorage:(TSWPStorage *)arg2;
- (id <TSWPStyleProvider>)styleProviderForStorage:(TSWPStorage *)arg1;
@end

