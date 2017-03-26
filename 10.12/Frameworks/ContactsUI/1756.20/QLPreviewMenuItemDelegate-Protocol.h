//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSMenuItem, NSView;
@protocol QLPreviewItem;

@protocol QLPreviewMenuItemDelegate <NSObject>

@optional
- (void)menuItemDidClose:(NSMenuItem *)arg1;
- (void)menuItemWillAppear:(NSMenuItem *)arg1;
- (struct CGSize)menuItem:(NSMenuItem *)arg1 maxSizeForPoint:(struct CGPoint)arg2;
- (struct CGRect)menuItem:(NSMenuItem *)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (struct CGPoint)menuItem:(NSMenuItem *)arg1 aimPointForPoint:(struct CGPoint)arg2;
- (unsigned long long)menuItem:(NSMenuItem *)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id <QLPreviewItem>)menuItem:(NSMenuItem *)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (NSView *)menuItem:(NSMenuItem *)arg1 viewAtScreenPoint:(struct CGPoint)arg2;
@end

