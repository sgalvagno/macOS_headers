//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, ReaderAppearanceViewController, WBSReaderFont;

@protocol ReaderAppearanceViewControllerDelegate <NSObject>

@optional
- (long long)currentThemeForReaderAppearanceViewController:(ReaderAppearanceViewController *)arg1;
- (WBSReaderFont *)currentFontForReaderAppearanceViewController:(ReaderAppearanceViewController *)arg1;
- (void)readerAppearanceViewController:(ReaderAppearanceViewController *)arg1 switchToFont:(WBSReaderFont *)arg2;
- (NSArray *)availableFontsForReaderAppearanceViewController:(ReaderAppearanceViewController *)arg1;
- (void)readerAppearanceViewController:(ReaderAppearanceViewController *)arg1 switchToTheme:(long long)arg2;
- (void)readerAppearanceViewController:(ReaderAppearanceViewController *)arg1 performFontSizeAdjustment:(long long)arg2;
- (BOOL)readerAppearanceViewController:(ReaderAppearanceViewController *)arg1 canPerformFontSizeAdjustment:(long long)arg2;
@end

