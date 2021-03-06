//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface RPMediaControlSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _registeredMediaControlInterest;
    unsigned long long _mediaControlFlags;
    CDUnknownBlockType _mediaControlFlagsChangedHandler;
    id <RPMessageable> _messenger;
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType mediaControlFlagsChangedHandler; // @synthesize mediaControlFlagsChangedHandler=_mediaControlFlagsChangedHandler;
@property(readonly, nonatomic) unsigned long long mediaControlFlags; // @synthesize mediaControlFlags=_mediaControlFlags;
- (void).cxx_destruct;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleMediaControlEvent:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

