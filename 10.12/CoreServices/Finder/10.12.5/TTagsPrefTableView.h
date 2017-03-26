//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import "NSMenuDelegate-Protocol.h"
#import "TShrinkToFitDelegateProtocol-Protocol.h"

@class NSString, TTableViewShrinkToFitController, TTagsPaneController;

@interface TTagsPrefTableView : NSTableView <TShrinkToFitDelegateProtocol, NSMenuDelegate>
{
    TTagsPaneController *_controller;
    TTableViewShrinkToFitController *_stfController;
}

- (id)stfEditorController;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingRow:(unsigned long long)arg1;
- (_Bool)startEditingSelectedRow;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)textFieldAtRow:(unsigned long long)arg1;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)controller;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

