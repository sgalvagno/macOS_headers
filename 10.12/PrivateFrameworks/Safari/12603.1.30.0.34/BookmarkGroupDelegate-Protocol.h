//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class WebBookmark, WebBookmarkGroup, WebBookmarkList;

@protocol BookmarkGroupDelegate <NSObject>

@optional
- (void)bookmarkGroup:(WebBookmarkGroup *)arg1 bookmarkDidChange:(WebBookmark *)arg2 changeWasInteractive:(BOOL)arg3;
- (void)bookmarkGroup:(WebBookmarkGroup *)arg1 bookmarkWasRemoved:(WebBookmark *)arg2 fromParent:(WebBookmarkList *)arg3;
- (void)bookmarkGroup:(WebBookmarkGroup *)arg1 bookmarkWasAdded:(WebBookmark *)arg2 toParent:(WebBookmarkList *)arg3;
- (void)bookmarksWereReloadedInGroup:(WebBookmarkGroup *)arg1;
@end

