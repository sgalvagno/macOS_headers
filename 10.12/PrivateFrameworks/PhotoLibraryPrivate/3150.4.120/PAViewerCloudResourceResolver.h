//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/PACloudResourceResolver.h>

@class NSDictionary;

@interface PAViewerCloudResourceResolver : PACloudResourceResolver
{
    NSDictionary *_cloudResourcesByIdentifier;
}

- (void).cxx_destruct;
- (void)enumerateCloudResourcesForAudioVideo:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateCloudResourcesForImage:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)cloudResourceForResourceType:(unsigned long long)arg1 model:(id)arg2;
- (id)bestCloudResourceForModel:(id)arg1 withTypes:(id)arg2;
- (BOOL)checkModelResourceIsMissing:(id)arg1 type:(unsigned char)arg2 tag:(id)arg3;
- (BOOL)checkMasterIsMissing:(id)arg1;
- (void)enumerateCloudResourcesForVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForVersions:(id)arg1;

@end

