//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MREffectCoverCascadeSlideStory : NSObject
{
    double birthStart;
    double birthDuration;
    double deathStart;
    double deathDuration;
    float deathParameter;
    NSString *slideID;
    unsigned long long slideIndex;
    unsigned char x;
    unsigned char y;
    unsigned char birthType;
    unsigned char deathType;
}

- (void)dealloc;
- (id)initWithSlideIndex:(unsigned long long)arg1 x:(unsigned long long)arg2 y:(unsigned long long)arg3 birthType:(unsigned long long)arg4 birthStart:(double)arg5 birthDuration:(double)arg6;

@end

