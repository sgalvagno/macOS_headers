//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INCWatchdogTimer, INExtensionContextHost, NSArray, NSExtension, NSString;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject
{
    NSExtension *_extension;
    INExtensionContextHost *_contextHost;
    INCWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    NSArray *_extensionInputItems;
}

@property(retain, nonatomic) NSArray *extensionInputItems; // @synthesize extensionInputItems=_extensionInputItems;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_startExtensionConnectionForExtension:(id)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchMatchingSiriExtensionForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchExtensionContextHostForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scheduleContextTimer;
- (void)_setContextHost:(id)arg1;
- (id)_contextHost;
- (void)_resetContextTimer;
- (void)_resetExtensionContextHost;
- (void)startRequestForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

