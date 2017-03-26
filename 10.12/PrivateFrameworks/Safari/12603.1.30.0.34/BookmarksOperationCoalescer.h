//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/BookmarksOperationCoalescingTimerDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol BookmarksOperationCoalescerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BookmarksOperationCoalescer : NSObject <BookmarksOperationCoalescingTimerDelegate>
{
    NSMutableArray *_timers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <BookmarksOperationCoalescerDelegate> _delegate;
}

@property __weak id <BookmarksOperationCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bookmarksOperationCoalescingTimerDidFire:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

