//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSError, NSURL;

@protocol PAAVAssetResponse <NSObject>
@property(readonly) NSError *error;
@property(readonly) AVAsset *asset;
@property(readonly) NSURL *assetURL;
- (BOOL)canceled;
- (BOOL)successful;
@end

