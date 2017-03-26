//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCAccountSession, CKShareMetadata, NSURL;

@protocol BRCUserNotifier <NSObject>
- (void)showErroriCloudDriveAppNotVisibleForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(NSURL *)arg1 reply:(void (^)(BOOL))arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorServerNotReachableForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorDeviceOfflineForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorReasonUnknownForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)showJoinDialogForShareMetadata:(CKShareMetadata *)arg1 session:(BRCAccountSession *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)close;
- (void)moveToFront;
@end

