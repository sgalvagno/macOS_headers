//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@interface IATargetDomainSelectionView : NSMatrix
{
    BOOL _isEnabled;
    BOOL _cellsShouldDisplayTitles;
}

- (void)_respondToWindowBecomeAndResignKeyNotifications:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setEnabledWithoutChangingAppearance:(BOOL)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (void)selectFirstEnabledDomain;
- (void)setShouldDisplayTitles:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateStatusOnMainThread:(id)arg1;
- (void)addDomain:(id)arg1 withTargetController:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 prototype:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

