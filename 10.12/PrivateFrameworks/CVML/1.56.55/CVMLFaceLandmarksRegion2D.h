//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CVML/CVMLFaceLandmarksRegion.h>

@interface CVMLFaceLandmarksRegion2D : CVMLFaceLandmarksRegion
{
    const struct CGPoint *_points;
}

@property const struct CGPoint *points; // @synthesize points=_points;
- (void)dealloc;
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;

@end

