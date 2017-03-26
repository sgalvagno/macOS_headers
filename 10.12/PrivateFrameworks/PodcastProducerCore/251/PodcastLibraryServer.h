//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PodcastProducerCore/NSCopying-Protocol.h>

@class NSString;

@interface PodcastLibraryServer : NSObject <NSCopying>
{
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useKerberos;
}

@property BOOL useKerberos; // @synthesize useKerberos=_useKerberos;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *hostname; // @synthesize hostname=_hostname;
- (id)connectionDescription;
- (id)unsecureURLForPath:(id)arg1;
- (id)urlForPath:(id)arg1;
- (id)urlForAction:(id)arg1 withBaseURL:(id)arg2;
- (id)unsecureURLForAction:(id)arg1;
- (id)urlForAction:(id)arg1;
- (id)unsecureBaseURL;
- (id)baseURL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHostname:(id)arg1;
- (id)init;

@end

