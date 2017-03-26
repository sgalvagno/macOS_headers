//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/LiTransport-Protocol.h>

@class LiConnection, LiStringAtomCoder, LiTransportDecoder, LiTransportEncoder, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface LiXPC : NSObject <LiTransport>
{
    int _receiveLock;
    BOOL _protocolVersionSent;
    BOOL _protocolVersionReceivedAndAccepted;
    int _remotePID;
    NSString *_name;
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_targetQueue;
    LiTransportEncoder *_encoder;
    LiTransportDecoder *_decoder;
    LiConnection *_connection;
    CDUnknownBlockType _closeHandler;
    CDUnknownBlockType _terminateHandler;
    CDUnknownBlockType _messageReceivedHandler;
    LiStringAtomCoder *_stringAtomCoder;
    unsigned long long _clientId;
}

@property(nonatomic) int remotePID; // @synthesize remotePID=_remotePID;
@property(nonatomic) unsigned long long clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) LiStringAtomCoder *stringAtomCoder; // @synthesize stringAtomCoder=_stringAtomCoder;
@property(copy, nonatomic) CDUnknownBlockType messageReceivedHandler; // @synthesize messageReceivedHandler=_messageReceivedHandler;
@property(copy, nonatomic) CDUnknownBlockType terminateHandler; // @synthesize terminateHandler=_terminateHandler;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(nonatomic) __weak LiConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BOOL protocolVersionReceivedAndAccepted; // @synthesize protocolVersionReceivedAndAccepted=_protocolVersionReceivedAndAccepted;
@property(nonatomic) BOOL protocolVersionSent; // @synthesize protocolVersionSent=_protocolVersionSent;
@property(retain, nonatomic) LiTransportDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) LiTransportEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *conn; // @synthesize conn=_conn;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)dispatchMessage:(id)arg1 forLibrary:(id)arg2;
- (void)stop;
- (void)stopNoLock;
- (void)start;
- (id)decodeMessage:(id)arg1;
- (BOOL)checkProtocolVersion:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2 name:(id)arg3 clientId:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

