//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeAbstractWriteCalendarItemOperation.h>

#import <CalendarPersistence/CalMessageTraceableOpearation-Protocol.h>
#import <CalendarPersistence/CalRevertableOperation-Protocol.h>
#import <CalendarPersistence/CalWriteCalendarItemOperation-Protocol.h>

@class NSManagedObjectID;

@interface CalExchangeCreateTaskOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteCalendarItemOperation, CalRevertableOperation, CalMessageTraceableOpearation>
{
    NSManagedObjectID *_taskID;
}

- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)shouldDeletePendingOperation:(id)arg1;
- (id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)objectID;
- (id)initWithSessionID:(id)arg1 taskID:(id)arg2;

@end

