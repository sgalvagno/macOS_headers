//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AVCPacketFilter;

@protocol AVCPacketRelayConnectionProtocol
@property(retain) AVCPacketFilter *packetFilter;
@property(copy) CDUnknownBlockType readHandler;
@property BOOL isDemuxNeeded;
@property(readonly) unsigned char type;
- (BOOL)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (void)readyToRead;
- (int)stop;
- (int)start;
@end

