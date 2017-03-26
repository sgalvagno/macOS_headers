//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMBundleAction.h>

@class NSArray, NSPopUpButton, NSPredicate, NSString, _AMPredicateEditor;

@interface _AMPredicateEditorAction : AMBundleAction
{
    _AMPredicateEditor *_predicateEditor;
    NSPopUpButton *_itemTypePopUpButton;
    NSPredicate *_predicate;
    NSArray *_perItemTypeInfo;
}

@property(readonly, copy) NSArray *perItemTypeInfo; // @synthesize perItemTypeInfo=_perItemTypeInfo;
- (void)predicateEditorChanged:(id)arg1;
- (void)itemTypePopUpButtonSelectionChanged:(id)arg1;
- (void)setUpUIForItemType:(id)arg1 withPredicate:(id)arg2;
- (void)parametersUpdated;
- (void)updateParameters;
@property(copy) NSPredicate *predicate;
@property(copy) NSString *itemType;
- (void)opened;
- (void)awakeFromNib;
- (void)dealloc;

@end

