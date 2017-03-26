//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMenu, NSMenuItem, NSMutableDictionary, NSString, NSTabView, NSWindow;

@interface NUController : NSObject
{
    NSWindow *window;
    NSTabView *tabView;
    NSMenu *menu;
    NSMenuItem *helpMenuItem;
    NSMenuItem *hideNetworkUtilityMenuItem;
    NSMenuItem *servicesMenuItem;
    NSMenuItem *hideOthersMenuItem;
    NSMenuItem *showAllMenuItem;
    NSMenuItem *minimizeMenuItem;
    NSMenuItem *bringAllToFrontMenuItem;
    NSMenuItem *printMenuItem;
    BOOL runningFromCD;
    NSMutableDictionary *tabViewDictionary;
    NSString *currentTabViewIdentifier;
    NSLock *suddenTermCounterLock;
    long long suddenTermCounter;
    NSLock *pendingCleanupLock;
    BOOL pendingCleanup;
}

+ (void)initialize;
@property BOOL pendingCleanup; // @synthesize pendingCleanup;
@property(retain) NSLock *pendingCleanupLock; // @synthesize pendingCleanupLock;
@property long long suddenTermCounter; // @synthesize suddenTermCounter;
@property(retain) NSLock *suddenTermCounterLock; // @synthesize suddenTermCounterLock;
@property BOOL runningFromCD; // @synthesize runningFromCD;
- (void)nuDisableSuddenTermination;
- (void)nuEnableSuddenTermination;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)lookup:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)traceroute:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)whois:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)portScan:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)ping:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)displayErrorDialogWithMessage:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)print:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)awakeFromNib;
- (void)registerObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)showInfoPanel:(id)arg1;
- (void)saveChangesToUserDefaults:(BOOL)arg1;
- (BOOL)rootVolumeIsReadOnly;
- (BOOL)checkRunningFromCD;

@end

