//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSNumber, NSString, RDCloudResourceLibraryStatus;

@protocol PACloudResourceLibraryStatusChanged

@optional
- (void)cloudLibraryResourceDownloadDidProgress:(NSNumber *)arg1 forResourceWithModelId:(NSNumber *)arg2 inDatabaseWithUuid:(NSString *)arg3;
- (void)cloudLibraryStatusChanged:(RDCloudResourceLibraryStatus *)arg1;
@end

