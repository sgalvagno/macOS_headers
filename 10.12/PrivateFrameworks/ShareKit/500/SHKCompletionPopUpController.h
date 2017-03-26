//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareKit/NSTableViewDataSource-Protocol.h>
#import <ShareKit/NSTableViewDelegate-Protocol.h>

@class NSArray, NSString, NSTextView, SHKCompletionPopUpWindow, SHKCompletionTableView;
@protocol SHKCompletionPopUpControllerDelegate;

@interface SHKCompletionPopUpController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    id <SHKCompletionPopUpControllerDelegate> _delegate;
    SHKCompletionPopUpWindow *_window;
    SHKCompletionTableView *_completionTableView;
    NSTextView *_textView;
    NSString *_tentativeCompletion;
    NSArray *_completions;
    struct _NSRange _tentativeRange;
}

@property struct _NSRange tentativeRange; // @synthesize tentativeRange=_tentativeRange;
@property(retain) NSString *tentativeCompletion; // @synthesize tentativeCompletion=_tentativeCompletion;
@property __weak id <SHKCompletionPopUpControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSArray *completions;
- (id)defaultCompletionItem;
- (id)selectedCompletionItem;
- (BOOL)doCommandBySelector:(SEL)arg1;
- (BOOL)isVisible;
- (void)hide;
- (void)showOnWindow:(id)arg1;
- (void)_updateCompletionWindowFrameOnScreen:(id)arg1;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

