//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
{
}

+ (id)connectionWithConnectedSocket:(int)arg1;
- (BOOL)writeCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)writeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

