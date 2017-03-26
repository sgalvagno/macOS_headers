//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XMPPRingBuffer : NSObject
{
    char *_buffer;
    unsigned long long _allocatedLength;
    unsigned long long _readHead;
    unsigned long long _writeHead;
}

- (unsigned long long)writeToBufferFromInputStream:(id)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)readData:(char **)arg1;
- (void)advanceRead:(unsigned long long)arg1;
- (unsigned long long)maxWriteLength;
- (unsigned long long)bytesInBuffer;
- (BOOL)bytesAvailableForReading;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;

@end

