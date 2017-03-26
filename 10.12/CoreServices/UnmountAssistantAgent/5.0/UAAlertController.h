//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAlertDelegate-Protocol.h"

@class NSString, UAAlert, UAVolume;
@protocol UAAlertControllerDelegate;

@interface UAAlertController : NSObject <NSAlertDelegate>
{
    UAAlert *_alert;
    int _alertType;
    id _delegate;
    UAVolume *_volume;
}

+ (id)alertControllerForVolume:(id)arg1 ofType:(int)arg2;
@property(readonly) int alertType; // @synthesize alertType=_alertType;
@property(readonly) UAVolume *volume; // @synthesize volume=_volume;
@property id <UAAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithVolume:(id)arg1 andType:(int)arg2;
- (void)confirmForceEject;
- (void)showTryingToEject;
- (void)hideTryingToEject;
- (void)displayVolumeWasUnmounted;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isVisible;
- (void)hideAlert;
- (void)displayAlert;
- (void)_volumeUnmountedDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_confirmForceEjectDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

