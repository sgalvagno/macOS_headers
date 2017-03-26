//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNotificationCenter, NSRunningApplication;

@interface NSWorkspace : NSObject
{
    NSNotificationCenter *notificationCenter;
}

+ (id)sharedWorkspace;
+ (void)_invalidateAccessibilityDisplayValues;
@property(readonly) NSRunningApplication *menuBarOwningApplication;
@property(readonly) NSRunningApplication *frontmostApplication;
- (id)automaticallyTerminatedApplications;
- (id)unterminatedApplications;
- (id)runningApplications;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)_getKVOHelperForKeyPath:(id)arg1 creating:(BOOL)arg2;
- (id)_URLForDuplicatingFileAtURL:(id)arg1;
- (BOOL)type:(id)arg1 conformsToType:(id)arg2;
- (BOOL)fileNameExtension:(id)arg1 isValidForType:(id)arg2;
- (id)preferredFileNameExtensionForType:(id)arg1;
- (BOOL)filenameExtension:(id)arg1 isValidForType:(id)arg2;
- (id)preferredFilenameExtensionForType:(id)arg1;
- (id)localizedDescriptionForType:(id)arg1;
- (id)typeOfFile:(id)arg1 error:(id *)arg2;
- (id)_copyApplicationDictionaryFromLSDictionary:(struct __CFDictionary *)arg1 constructingAppFromCorpse:(BOOL)arg2;
@property(readonly, copy) NSArray *fileLabels;
@property(readonly, copy) NSArray *fileLabelColors;
- (oneway void)resetProfiling;
- (oneway void)writeProfilingDataToPath:(id)arg1;
- (oneway void)stopProfiling;
- (oneway void)startProfiling;
- (void)unhideApplication;
- (BOOL)openFile:(id)arg1 operation:(int)arg2;
- (BOOL)unmountAndEjectDeviceAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)unmountAndEjectDeviceAtPath:(id)arg1;
- (BOOL)_volumeIsEjectableForRefNum:(short)arg1;
- (void)checkForRemovableMedia;
- (id)mountNewRemovableMedia;
- (id)mountedRemovableMedia;
- (id)mountedLocalVolumePaths;
- (BOOL)getFileSystemInfoForPath:(id)arg1 isRemovable:(char *)arg2 isWritable:(char *)arg3 isUnmountable:(char *)arg4 description:(id *)arg5 type:(id *)arg6;
- (BOOL)_volumeSupportsLongFilenamesAtPath:(id)arg1;
- (BOOL)_volumeSupportsLongFilenamesForRefNum:(short)arg1;
- (id)activeApplication;
- (id)launchedApplications;
- (void)_postSessionNotificationIfNeeded;
- (BOOL)_workspaceSessionIsActive;
- (void)_applicationStatusChange:(id)arg1;
- (void)hideOtherApplications;
- (void)findApplications;
- (BOOL)userDefaultsChanged;
- (void)noteUserDefaultsChanged;
- (BOOL)fileSystemChanged;
- (void)noteFileSystemChanged:(id)arg1;
- (void)noteFileSystemChanged;
- (BOOL)performFileOperation:(id)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4 tag:(long long *)arg5;
- (BOOL)_fileOperation:(long long)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4;
- (void)recycleURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)duplicateURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fullPathForApplication:(id)arg1;
- (id)_locationsForApplications;
- (id)_fullPathForService:(id)arg1;
- (BOOL)showSearchResultsForQueryString:(id)arg1;
- (void)activateFileViewerSelectingURLs:(id)arg1;
- (BOOL)selectFile:(id)arg1 inFileViewerRootedAtPath:(id)arg2;
- (id)desktopImageOptionsForScreen:(id)arg1;
- (id)desktopImageURLForScreen:(id)arg1;
- (BOOL)setDesktopImageURL:(id)arg1 forScreen:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)slideImage:(id)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (long long)extendPowerOffBy:(long long)arg1;
- (BOOL)isFilePackageAtPath:(id)arg1;
- (BOOL)getInfoForFile:(id)arg1 application:(id *)arg2 type:(id *)arg3;
- (BOOL)setIcon:(id)arg1 forFile:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)_sendFinderAppleEvent:(unsigned int)arg1 class:(unsigned int)arg2 file:(id)arg3;
- (BOOL)_sendFinderAppleEvent:(unsigned int)arg1 class:(unsigned int)arg2 URLs:(id)arg3 followSymlinks:(BOOL)arg4;
- (id)iconForFile:(id)arg1;
- (id)_iconForOSType:(unsigned int)arg1;
- (id)_iconForOSType:(unsigned int)arg1 creator:(unsigned int)arg2;
- (id)iconForFileType:(id)arg1;
- (id)_defaultDocIcon;
- (id)launchApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id *)arg4;
- (BOOL)launchApplication:(id)arg1 showIcon:(BOOL)arg2 autolaunch:(BOOL)arg3;
- (BOOL)launchApplication:(id)arg1;
- (BOOL)_launchService:(id)arg1 andWait:(BOOL)arg2;
- (BOOL)openFile:(id)arg1 fromImage:(id)arg2 at:(struct CGPoint)arg3 inView:(id)arg4;
- (BOOL)openTempFile:(id)arg1;
- (BOOL)openFile:(id)arg1 withApplication:(id)arg2 andDeactivate:(BOOL)arg3;
- (BOOL)_openFile:(id)arg1 withApplication:(id)arg2 asService:(BOOL)arg3 andWait:(BOOL)arg4 andDeactivate:(BOOL)arg5;
- (BOOL)openURL:(id)arg1;
- (void)dealloc;
- (void)_fileOperationCompleted:(long long)arg1;
- (id)_notificationCenterWithoutTriggeringCreation;
@property(readonly) NSNotificationCenter *notificationCenter;
- (id)iconForFiles:(id)arg1;
- (BOOL)openFile:(id)arg1;
- (BOOL)openFile:(id)arg1 withApplication:(id)arg2;
- (BOOL)launchAppWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 additionalEventParamDescriptor:(id)arg3 launchIdentifier:(id *)arg4;
- (BOOL)openURLs:(id)arg1 withAppBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id *)arg5;
- (BOOL)_openURLs:(id)arg1 withAppPath:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id *)arg5;
- (id)openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id)openURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id *)arg4;
- (id)_openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (struct __CFString *)_launchServicesArchictureStringFromNSBundleExecutableArchitecture:(long long)arg1;
- (id)absolutePathForAppBundleWithIdentifier:(id)arg1;
- (id)URLForApplicationToOpenURL:(id)arg1;
- (id)URLForApplicationWithBundleIdentifier:(id)arg1;
@property(readonly) BOOL accessibilityDisplayShouldReduceTransparency; // @dynamic accessibilityDisplayShouldReduceTransparency;
@property(readonly) BOOL accessibilityDisplayShouldDifferentiateWithoutColor; // @dynamic accessibilityDisplayShouldDifferentiateWithoutColor;
@property(readonly) BOOL accessibilityDisplayShouldIncreaseContrast; // @dynamic accessibilityDisplayShouldIncreaseContrast;
@property(readonly) BOOL accessibilityDisplayShouldReduceMotion; // @dynamic accessibilityDisplayShouldReduceMotion;
@property(readonly) BOOL accessibilityDisplayShouldInvertColors; // @dynamic accessibilityDisplayShouldInvertColors;
- (void)_sendFileSystemChangedNotificationForSavePanelInfo:(id)arg1;

@end

