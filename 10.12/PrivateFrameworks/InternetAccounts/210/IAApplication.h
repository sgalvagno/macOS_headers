//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMutableDictionary, NSString;

@interface IAApplication : NSObject
{
    NSString *_bundleID;
    NSString *_displayName;
    NSString *_imagePath;
    NSImage *_image;
    NSMutableDictionary *_userInfo;
    BOOL _enabled;
    BOOL _alreadyEnabled;
}

+ (id)appWithBundleID:(id)arg1;
@property BOOL alreadyEnabled; // @synthesize alreadyEnabled=_alreadyEnabled;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)sortValue;
- (id)displayNameForData;
@property(readonly) NSImage *image;
- (id)associatedProviderID;
- (id)associatedPluginID;
- (id)initWithBundleID:(id)arg1;

@end

