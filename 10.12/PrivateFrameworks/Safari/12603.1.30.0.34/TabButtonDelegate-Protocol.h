//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSEvent, NSMenu, TabButton;

@protocol TabButtonDelegate <NSObject>
- (void)tabButtonDidBecomeFirstResponder:(TabButton *)arg1;
- (void)closeTabButton:(TabButton *)arg1;
- (void)selectTabButton:(TabButton *)arg1;
- (NSMenu *)tabButton:(TabButton *)arg1 menuForEvent:(NSEvent *)arg2;
@end

