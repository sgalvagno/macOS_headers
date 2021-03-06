//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _sessionCompletionHandler;
    NSURLSession *_sessionForForegroundDownloads;
    NSObject<OS_dispatch_queue> *_startQueue;
    NSURLSession *_sessionForBackgroundDownloads;
}

+ (void)purgeExternalCookies;
+ (id)originalURLForTask:(id)arg1;
+ (long long)statusCodeForTask:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *sessionForBackgroundDownloads; // @synthesize sessionForBackgroundDownloads=_sessionForBackgroundDownloads;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue; // @synthesize startQueue=_startQueue;
@property(retain, nonatomic) NSURLSession *sessionForForegroundDownloads; // @synthesize sessionForForegroundDownloads=_sessionForForegroundDownloads;
- (BOOL)_subclassImplementsInstanceMethod:(SEL)arg1;
- (BOOL)_subclassImplementsDidFailWithError;
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;
- (BOOL)_subclassImplementsDataDidDownload;
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;
- (BOOL)_subclassImplementsURLDidDownload;
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_showCredentialsActionControllerForHost:(id)arg1 signIn:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType sessionCompletionHandler; // @synthesize sessionCompletionHandler=_sessionCompletionHandler;
- (void)startDownloadTaskForURL:(id)arg1 userInitiated:(BOOL)arg2 useBackgroundFetch:(BOOL)arg3 usePrivatePath:(id)arg4;
- (BOOL)_subclassImplementsConfigureSession;
- (void)configureSession:(id)arg1;
- (id)sessionForConfiguration:(id)arg1;
- (void)loadSessionsIfNeeded;
- (void)_assertSubclassRequirements;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

