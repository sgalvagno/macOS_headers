//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPGradientStop : NSObject
{
    OITSUColor *mColor;
    float mPosition;
}

- (float)position;
- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1 position:(float)arg2;

@end

