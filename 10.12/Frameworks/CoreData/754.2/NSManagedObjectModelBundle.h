//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)_modelForVersionHashes:(id)arg1;
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;
- (id)optimizedVersionURL;
- (id)currentVersionURL;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)modelVersions;
- (id)currentVersion;
- (id)versionHashInfo;
- (id)versionInfoDictionary;
- (id)bundle;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

