//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUAdminInstallController : NSObject
{
    NSObject<OS_dispatch_queue> *_installQueue;
    NSObject<OS_dispatch_queue> *_updatesToInstallStackQueue;
    NSMutableArray *_updatesToInstallStack;
}

+ (id)sharedAdminInstallController;
- (void)startInstallingAdminUpdates:(id)arg1 usingClientAuthorization:(struct AuthorizationOpaqueRef *)arg2 allowOnlyAppleSigned:(BOOL)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)_dumpAuthForDebugging:(struct AuthorizationOpaqueRef *)arg1;
- (void)_doPostDownloadActionsForAdminInitiatedUpdateForProduct:(id)arg1 usingClientAuthorization:(struct AuthorizationOpaqueRef *)arg2 withAction:(long long)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)_pushAdminUpdate:(id)arg1;
- (id)_popAdminUpdate;
- (id)init;

@end

