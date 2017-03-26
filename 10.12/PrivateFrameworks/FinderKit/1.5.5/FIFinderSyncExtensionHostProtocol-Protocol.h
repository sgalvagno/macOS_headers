//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol FIFinderSyncExtensionHostProtocol <NSObject>
- (void)setBadgeIdentifiersForURLs:(NSArray *)arg1;
- (void)setBadgeImageDictionary:(NSDictionary *)arg1 label:(NSString *)arg2 forIdentifier:(NSString *)arg3;
- (void)setToolbarItemName:(NSString *)arg1 imageData:(NSData *)arg2 isTemplate:(_Bool)arg3 toolTip:(NSString *)arg4;
- (void)unregisterForDirectoryAtURL:(NSURL *)arg1;
- (void)registerForDirectoryAtURL:(NSURL *)arg1;
@end

