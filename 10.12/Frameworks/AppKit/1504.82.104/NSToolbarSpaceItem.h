//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface NSToolbarSpaceItem : NSToolbarItem
{
}

+ (id)itemIdentifier;
- (unsigned long long)spaceItemSize;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (BOOL)allowsDuplicatesInToolbar;
- (id)view;
- (BOOL)_emptyContents;
- (BOOL)_needsRedisplayWhenBeginningToolbarEditing;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)arg1;
- (BOOL)isSeparatorItem;
- (void)dealloc;
- (id)_spaceView;
- (id)init;
- (id)initWithItemIdentifier:(id)arg1;
- (void)_separatorFinishInit;

@end

