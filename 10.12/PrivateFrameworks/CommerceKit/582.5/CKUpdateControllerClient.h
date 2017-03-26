//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISAvailableUpdatesObserver-Protocol.h>
#import <CommerceKit/ISOSUpdateProgressObserver-Protocol.h>
#import <CommerceKit/ISOSUpdateScanObserver-Protocol.h>

@interface CKUpdateControllerClient : NSObject <ISOSUpdateProgressObserver, ISAvailableUpdatesObserver, ISOSUpdateScanObserver>
{
    CDUnknownBlockType _osUpdateProgressHandler;
    CDUnknownBlockType _availableUpdatesObserverBlock;
    CDUnknownBlockType _osUpdateScanObserverBlock;
}

@property(copy) CDUnknownBlockType osUpdateScanObserverBlock; // @synthesize osUpdateScanObserverBlock=_osUpdateScanObserverBlock;
@property(copy) CDUnknownBlockType availableUpdatesObserverBlock; // @synthesize availableUpdatesObserverBlock=_availableUpdatesObserverBlock;
@property(copy) CDUnknownBlockType osUpdateProgressHandler; // @synthesize osUpdateProgressHandler=_osUpdateProgressHandler;
- (void).cxx_destruct;
- (void)osUpdateScanDidProgressWithPercentComplete:(float)arg1 isFinished:(BOOL)arg2 error:(id)arg3;
- (void)availableUpdatesDidChangedWithUpdates:(id)arg1 osUpdates:(id)arg2 badgeCount:(unsigned long long)arg3;
- (void)osUpdates:(id)arg1 changedProgress:(id)arg2;

@end

