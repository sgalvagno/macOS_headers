//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKQuadTree;

@interface PKPhysicsGrid : NSObject
{
    shared_ptr_c9c6a83f grid;
    PKQuadTree *quadTree;
}

+ (id)vectorGridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4;
+ (id)gridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5;
+ (id)gridFromOccupancyArray:(const char *)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_c9c6a83f gridPtr;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (id)physicsBodyFromLVS0:(struct CGRect)arg1;
- (shared_ptr_2aaf3a07)pathFromOutlineWithSmoothingThreshold:(double)arg1 bounds:(CDStruct_c7fe8b62)arg2;
- (id)physicsBodyFromSmoothedOutline:(double)arg1 size:(struct CGSize)arg2;
- (unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3;
- (_Bool)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;

@end

