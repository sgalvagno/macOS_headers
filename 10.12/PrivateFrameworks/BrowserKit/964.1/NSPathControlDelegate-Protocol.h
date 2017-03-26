//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BrowserKit/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPasteboard, NSPathComponentCell, NSPathControl, NSPathControlItem;
@protocol NSDraggingInfo;

@protocol NSPathControlDelegate <NSObject>

@optional
- (void)pathControl:(NSPathControl *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathControl:(NSPathControl *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)pathControl:(NSPathControl *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragPathComponentCell:(NSPathComponentCell *)arg2 withPasteboard:(NSPasteboard *)arg3;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragItem:(NSPathControlItem *)arg2 withPasteboard:(NSPasteboard *)arg3;
@end

