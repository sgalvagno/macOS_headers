//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryConnectionProxy;
@protocol OS_dispatch_queue, WBSHistoryAccessSessionProtocol;

@interface WBSHistoryAccessSessionProxy : NSObject
{
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id <WBSHistoryAccessSessionProtocol> _historyAccessSession;
    NSObject<OS_dispatch_queue> *_historyAccessSessionAccessQueue;
}

- (void).cxx_destruct;
- (void)_getHistoryAccessSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

