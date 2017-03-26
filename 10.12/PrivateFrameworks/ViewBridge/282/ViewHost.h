//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/HostOrService.h>

#import <ViewBridge/HostCallsAuxiliary-Protocol.h>

__attribute__((visibility("hidden")))
@interface ViewHost : HostOrService <HostCallsAuxiliary>
{
    unsigned int _mayAttemptCommandEquivalentAtWill:2;
}

- (struct __LSASN *)ultimateHostAppSerialNumber;
- (void)forwardEventToAccessoryView:(struct __CGEvent *)arg1 reply:(CDUnknownBlockType)arg2;
- (void)potentialCommandEquivalentHitRemoteView:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)potentialCommandEquivalentHitServiceApp:(struct __CGEvent *)arg1 from:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)joinPair:(id)arg1 isMidTunnel:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly) BOOL mayAttemptCommandEquivalentAtWill;
- (void)remoteViewBecameFirstResponderOnBehalfOf:(unsigned char)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)remoteViewKeyTestWindowBecameKeyWhileFirstResponder:(BOOL)arg1 inActiveApp:(BOOL)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)stealKeyFocus:(const char *)arg1 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg2;
- (void)remoteViewResignedFirstResponderInService:(id)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg4 inFavorOfAccessoryView:(BOOL)arg5;
- (void)remoteViewKeyTestWindowResignedKey;
- (void)dealloc;

@end

