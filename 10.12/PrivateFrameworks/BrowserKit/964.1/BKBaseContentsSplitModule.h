//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BrowserKit/BKSplitWithExtrasModule.h>

__attribute__((visibility("hidden")))
@interface BKBaseContentsSplitModule : BKSplitWithExtrasModule
{
    struct {
        unsigned int _forceSplitAdjustment:1;
        unsigned int _adjustsForPredicateChanges:1;
    } _browserControlsSplitFlags;
    double _previousPredicateEditorHeight;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)viewDidLoad;
- (void)adjustSubviewsIfOnlySubviewIsCollapsed;
- (void)setAdjustsForPredicateChanges:(BOOL)arg1;
- (id)predicateEditorModule;

@end

