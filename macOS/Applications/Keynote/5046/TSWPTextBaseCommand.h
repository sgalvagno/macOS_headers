//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "TSWPSelectionBehaviorCommand-Protocol.h"

@class NSString, TSWPSelection;

@interface TSWPTextBaseCommand : TSKCommand <TSWPSelectionBehaviorCommand>
{
    unsigned int _flags;
    BOOL _selectionBehaviorHasReadSelections;
    unsigned long long _selectionFlags;
    TSWPSelection *_selectionForCommitSelectionPath;
    TSWPSelection *_selectionForReverseSelectionPath;
    TSWPSelection *_selectionForForwardSelectionPath;
}

@property(nonatomic) BOOL selectionBehaviorHasReadSelections; // @synthesize selectionBehaviorHasReadSelections=_selectionBehaviorHasReadSelections;
@property(retain, nonatomic) TSWPSelection *selectionForForwardSelectionPath; // @synthesize selectionForForwardSelectionPath=_selectionForForwardSelectionPath;
@property(retain, nonatomic) TSWPSelection *selectionForReverseSelectionPath; // @synthesize selectionForReverseSelectionPath=_selectionForReverseSelectionPath;
@property(retain, nonatomic) TSWPSelection *selectionForCommitSelectionPath; // @synthesize selectionForCommitSelectionPath=_selectionForCommitSelectionPath;
@property(nonatomic) unsigned long long selectionFlagsAfterCommit; // @synthesize selectionFlagsAfterCommit=_selectionFlags;
- (void).cxx_destruct;
- (void)invalidateRange:(struct _NSRange)arg1 onStorage:(id)arg2;
- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;
@property(nonatomic) BOOL suppressChangeNotifications;
- (void)removeFlag:(int)arg1;
- (void)addFlag:(int)arg1;
- (unsigned int)flags;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

