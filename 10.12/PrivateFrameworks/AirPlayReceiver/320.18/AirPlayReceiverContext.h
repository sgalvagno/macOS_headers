//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AirPlayReceiverContext : NSObject
{
    struct AirPlayReceiverSessionPrivate *_session;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _sessionStarted;
    struct {
        unsigned int type;
        unsigned long long format;
        unsigned char loopback;
        unsigned char varispeed;
        unsigned char voice;
        unsigned char volumeControl;
        unsigned int activeType;
        struct AirPlayReceiverSessionPrivate *session;
        struct APReceiverAudioSessionPrivate *audioSession;
        struct AudioStreamBasicDescription asbd;
        struct OpaqueAUGraph *graph;
        int converterNode;
        struct ComponentInstanceRecord *converterUnit;
        int mixerNode;
        struct ComponentInstanceRecord *mixerUnit;
        int varispeedNode;
        struct ComponentInstanceRecord *varispeedUnit;
        int outputNode;
        struct ComponentInstanceRecord *outputUnit;
        unsigned char outputStarted;
        float outputVolume;
        NSObject<OS_dispatch_source> *ducker;
    } _mainAudioCtx;
    unsigned int _powerAssertion;
}

@end

