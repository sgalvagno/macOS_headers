//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMBWebKitViewController, NSError, NSString, NSURLResponse;

@protocol MBWebKitViewControllerDelegate <NSObject>

@optional
- (void)mbWebkitViewControllerDidReceiveResponse:(MMMBWebKitViewController *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)mbWebkitViewControllerDidFail:(MMMBWebKitViewController *)arg1 error:(NSError *)arg2;
- (void)mbWebkitViewControllerDidFinishLoading:(MMMBWebKitViewController *)arg1;
- (void)mbWebkitViewControllerDidSucceed:(MMMBWebKitViewController *)arg1;
- (void)mbWebkitViewControllerDidDismiss:(MMMBWebKitViewController *)arg1 reason:(NSString *)arg2;
- (void)mbWebkitViewControllerDidCancel:(MMMBWebKitViewController *)arg1;
@end

