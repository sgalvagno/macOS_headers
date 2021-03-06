//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLUHTTPCookieStorage, NSURLSessionConfiguration;

@interface FLUSessionConfigurationManager : NSObject
{
    NSURLSessionConfiguration *_defaultSessionConfiguration;
    NSURLSessionConfiguration *_browserSessionConfiguration;
    NSURLSessionConfiguration *_loginSessionConfiguration;
    NSURLSessionConfiguration *_imageDownloadSessionConfiguration;
    NSURLSessionConfiguration *_videoDownloadSessionConfiguration;
    FLUHTTPCookieStorage *_defaultCookieStorage;
    FLUHTTPCookieStorage *_browserCookieStorage;
    FLUHTTPCookieStorage *_loginCookieStorage;
    FLUHTTPCookieStorage *_imageDownloadCookieStorage;
    FLUHTTPCookieStorage *_videoDownloadCookieStorage;
}

+ (id)shared;
@property(retain, nonatomic) FLUHTTPCookieStorage *videoDownloadCookieStorage; // @synthesize videoDownloadCookieStorage=_videoDownloadCookieStorage;
@property(retain, nonatomic) FLUHTTPCookieStorage *imageDownloadCookieStorage; // @synthesize imageDownloadCookieStorage=_imageDownloadCookieStorage;
@property(retain, nonatomic) FLUHTTPCookieStorage *loginCookieStorage; // @synthesize loginCookieStorage=_loginCookieStorage;
@property(retain, nonatomic) FLUHTTPCookieStorage *browserCookieStorage; // @synthesize browserCookieStorage=_browserCookieStorage;
@property(retain, nonatomic) FLUHTTPCookieStorage *defaultCookieStorage; // @synthesize defaultCookieStorage=_defaultCookieStorage;
@property(retain, nonatomic) NSURLSessionConfiguration *videoDownloadSessionConfiguration; // @synthesize videoDownloadSessionConfiguration=_videoDownloadSessionConfiguration;
@property(retain, nonatomic) NSURLSessionConfiguration *imageDownloadSessionConfiguration; // @synthesize imageDownloadSessionConfiguration=_imageDownloadSessionConfiguration;
@property(retain, nonatomic) NSURLSessionConfiguration *loginSessionConfiguration; // @synthesize loginSessionConfiguration=_loginSessionConfiguration;
@property(retain, nonatomic) NSURLSessionConfiguration *browserSessionConfiguration; // @synthesize browserSessionConfiguration=_browserSessionConfiguration;
@property(retain, nonatomic) NSURLSessionConfiguration *defaultSessionConfiguration; // @synthesize defaultSessionConfiguration=_defaultSessionConfiguration;
- (void).cxx_destruct;
- (id)init;

@end

