//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CUPairedPeer, CUPairingIdentity;

@protocol CUPairingManagerXPCInterface

@optional
- (void)pairedPeerChanged:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerRemoved:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerAdded:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
- (void)pairingIdentityCreated:(CUPairingIdentity *)arg1 options:(unsigned long long)arg2;
@end

