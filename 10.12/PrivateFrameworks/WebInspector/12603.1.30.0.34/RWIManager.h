//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/RWIBaseManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, RWIBaseManager;
@protocol RWIManagerDelegate;

@interface RWIManager : NSObject <RWIBaseManagerDelegate>
{
    id <RWIManagerDelegate> _delegate;
    RWIBaseManager *_baseManager;
    NSMutableDictionary *_inspectors;
    NSMutableDictionary *_channels;
    struct _AMDeviceNotificationContext *_notificationRef;
    int _notifyEnabledToken;
}

+ (id)sharedManager;
+ (void)initialize;
@property(nonatomic) __weak id <RWIManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receivedSetup:(id)arg1 forConnection:(id)arg2;
- (void)receivedData:(id)arg1 forDestination:(id)arg2;
- (id)_drivableForDestination:(id)arg1;
- (id)_debuggerForDestination:(id)arg1;
- (void)automaticInspectionCandidate:(id)arg1 sessionIdentifier:(id)arg2;
- (void)willRemoveDriver:(id)arg1;
- (void)didAddDriver:(id)arg1;
- (void)willRemoveDebuggable:(id)arg1;
- (void)didAddDebuggable:(id)arg1;
- (void)willRemoveApplication:(id)arg1;
- (void)didAddApplication:(id)arg1;
- (void)serviceConnectionDidClose:(id)arg1;
- (void)serviceConnectionClosed:(id)arg1;
- (void)_serviceConnectionClosed:(id)arg1;
- (void)socketDidCloseFromSession:(id)arg1;
- (void)socketDidCloseFromDebugger:(id)arg1;
- (void)socketSend:(id)arg1 fromSession:(id)arg2;
- (void)socketSend:(id)arg1 fromDebugger:(id)arg2;
- (void)socketSetupForSession:(id)arg1;
- (void)socketSetupForDebugger:(id)arg1 paused:(BOOL)arg2;
- (void)inspectorWindowWillClose:(id)arg1;
- (void)_rejectAutomaticInspection:(id)arg1 sessionIdentifier:(id)arg2;
- (void)_acceptAutomaticInspection:(id)arg1 response:(long long)arg2;
- (void)_tryAutomaticInspection:(id)arg1 sessionIdentifier:(id)arg2;
- (void)_removeCurrentMachineTarget;
- (void)_createCurrentMachineTarget;
- (void)_simulatorRunning:(id)arg1;
- (void)_createSimulatorConnection;
- (void)_removeSimulator;
- (void)_addSimulator;
- (id)_simulatorDevice;
- (void)_resubscribeForDeviceNotifications;
- (void)_removeDevices;
- (void)deviceNotification:(struct _AMDeviceNotificationInfo *)arg1;
- (void)targetHasBasicInformation:(id)arg1;
- (void)_addDevice:(struct _AMDevice *)arg1;
- (void)_removeDevice:(struct _AMDevice *)arg1;
- (void)_sendTargetRemovedEvent:(id)arg1;
- (void)_sendTargetAddedEvent:(id)arg1;
- (void)createDrivableForSession:(id)arg1 usingApplication:(id)arg2;
- (void)requestDriver:(id)arg1 shouldBeActive:(BOOL)arg2 forwardIfUnhandled:(BOOL)arg3;
- (void)indicateDebuggable:(id)arg1 enabled:(BOOL)arg2;
- (id)openInspectorForDebuggable:(id)arg1 paused:(BOOL)arg2;
@property(readonly, nonatomic) NSSet *inspectors; // @dynamic inspectors;
@property(readonly, nonatomic) NSSet *capableTargets; // @dynamic capableTargets;
@property(readonly, nonatomic) NSSet *readyTargets; // @dynamic readyTargets;
@property(readonly, nonatomic) NSSet *targets; // @dynamic targets;
- (void)dealloc;
- (id)init;
- (id)openInspectorForDebuggable:(id)arg1;
- (id)openInspectorForWebView:(id)arg1;
@property(readonly, nonatomic) NSSet *capableDevices; // @dynamic capableDevices;
@property(readonly, nonatomic) NSSet *readyDevices; // @dynamic readyDevices;
@property(readonly, nonatomic) NSSet *devices; // @dynamic devices;
- (id)currentMachine;
- (void)updateDriver:(id)arg1 toState:(BOOL)arg2;
- (void)unmanageDriver:(id)arg1;
- (id)manageDriver:(id)arg1 forTarget:(id)arg2;
- (void)unmanageDevice:(struct _AMDevice *)arg1;
- (id)manageDevice:(struct _AMDevice *)arg1;
- (id)deviceForAMDeviceRef:(struct _AMDevice *)arg1;
- (id)openChannelForDebuggable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

