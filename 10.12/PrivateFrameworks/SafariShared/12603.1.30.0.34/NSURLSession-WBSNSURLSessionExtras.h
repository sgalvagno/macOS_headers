//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (WBSNSURLSessionExtras)
+ (id)safari_sharedSession;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

