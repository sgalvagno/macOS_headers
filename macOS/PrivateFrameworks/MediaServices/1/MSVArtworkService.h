//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject
{
    NSOperationQueue *_serviceThrottlingOperationQueue;
    NSXPCConnection *_serverConnection;
}

+ (id)sharedService;
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue; // @synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue;
- (void).cxx_destruct;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

