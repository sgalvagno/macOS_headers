//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/CWEventDelegate-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SiriCoreWLANDelegate : NSObject <CWEventDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

+ (BOOL)isWiFiEnabled;
+ (id)sharedWLANDelegate;
- (void).cxx_destruct;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)addOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

