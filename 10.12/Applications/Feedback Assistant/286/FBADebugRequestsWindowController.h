//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FBARequestsLog, NSArrayController, NSTableView;

@interface FBADebugRequestsWindowController : NSWindowController
{
    NSTableView *_requestsTableView;
    FBARequestsLog *_requestsLog;
    NSArrayController *_requestsArrayController;
}

@property(retain) NSArrayController *requestsArrayController; // @synthesize requestsArrayController=_requestsArrayController;
@property(retain) FBARequestsLog *requestsLog; // @synthesize requestsLog=_requestsLog;
@property __weak NSTableView *requestsTableView; // @synthesize requestsTableView=_requestsTableView;
- (void).cxx_destruct;
- (void)selectRequestAtIndex:(id)arg1;
- (void)selectLastRequest;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)foo:(id)arg1;
- (void)windowDidLoad;
- (id)init;

@end

