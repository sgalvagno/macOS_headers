//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCRemoteViewServiceProtocol-Protocol.h>
#import <NotificationCenter/PKModularService-Protocol.h>

@class NCRemoteViewService, NCRemoteViewServiceViewController, NSDictionary, NSExtensionContext, NSString;
@protocol NCRemoteViewServiceHostProtocol, OS_dispatch_source;

@interface NCRemoteViewServiceSubsystem : NSObject <PKModularService, NCRemoteViewServiceProtocol>
{
    NSObject<OS_dispatch_source> *_inactive_timer;
    _Bool _exitOnIdle;
    _Bool _activeForSnapshotOnly;
    CDUnknownBlockType _deferredReadyBlock;
    unsigned int _deferredDisplayID;
    BOOL _darkAppearance;
    _Bool _active;
    NCRemoteViewServiceViewController *_viewController;
    NSDictionary *_configuration;
    NSExtensionContext *_currentExtensionContext;
    NCRemoteViewService *_viewService;
    struct CGSize _maxSize;
    struct NSEdgeInsets _marginInsets;
}

+ (void)unregisterService:(id)arg1;
+ (id)serviceForContext:(id)arg1;
+ (id)anyService;
+ (id)initForPlugInKit;
@property _Bool active; // @synthesize active=_active;
@property __weak NCRemoteViewService *viewService; // @synthesize viewService=_viewService;
@property __weak NSExtensionContext *currentExtensionContext; // @synthesize currentExtensionContext=_currentExtensionContext;
@property(readonly) BOOL darkAppearance; // @synthesize darkAppearance=_darkAppearance;
@property(readonly) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly) struct NSEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(readonly) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (void).cxx_destruct;
- (void)_getSnapshotResult:(unsigned long long)arg1;
- (void)_sendSnapshotResult:(id)arg1 scale:(double)arg2 result:(unsigned long long)arg3;
- (void)_exitOnTimeout;
- (void)remoteViewServiceDestorySnippet;
- (void)remoteViewServiceExitOnIdle;
- (void)remoteViewServiceSimulateCrash;
- (void)remoteViewServiceRequestDebugSnapshot:(CDUnknownBlockType)arg1;
- (void)remoteViewServiceRequestSnapshot:(double)arg1;
- (void)remoteViewServiceDeactivateNow;
- (void)remoteViewServiceChangedDisplay:(unsigned int)arg1;
- (void)remoteViewServiceChangedActiveState:(_Bool)arg1;
- (void)remoteViewServiceReadyForDisplay:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)remoteViewServiceConfigure:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) id <NCRemoteViewServiceHostProtocol> host;
@property(readonly, nonatomic) NCRemoteViewServiceViewController *viewController; // @synthesize viewController=_viewController;
- (void)installViewControllerInWindow:(id)arg1;
- (Class)viewControllerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

