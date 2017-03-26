//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSTimer, NSURL;

__attribute__((visibility("hidden")))
@interface ExtensionBlacklist : NSObject
{
    NSArray *_appExtensionEntries;
    NSArray *_extensionEntries;
    NSURL *_xProtectMetaPlistURL;
    NSDate *_previousXProtectMetaPlistModificationDate;
    NSTimer *_xProtectUpdateTimer;
    BOOL _activelyReading;
}

+ (id)sharedBlacklist;
- (void).cxx_destruct;
- (id)test_initWithXProtectURL:(id)arg1 finishedLoadingHandler:(CDUnknownBlockType)arg2;
- (void)_updateBlacklists:(id)arg1;
- (void)_updateLegacyExtensionBlacklist:(id)arg1;
- (BOOL)containsAppExtensionWithDeveloperIdentifier:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3;
- (BOOL)containsExtensionWithDeveloperIdentifier:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3;
- (void)_updateFromXProtectIfNecessary:(id)arg1;
- (void)_readBlacklist:(int)arg1 finishedLoadingHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithXProtectURL:(id)arg1;

@end

