//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IFGlobals : NSObject
{
}

+ (id)stringForNVRAMVariable:(id)arg1;
+ (BOOL)dontWriteFiles;
+ (BOOL)enableP2PDownloads;
+ (BOOL)isPatchDiagnosticEnabled;
+ (BOOL)isPFScriptModuleEnabled;
+ (BOOL)isDittoEnabled;
+ (void)setSpecialFlags:(id)arg1;
+ (BOOL)debugChoiceAttrEngine;
+ (BOOL)lowMemorySituation;
+ (void)logMemStats;
+ (void)logSystemInfo;
+ (id)OSInstallImageLocation;
+ (double)installFrameworkVersion;
+ (id)installFrameworkVersionString;
+ (id)autoPilotTarget;
+ (BOOL)autoPilot;
+ (BOOL)debugReadOnlyRoot;
+ (BOOL)showVerboseLog;
+ (id)activeLanguage;
+ (BOOL)shouldShowPerfStats;
+ (BOOL)shouldDisableLowPriorityIO;
+ (BOOL)runningOnPhysicalIntel;
+ (BOOL)runningInRosetta;
+ (BOOL)isCPUSWBuildTrain;
+ (BOOL)runningFromInstallMedia;
+ (id)raidOperationQueue;
+ (BOOL)shouldExecuteScripts;
+ (BOOL)hasAppleIPAddress;
+ (void)resetIFGlobalsCache;
+ (id)hardwareModel;

@end

