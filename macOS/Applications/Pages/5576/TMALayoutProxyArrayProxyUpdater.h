//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMALayoutProxyArrayProxyDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol TMALayoutInspectingInspectorPaneController;

@interface TMALayoutProxyArrayProxyUpdater : NSObject <TMALayoutProxyArrayProxyDelegate>
{
    struct __CFRunLoopObserver *_runLoopObserver;
    id <TMALayoutInspectingInspectorPaneController> _layoutInspectingInspectorPaneController;
    NSMutableSet *_proxies;
}

@property(retain, nonatomic) NSMutableSet *proxies; // @synthesize proxies=_proxies;
@property(nonatomic) __weak id <TMALayoutInspectingInspectorPaneController> layoutInspectingInspectorPaneController; // @synthesize layoutInspectingInspectorPaneController=_layoutInspectingInspectorPaneController;
- (void).cxx_destruct;
- (void)p_clearRunLoopObserver;
- (void)p_invalidateInspectorOnNextRunLoopEntry;
- (void)layoutProxyArrayProxyNeedsUpdate:(id)arg1;
- (void)updateLayoutProxyArrayProxiesIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithLayoutInspectingInspectorPaneController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

