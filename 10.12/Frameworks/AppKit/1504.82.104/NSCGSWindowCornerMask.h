//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSCGSWindowCornerMask : NSObject <NSCopying, NSMutableCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)windowCornerMaskWithScale:(double)arg1;

// Remaining properties
@property(readonly) struct CGRect center; // @dynamic center;
@property(readonly, retain) struct CGImage *image; // @dynamic image;
@property(readonly) double imageScale; // @dynamic imageScale;

@end

