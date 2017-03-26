//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSArray, NSImage;

@interface RUStatusToImageTransformer : NSValueTransformer
{
    NSArray *_goodValues;
    NSArray *_warningValues;
    NSArray *_badValues;
    NSImage *_goodImage;
    NSImage *_goodShapeImage;
    NSImage *_warningImage;
    NSImage *_warningShapeImage;
    NSImage *_badImage;
    NSImage *_badShapeImage;
    NSImage *_neutralImage;
    NSImage *_neutralShapeImage;
}

+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)initWithGood:(id)arg1 bad:(id)arg2 warning:(id)arg3;

@end

