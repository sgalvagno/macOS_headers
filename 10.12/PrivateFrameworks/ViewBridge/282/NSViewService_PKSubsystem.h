//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/PKModularService-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSViewService_PKSubsystem : NSObject <PKModularService>
{
}

+ (id)initForPlugInKit;
+ (id)_initForPlugInKit;
+ (BOOL)hasSDK:(id)arg1;
+ (BOOL)dictionary:(id)arg1 hasAdditionalService:(id)arg2;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

