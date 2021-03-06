//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSFont, NSString, iTermAction, iTermStatusBarLayout;

@protocol iTermStatusBarViewControllerDelegate <NSObject>
- (BOOL)statusBarHasDarkBackground;
- (void)statusBarRevealActionsTool;
- (void)statusBarPerformAction:(iTermAction *)arg1;
- (void)statusBarDisable;
- (void)statusBarOpenPreferencesToComponent:(id <iTermStatusBarComponent>)arg1;
- (void)statusBarSetLayout:(iTermStatusBarLayout *)arg1;
- (void)statusBarDidUpdate;
- (void)statusBarWriteString:(NSString *)arg1;
- (NSFont *)statusBarTerminalFont;
- (NSColor *)statusBarTerminalBackgroundColor;
- (NSColor *)statusBarBackgroundColor;
- (NSColor *)statusBarSeparatorColor;
- (NSColor *)statusBarDefaultTextColor;
@end

