//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SFAuthorization, WDXPCClient;

@interface WDFrameCapture : NSObject
{
    WDXPCClient *_xpcClient;
    NSDate *_timestamp;
    SFAuthorization *_authorization;
}

@property(copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (BOOL)stopFrameCaptureAndReturnError:(id *)arg1;
- (BOOL)startFrameCaptureWithDataLinkType:(long long)arg1 promiscuousMode:(BOOL)arg2 interface:(id)arg3 error:(id *)arg4;
- (BOOL)startCapturingInMonitorModeWithInterface:(id)arg1 channel:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithXPCClient:(id)arg1 authorization:(id)arg2;

@end

