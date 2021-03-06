//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WorkflowNode.h"

@class Device, NSData, NSString, NSThread, ProgressMessage;

@interface ExternalFlashUpdateProcess : NSObject <WorkflowNode>
{
    id <WorkflowNodeDelegate> delegate;
    Device *device;
    NSThread *processThread;
    NSData *externalFlash;
    unsigned long long retryCount;
    ProgressMessage *progressState;
}

- (void).cxx_destruct;
- (void)ProgramExtFlash:(id)arg1;
- (_Bool)ProgramExternalFlashSectorAtStartAddress:(unsigned long long)arg1 withData:(id)arg2 withPercent:(float)arg3 withSeed:(float)arg4;
- (void)retry;
- (void)cancel;
- (void)start;
- (void)startWithContext:(id)arg1;
- (id)getTitle;
- (id)initWithDelegate:(id)arg1 withFlashData:(id)arg2 forUpdateDevice:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

