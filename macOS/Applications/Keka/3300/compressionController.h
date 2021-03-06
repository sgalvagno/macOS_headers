//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "taskMulti.h"

@class NSArray, NSButton, NSFileHandle, NSImageView, NSPipe, NSProgressIndicator, NSString, NSTask, NSTextField, NSTimer, NSView;

@interface compressionController : taskMulti
{
    id activity;
    id activeSaveOpenSheet;
    _Bool hasFileAccess;
    NSArray *filesList;
    NSArray *temporaryAccess;
    NSString *filesPassword;
    NSString *newPath;
    NSString *commonPath;
    NSString *format;
    NSString *extension;
    BOOL tarball;
    NSString *split;
    NSString *password;
    int method;
    BOOL solid;
    BOOL encryption;
    BOOL encryptionAES256;
    BOOL single;
    BOOL exclude;
    NSString *volumeName;
    BOOL needsDMGConversion;
    int binary;
    int filesCount;
    int currentFile;
    int currentProgress;
    BOOL onPause;
    BOOL onManualPause;
    BOOL onQueue;
    BOOL isCancelled;
    BOOL someError;
    int errorCode;
    BOOL badgeProgress;
    _Bool isLaunchPathVerified;
    _Bool isNSTaskLaunched;
    NSTask *compressionTask;
    NSPipe *compressionPipeOut;
    NSPipe *compressionPipeError;
    NSPipe *compressionPipeIn;
    NSFileHandle *compressionHandleOut;
    NSFileHandle *compressionHandleError;
    NSFileHandle *compressionHandleIn;
    NSTimer *compressionTimer;
    int buffer;
    unsigned long long totalBytes;
    unsigned long long bufferBytes;
    NSView *compressionView;
    NSProgressIndicator *progressIndicator;
    NSTextField *statusText;
    NSTextField *commentErrorText;
    NSTextField *timeText;
    NSImageView *icon;
    NSImageView *passwordIcon;
    NSButton *stopButton;
    NSButton *pauseButton;
    int seconds;
    int substractSeconds;
    BOOL updateSeconds;
}

+ (void)setFormatAndExtension:(id)arg1;
- (void)exportPassword;
- (void)deleteFiles;
- (void)deleteIncompleteFiles;
- (void)removeTask;
- (void)finalizeTask;
- (void)convertDMG;
- (void)compression:(id)arg1;
- (void)setCompressionName:(id)arg1;
- (void)startCompression:(id)arg1;
- (id)iso:(id)arg1 path:(id)arg2;
- (id)dmg:(id)arg1 path:(id)arg2 doConversion:(BOOL)arg3;
- (id)lzip:(id)arg1 path:(id)arg2;
- (id)rar:(id)arg1 path:(id)arg2;
- (id)tar:(id)arg1 path:(id)arg2;
- (id)pigz:(id)arg1 path:(id)arg2;
- (id)szip:(id)arg1 path:(id)arg2;
- (id)isTarballNeededForDrop:(id)arg1;
- (void)setTarball:(BOOL)arg1;
- (void)setTarballIfNeeded:(id)arg1;
- (BOOL)isTarballNeeded:(id)arg1 checkCurrent:(BOOL)arg2;
- (BOOL)isTarballNeeded:(id)arg1;
- (id)clearTarballExtension:(id)arg1;
- (id)getTarballExtension:(id)arg1;
- (id)setLzmaMethod;
- (id)setLzmaMethod:(BOOL)arg1;
- (id)setRarMethod;
- (id)setMethod;
- (long long)splitSizeToSI:(double)arg1 unit:(int)arg2;
- (long long)splitSizeToBytes;
- (id)setSplit:(id)arg1 inUnit:(id)arg2;
- (id)setSplit;
- (void)timer;
- (void)taskRunning;
- (void)reader:(id)arg1;
- (void)progressDelegate:(id)arg1;
- (void)stopChoseName;
- (void)stopError;
- (void)stop;
- (void)pause;
- (void)updateWindow:(id)arg1;
- (void)updatePauseButton;
- (void)updateStopButton;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setView;
- (id)init;

@end

