//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHAPhotoVisionPhotoKitBridge : NSObject
{
}

+ (void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;
+ (id)pvFaceCropFromPHFaceCrop:(id)arg1;
+ (id)phFaceCropsFromPVFaceCrops:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFaceCropFromPVFaceCrop:(id)arg1 withFetchOptions:(id)arg2;
+ (id)pvFaceGroupsSetFromPHFaceGroups:(id)arg1;
+ (id)pvFaceGroupsArrayFromPHFaceGroups:(id)arg1;
+ (id)pvFaceGroupsSetFromPHFetchResult:(id)arg1;
+ (id)pvFaceGroupsArrayFromPHFetchResult:(id)arg1;
+ (id)pvFaceGroupFromPHFaceGroup:(id)arg1;
+ (id)pvPersonsSetFromPHPersons:(id)arg1;
+ (id)pvPersonsArrayFromPHPersons:(id)arg1;
+ (id)pvPersonsSetFromPHFetchResult:(id)arg1;
+ (id)pvPersonsArrayFromPHFetchResult:(id)arg1;
+ (id)pvPersonFromPHPerson:(id)arg1;
+ (id)phFaceprintFromPVFaceprint:(id)arg1;
+ (id)pvFaceprintFromPHFaceprint:(id)arg1;
+ (id)pvFacesSetFromPHFaces:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesArrayFromPHFaces:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesSetFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFaceCropsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFaceGroupsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFacesRequiringFaceCropGenerationFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newObjectFetchOptionsWithPhotoLibrary:(id)arg1;

@end

