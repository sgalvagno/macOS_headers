//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstallerPlugins/InstallerPane.h>

@class IASPSummaryView, IATextView, NSSet, NSView;

@interface SummaryPage : InstallerPane
{
    IASPSummaryView *uiSummaryView;
    IATextView *uiCustomSummaryMessage;
    NSView *uiBottomView;
    int _nextButtonAction;
    BOOL _hasConclusionText;
    NSSet *_cachedAdjustedURLsForRemoval;
    NSSet *_cachedDisksForEjecting;
}

- (id)adjustedURLSForRemoval;
- (id)disksToEjectBeforeRemoval;
- (BOOL)canRemoveAllFilesRelatedToDistribution;
- (void)closeLogoutOrReboot;
- (BOOL)shouldExitPane:(long long)arg1;
- (void)didEnterPane:(long long)arg1;
- (void)iaSendInstallLogToApple:(id)arg1;
- (id)bottomContentView;
- (void)awakeFromNib;
- (id)title;
- (void)_setupPane;
- (void)dealloc;

@end

