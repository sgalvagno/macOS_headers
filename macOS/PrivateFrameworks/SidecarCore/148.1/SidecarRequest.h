//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSProgressReporting-Protocol.h>
#import <SidecarCore/SidecarSessionDelegate-Protocol.h>
#import <SidecarCore/SidecarTransferDelegate-Protocol.h>

@class NSArray, NSData, NSError, NSMutableArray, NSProgress, NSString, SidecarDevice, SidecarService, SidecarSession, SidecarTransferReceiver;
@protocol SidecarMessage, SidecarRequestDelegate;

@interface SidecarRequest : NSObject <SidecarTransferDelegate, SidecarSessionDelegate, NSProgressReporting>
{
    id <SidecarRequestDelegate> _delegate;
    NSArray *_devices_deprecated;
    SidecarDevice *_device;
    SidecarSession *_session;
    NSArray *_items;
    NSError *_error;
    id <SidecarMessage> _message;
    NSProgress *_progress;
    SidecarService *_service;
    SidecarTransferReceiver *_transfer;
    NSMutableArray *_sendTransfers;
    long long _requestID;
    unsigned int _cancelled:1;
    unsigned int _finished:1;
    double _timeStart;
    double _timeAccept;
    double _timeTransfer;
    double _timeFinish;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) double timeFinish; // @synthesize timeFinish=_timeFinish;
@property(nonatomic) double timeTransfer; // @synthesize timeTransfer=_timeTransfer;
@property(nonatomic) double timeAccept; // @synthesize timeAccept=_timeAccept;
@property(nonatomic) double timeStart; // @synthesize timeStart=_timeStart;
@property(readonly, nonatomic) SidecarSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) id <SidecarMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) SidecarDevice *device; // @synthesize device=_device;
@property __weak id <SidecarRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accept;
- (id)sessionForDevice:(id)arg1;
- (void)sidecarSession:(id)arg1 invalidatedWithError:(id)arg2;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarTransfer:(id)arg1 receivedItems:(id)arg2;
- (void)sidecarTransfer:(id)arg1 didComplete:(id)arg2;
- (void)writeToPasteboard:(id)arg1;
- (void)readFromPasteboard:(id)arg1;
- (void)_sendMessage:(id)arg1;
- (void)sendItems:(id)arg1;
- (void)sendItems:(id)arg1 complete:(_Bool)arg2;
- (void)_sendItems:(id)arg1 complete:(_Bool)arg2;
- (void)startWithTransport:(long long)arg1;
- (void)_startWithTransport:(long long)arg1;
- (void)start;
- (void)cancel;
@property(readonly) NSString *localizedItemName;
@property(readonly) NSString *localizedDescription;
@property(retain) NSError *error; // @dynamic error;
@property(readonly) NSString *uniformTypeIdentifier;
@property(readonly) NSData *data; // @dynamic data;
- (void)setItems:(id)arg1;
@property(readonly) NSArray *items; // @dynamic items;
- (void)_finish;
@property(readonly, getter=isFinished) _Bool finished; // @dynamic finished;
@property(copy) NSArray *devices; // @dynamic devices;
- (void)_cancel;
@property(readonly, getter=isCancelled) _Bool cancelled; // @dynamic cancelled;
@property(readonly) SidecarService *service;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithSession:(id)arg1 message:(id)arg2;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (void)_messageTrace;
- (void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openStreamForType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openStreamForType:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)listenForStreamType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)listenForStreamType:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerStreamListeners;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

