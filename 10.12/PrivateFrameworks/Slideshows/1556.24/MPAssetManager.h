//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPAssetManager : NSObject
{
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (void)setInhibitSharedManagerInit:(BOOL)arg1;
+ (id)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1;
+ (id)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1;
+ (id)convertCGImageToBuffer:(struct CGImage *)arg1;
- (double)posterTimeForAssetAtPath:(id)arg1;
- (id)absolutePathFromPath:(id)arg1;
- (id)regionsOfInterestForAssetAtPath:(id)arg1;
- (id)regionsOfInterestForAsset:(struct CGImage *)arg1;
- (unsigned long long)mediaTypeForAssetAtPath:(id)arg1;
- (id)locationHierarchyForAssetAtPath:(id)arg1;
- (double)altitudeForAssetAtPath:(id)arg1;
- (double)longitudeForAssetAtPath:(id)arg1;
- (double)latitudeForAssetAtPath:(id)arg1;
- (id)keywordsForAssetAtPath:(id)arg1;
- (id)creationDateForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (double)durationForAssetAtPath:(id)arg1;
- (void)cacheAttributes:(id)arg1 forPath:(id)arg2;

@end

