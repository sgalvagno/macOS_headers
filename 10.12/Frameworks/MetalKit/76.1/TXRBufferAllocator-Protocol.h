//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalKit/NSObject-Protocol.h>

@protocol TXRBuffer;

@protocol TXRBufferAllocator <NSObject>
- (id <TXRBuffer>)newBufferWithLength:(unsigned long long)arg1;

@optional
- (id <TXRBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(void (^)(void *, unsigned long long))arg3 error:(id *)arg4;
@end

