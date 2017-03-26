//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDDiagnosticsManager : NSObject
{
}

+ (id)sharedManager;
- (void)clearSingleDiagnosticMessage:(long long)arg1;
- (void)recordCompletionOfQueueElement:(id)arg1 withDuration:(double)arg2;
- (void)recordBeginningOfQueueElement:(id)arg1;
- (void)recordDiagnosticMessage:(long long)arg1 withData:(id)arg2;
- (void)finishMessageTransport;
- (void)startMessageTransport;
- (void)finishInstall;
- (void)startNewInstall;

@end

