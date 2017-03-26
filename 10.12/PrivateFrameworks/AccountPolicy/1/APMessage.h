//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface APMessage : NSObject
{
    int _messageType;
    unsigned int _requestID;
    unsigned int _messageNumber;
    NSDictionary *_messageData;
    NSObject<OS_xpc_object> *_receivedXPCMessage;
}

+ (id)stringForMessageType:(int)arg1;
+ (id)stringForResult:(int)arg1;
+ (id)messageWithReceivedXPCMessage:(id)arg1;
+ (id)outgoingMessageWithType:(int)arg1 andData:(id)arg2;
+ (id)messageWithType:(int)arg1 data:(id)arg2 requestID:(unsigned int)arg3 messageNumber:(unsigned int)arg4 receivedXPCMessage:(id)arg5;
@property(readonly, copy) NSObject<OS_xpc_object> *receivedXPCMessage; // @synthesize receivedXPCMessage=_receivedXPCMessage;
@property(readonly) unsigned int messageNumber; // @synthesize messageNumber=_messageNumber;
@property(readonly) unsigned int requestID; // @synthesize requestID=_requestID;
@property(readonly) NSDictionary *messageData; // @synthesize messageData=_messageData;
@property(readonly) int messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)updateMessageDataWithEntriesFromDictionary:(id)arg1;
@property(readonly) NSString *messageTypeString;
- (id)xpcMessage;
@property(readonly) int resultCode;
- (id)sendToHelperAndReturnResponse;
- (id)sendWithReplyOnConnectionSync:(id)arg1 replyQueue:(id)arg2 error:(id *)arg3;
- (void)sendWithReplyOnConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendOnConnection:(id)arg1;
- (id)replyWithError:(id)arg1;
- (id)replyWithErrorCode:(long long)arg1 andFormat:(id)arg2;
- (id)replyWithErrorCode:(long long)arg1 andFailureReason:(id)arg2;
- (id)replyWithSuccess;
- (id)replyWithData:(id)arg1;
- (id)initWithReceivedXPCMessage:(id)arg1;
- (id)initOutgoingMessageWithType:(int)arg1 andData:(id)arg2;
- (id)initWithType:(int)arg1 data:(id)arg2 requestID:(unsigned int)arg3 messageNumber:(unsigned int)arg4 receivedXPCMessage:(id)arg5;

@end

