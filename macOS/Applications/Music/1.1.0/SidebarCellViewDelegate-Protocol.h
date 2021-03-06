//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSButton, NSMenu, NSTableCellView;
@protocol ISidebarItem;

@protocol SidebarCellViewDelegate <NSObject>

@optional
- (void)eject:(NSButton *)arg1;
- (void)didChangeCheckboxState:(long long)arg1 forItem:(id <ISidebarItem>)arg2;
- (void)attemptSwitchToTrackDataForObjectID:(unsigned int)arg1;
- (NSMenu *)remoteLibrariesMenu;
- (void)didBeginEdit:(NSTableCellView *)arg1;
- (void)didEndEdit:(NSTableCellView *)arg1;
@end

