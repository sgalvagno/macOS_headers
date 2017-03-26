//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XMPPCore/XMPPStreamSession.h>

@class NSDate, NSDictionary, NSInputStream, NSOutputStream, NSString, XMPPRingBuffer;

@interface FileTransferSession : XMPPStreamSession
{
    NSString *_filename;
    NSString *_localPath;
    NSString *_downloadPath;
    NSString *_fileTransferGUID;
    NSDictionary *_metadata;
    unsigned long long _dataForkBytes;
    unsigned long long _rsrcForkBytes;
    unsigned long long _totalBytes;
    unsigned long long _amountWritten;
    unsigned long long _lastWritten;
    NSInputStream *_outgoingFile;
    BOOL _fileStreamAvailable;
    BOOL _socketStreamAvailable;
    XMPPRingBuffer *_incomingBuffer;
    BOOL _readyForData;
    NSDate *_needsDataLastCalled;
    double _lastNeedsDataGap;
    float _bufferServiceRate;
    NSOutputStream *_filestream;
    BOOL _transmitRsrcFork;
    unsigned int _totalSubpaths;
}

+ (id)resourceHandlingNamespace;
+ (id)filterMetadata:(id)arg1 forFile:(id)arg2;
+ (id)namespace;
- (void)stop;
- (void)_sendFailTransferWithReason:(int)arg1;
- (void)_sendUpdateTransfer;
- (void)_sendEndTransfer;
- (void)_sendStartTransfer;
- (void)receivedBytes:(char *)arg1 length:(unsigned int)arg2;
- (void)writeIncomingAcceptResponse:(id)arg1;
- (id)initWithIncomingNode:(id)arg1 streamManager:(id)arg2;
- (void)writeProfileOptions:(id)arg1;
- (void)setTransmitResourceForkIfNeeded:(BOOL)arg1;
- (id)initAsOutgoingWithGUID:(id)arg1 streamManager:(id)arg2;
- (void)publishAndProposeOutgoingSession;
- (void)registerAsIncomingWithAccount:(id)arg1 autoStart:(BOOL)arg2;
- (BOOL)needsPreparation;
- (void)streamClosed;
- (void)disconnectedWithError:(id)arg1;
- (void)disconnectedWithReason:(int)arg1;
- (void)couldNotConnect:(int)arg1;
- (void)_cleanup;
- (void)finishedWritingBytes;
- (void)refillBuffer;
- (id)_newOutgoingFile;
- (id)_newIncomingFile;
- (void)_byteTransferCompleted;
- (void)_setupMetadata;
- (void)connected;
- (id)_hexForKey:(id)arg1 inDict:(id)arg2;
- (id)metadata;
- (id)fileTransferGUID;
- (void)dealloc;

@end

