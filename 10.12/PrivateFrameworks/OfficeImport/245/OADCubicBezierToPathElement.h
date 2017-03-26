//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADCubicBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint1;
    struct OADAdjustPoint mControlPoint2;
    struct OADAdjustPoint mToPoint;
    BOOL mRelative;
}

- (void)setRelative:(BOOL)arg1;
- (BOOL)relative;
- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint2;
- (struct OADAdjustPoint)controlPoint1;
- (id)initWithControlPoint1:(struct OADAdjustPoint)arg1 controlPoint2:(struct OADAdjustPoint)arg2 toPoint:(struct OADAdjustPoint)arg3;

@end

