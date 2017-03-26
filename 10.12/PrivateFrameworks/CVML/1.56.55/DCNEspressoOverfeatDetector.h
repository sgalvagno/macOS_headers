//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FDOverfeatNetwork;

__attribute__((visibility("hidden")))
@interface DCNEspressoOverfeatDetector : NSObject
{
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    struct FaceList *face_list;
    FDOverfeatNetwork *_enet;
    double _confidenceThreshold;
    double _minBoundingBoxThreshold;
}

@property(nonatomic) double minBoundingBoxThreshold; // @synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold;
@property(nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property(retain, nonatomic) FDOverfeatNetwork *enet; // @synthesize enet=_enet;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getDescription;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id *)arg3;
- (void)commonInit;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)mergeFaceList;
- (id)detectObjectsOnImagesBatch:(CDUnknownBlockType)arg1 detectionOptions:(id)arg2 error:(id *)arg3;
- (id)detectObjectsOnImage:(struct CGImage *)arg1 detectionOptions:(id)arg2 error:(id *)arg3;
- (void)runNetwork:(struct CGImage *)arg1;
- (void)computeBBoxUsingProb:(shared_ptr_dc6ac1b7)arg1 box:(shared_ptr_dc6ac1b7)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (void)fillFaceList;

@end

