//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PluginAPIImplementor;
@protocol DirectoryUtilityPlugin><NSObject;

@interface PluginItem : NSObject
{
    NSMutableDictionary *mDictionary;
    id <DirectoryUtilityPlugin><NSObject> mPlugin;
    PluginAPIImplementor *mAPIImplementor;
}

- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)showSheetWithTitle:(id)arg1 andMessage:(id)arg2 sender:(id)arg3;
- (BOOL)shouldAllowNodeNameOnSearchPolicy:(id)arg1;
- (BOOL)isDirty;
- (BOOL)applicationWillLockSavingChanges:(BOOL)arg1;
- (BOOL)applicationWillQuitSavingChanges:(BOOL)arg1;
- (BOOL)revertChanges;
- (BOOL)saveChanges;
- (BOOL)saveEnableState;
- (void)configureButtonClicked:(id)arg1;
- (BOOL)canConfigure;
- (BOOL)selfTest;
- (BOOL)canSelfTest;
- (id)pluginVersion;
- (id)pluginPrefix;
- (id)pluginName;
- (BOOL)isEnabled;
- (BOOL)canSetEnabledForLocation:(id)arg1;
- (BOOL)isEnabledForLocation:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forLocation:(id)arg2;
- (void)setPluginAPIImplementor:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

