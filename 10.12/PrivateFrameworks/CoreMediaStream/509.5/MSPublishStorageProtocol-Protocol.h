//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSStorageProtocol-Protocol.h>

@class MSAsset, NSArray, NSURL;
@protocol MSPublishStorageProtocolDelegate;

@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate;
- (void)abort;
- (void)computeHashForAsset:(MSAsset *)arg1;
- (void)publishAssets:(NSArray *)arg1 URL:(NSURL *)arg2;
@end

