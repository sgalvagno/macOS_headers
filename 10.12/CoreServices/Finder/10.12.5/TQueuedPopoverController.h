//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPopoverController.h"

@interface TQueuedPopoverController : TPopoverController
{
    TThreadSafeQueue_de5de110 *_queue;
    unsigned long long _preferredEdge;
}

- (void)aboutToTearDownPopover;
- (void)showPopoverOverNode:(const struct TFENode *)arg1 browserViewController:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)closePopoverPriv;
- (void)showPopoverPriv;
- (id)initWithWidth:(double)arg1 andQueue:(TThreadSafeQueue_de5de110 *)arg2;
- (id)initWithQueue:(TThreadSafeQueue_de5de110 *)arg1;
- (id)init;

@end

