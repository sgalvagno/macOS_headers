//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TScreen : NSObject
{
}

+ (_Bool)forceWindowOntoPrimaryDisplay:(id)arg1 offsetFromBottom:(double)arg2;
+ (id)screenWithDisplayID:(unsigned int)arg1;
+ (struct CGRect)availableWindowPositioningBoundsForPoint:(const struct CGPoint *)arg1;
+ (struct CGRect)availableWindowPositioningBoundsForRect:(const struct CGRect *)arg1;
+ (id)closestScreenForOffScreenPoint:(const struct CGPoint *)arg1;
+ (id)closestScreenForOffScreenRect:(const struct CGRect *)arg1;
+ (id)greatestAreaScreenForPoint:(const struct CGPoint *)arg1;
+ (id)greatestAreaScreenForRect:(const struct CGRect *)arg1;
+ (set_bb8d1d1f)availableScaleFactors;
+ (double)cgScaleFactorForGreatestAreaScreenRect:(const struct CGRect *)arg1;
+ (double)primaryScreenCGScaleFactor;
+ (double)cgScaleFactorForScreen:(id)arg1;
+ (unsigned int)primaryScreenDisplayID;
+ (struct CGRect)primaryScreenVisibleFrame;
+ (struct CGRect)primaryScreenFrame;
+ (id)primaryScreen;

@end

