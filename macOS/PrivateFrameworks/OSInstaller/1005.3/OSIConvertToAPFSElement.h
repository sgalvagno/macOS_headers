//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSTimer;

@interface OSIConvertToAPFSElement : OSIInstallQueueElement
{
    double _timeSinceLastUpdate;
    NSTimer *_conversionTimer;
    double _conversionElapsedTime;
    float _currentProgress;
    BOOL _didRunTimer;
}

- (double)estimatedTimeToComplete;
- (id)operationName;
- (void)endTimer;
- (void)updateProgress;
- (void)startTimer;
- (void)manageProgress:(float)arg1;
- (void)reportData:(id)arg1 toInstallerDiagnosticsKey:(long long)arg2;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;

@end

