//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASUnifiedProgressClient, NSArray;

@interface SUAppUIController : NSObject
{
    IASUnifiedProgressClient *_progressClient;
    NSArray *_backgroundWindows;
}

@property(retain) NSArray *backgroundWindows; // @synthesize backgroundWindows=_backgroundWindows;
@property(retain) IASUnifiedProgressClient *progressClient; // @synthesize progressClient=_progressClient;
- (BOOL)_launchAppAtPath:(id)arg1 extraArguments:(id)arg2;
- (id)appIcon;
- (void)_showAlertWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButtonTitle:(id)arg3;
- (void)showUpdateError:(id)arg1 shouldShutdown:(BOOL)arg2;
- (void)showInsufficientDiskSpaceAlertWithSpaceRequired:(unsigned long long)arg1;
- (BOOL)showUpdateConfirmationAlertForPostInstallShutdown:(BOOL)arg1;
- (void)abortProgressUI;
- (void)reportProgressStatus:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)doneWithPhase;
- (void)startProgressPhase:(id)arg1;
- (void)showProgressUI;
- (id)progressTitleForUpdatesCount:(unsigned long long)arg1 installCritical:(BOOL)arg2 installAll:(BOOL)arg3 installAdoptedManual:(BOOL)arg4;
- (void)setupLegacyProgressScreenBackground;
- (void)setupBlackScreenBackground;
- (void)dealloc;
- (id)init;

@end

