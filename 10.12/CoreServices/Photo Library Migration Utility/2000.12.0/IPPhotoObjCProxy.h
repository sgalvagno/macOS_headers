//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "KHPhotoInfoProtocol-Protocol.h"
#import "RKTerminationDelegateProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol KHEventInfoProtocol, MapPointOfInterestProtocol;

@interface IPPhotoObjCProxy : NSObject <KHPhotoInfoProtocol, RKTerminationDelegateProtocol>
{
    struct IPPhotoInfo *mPhotoInfo;
    NSNumber *mUniqueID;
}

+ (unsigned long long)messageCategory;
+ (id)proxyWithPhotoInfo:(struct IPPhotoInfo *)arg1;
+ (id)rotatedCIImage:(id)arg1 rotation:(long long)arg2;
+ (struct CGImage *)createRotatedImage:(struct CGImage *)arg1 rotation:(long long)arg2;
+ (struct CGImage *)createImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (id)transformForImageRotation:(long long)arg1 withRect:(struct CGRect *)arg2;
- (id)removeKeyword:(id)arg1;
- (id)handleDuplicateScriptCommand:(id)arg1;
- (id)handleRemoveScriptCommand:(id)arg1;
- (id)handleAddScriptCommand:(id)arg1;
- (id)handleGeocodeScriptCommand:(id)arg1;
- (id)aeKeywords;
- (void)setRating:(id)arg1;
- (id)rating;
- (void)setGpsAltitude:(id)arg1;
- (id)gpsAltitude;
- (void)setGpsLongitude:(id)arg1;
- (void)setGpsLatitude:(id)arg1;
- (void)setGpsLatitude:(id)arg1 longitude:(id)arg2;
- (id)gpsLatitude;
- (id)gpsLongitude;
- (void)setAeDate:(id)arg1;
- (id)aeDate;
- (id)aePreviewFileName;
- (id)aeThumbFileName;
- (id)aeImageFileName;
- (void)setAeTitle:(id)arg1;
- (id)aeTitle;
- (id)previewPath;
- (id)thumbPath;
- (id)originalPath;
- (id)imagePath;
- (void)setAnnotation:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)height;
- (id)width;
- (id)aeDimensions;
- (id)uniqueID;
- (unsigned long long)applicationShouldTerminate;
- (void)setPhotoInfo:(struct IPPhotoInfo *)arg1;
- (struct IPPhotoInfo *)photoInfo;
- (void)dealloc;
- (id)initWithPhotoInfo:(struct IPPhotoInfo *)arg1;
- (id)objectSpecifier;
- (struct CGImage *)_createImageForSize:(struct CGSize)arg1 quality:(int)arg2;
- (struct CGImage *)_createImageForType:(int)arg1;
@property(readonly) id <KHEventInfoProtocol> eventInfo;
@property(readonly) NSString *eventUid;
@property(readonly) NSArray *faceInfos;
- (id)location;
- (id)locationMetaDataForLanguage:(id)arg1;
@property(readonly) id <MapPointOfInterestProtocol> locationMetaData;
@property(readonly) NSDictionary *exifMetaData;
@property(readonly) unsigned long long currentFileSize;
- (id)currentFileModifiedDate;
- (id)currentFileCreationDate;
@property(readonly) NSString *currentFilePath;
@property(readonly) NSString *uid;
@property(readonly) NSString *title;
@property(readonly) NSString *annotation;
@property(readonly) NSArray *keywordInfos;
@property(readonly) NSDate *photoModificationDate;
@property(readonly) NSDate *photoDate;
@property(readonly) double pageLayoutNormalizedRating;
@property(readonly) int orientation;
@property(readonly) double imageAspectRatio;
@property(readonly) struct CGSize imageSize;
- (BOOL)imageValidSuitableForSize:(struct CGSize)arg1;
- (BOOL)imageValid;
- (BOOL)imageExistsSuitableForSize:(struct CGSize)arg1;
- (BOOL)imageExists;
- (struct CGSize)suitableImageSizeForSize:(struct CGSize)arg1;
- (struct CGImage *)_createCGImageWithImageSize:(struct CGSize)arg1 quality:(int)arg2 withObserverTarget:(id)arg3 selector:(SEL)arg4 object:(id)arg5;
- (struct CGImage *)createCGImageSuitableForSize:(struct CGSize)arg1 quality:(int)arg2 withObserverTarget:(id)arg3 selector:(SEL)arg4 object:(id)arg5;
- (struct CGImage *)createCGImageSuitableForSize:(struct CGSize)arg1 withObserverTarget:(id)arg2 selector:(SEL)arg3 object:(id)arg4;
- (struct CGImage *)createCGImageSuitableForSize:(struct CGSize)arg1 quality:(int)arg2;
- (struct CGImage *)createCGImageSuitableForSize:(struct CGSize)arg1;
- (struct CGImage *)createCGImageWithObserverTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (struct CGImage *)createCGImage;
- (void)cancelCGImageSuitableForSize:(struct CGSize)arg1 withObserverTarget:(id)arg2;
- (void)cancelCGImageWithObserverTarget:(id)arg1;
- (void)encodeWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

