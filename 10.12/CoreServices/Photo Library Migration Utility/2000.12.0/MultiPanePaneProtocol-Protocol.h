//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MultiPaneController, NSMutableDictionary;

@protocol MultiPanePaneProtocol

@optional
- (void)multiPaneAnimationDidStop;
- (void)multiPaneAnimationWillStart;
- (void)createNewSmartAlbum;
- (void)setFrameFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)willSetFrameFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)stopZoomTracking:(MultiPaneController *)arg1;
- (void)startZoomTracking:(MultiPaneController *)arg1;
- (void)deactivateFromMultiPane:(MultiPaneController *)arg1;
- (void)activateFromMultiPane:(MultiPaneController *)arg1;
- (void)restoreState:(NSMutableDictionary *)arg1 forMultiPane:(MultiPaneController *)arg2;
- (NSMutableDictionary *)archiveStateForMultiPane:(MultiPaneController *)arg1;
- (void)sidebar:(int)arg1 visible:(BOOL)arg2 inMultiPane:(MultiPaneController *)arg3;
- (void)wasShownInMultiPane:(MultiPaneController *)arg1;
- (void)willBeShownInMultiPane:(MultiPaneController *)arg1;
- (void)wasHiddenInMultiPane:(MultiPaneController *)arg1;
- (void)willBeHiddenInMultiPane:(MultiPaneController *)arg1;
- (void)wasUninstalledFromMultiPane:(MultiPaneController *)arg1;
- (void)willBeUninstalledFromMultiPane:(MultiPaneController *)arg1;
- (void)wasInstalledInMultiPane:(MultiPaneController *)arg1;
- (void)willBeInstalledInMultiPane:(MultiPaneController *)arg1;
- (BOOL)shouldBeInstalledEarlyInMultipane:(MultiPaneController *)arg1;
- (void)setMultiPaneController:(MultiPaneController *)arg1;
- (double)overlapMultiPaneContent;
- (struct CGRect)keywordActionIndicatorLocation;
@end

