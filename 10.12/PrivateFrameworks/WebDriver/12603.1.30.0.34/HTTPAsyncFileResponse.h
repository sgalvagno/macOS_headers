//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/HTTPResponse-Protocol.h>

@class HTTPConnection, NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    BOOL aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned long long readBufferSize;
    unsigned long long readBufferOffset;
    unsigned long long readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    BOOL readSourceSuspended;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionDidClose;
- (BOOL)isAsynchronous;
- (id)filePath;
- (BOOL)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (BOOL)openFileIfNeeded;
- (BOOL)openFileAndSetupReadSource;
- (void)cancelReadSource;
- (void)resumeReadSource;
- (void)pauseReadSource;
- (void)processReadBuffer;
- (void)abort;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;

@end

