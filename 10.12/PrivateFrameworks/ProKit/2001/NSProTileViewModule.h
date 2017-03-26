//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProViewModule.h>

@class NSProTileView;

@interface NSProTileViewModule : NSProViewModule
{
    NSProTileView *_tileView;
    struct CGSize _viewMinSize;
    void *_proReserved7;
    void *_proReserved8;
    void *_proReserved9;
}

+ (Class)tileClass;
+ (Class)tileViewClass;
- (id)tileView;
- (id)makeSubmoduleVisible:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (void)viewWasInstalled;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)_removeFromSupermoduleIfNeeded;
- (void)_removeTileForModule:(id)arg1;
- (void)_installTileForModule:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)removeSubmodules:(id)arg1;
- (void)removeSubmodule:(id)arg1;
- (void)insertSubmodule:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)loadView;
- (void)finalize;
- (void)dealloc;

@end

