//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv;
    void *_pad[3];
}

+ (id)clearColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (BOOL)supportsSecureCoding;
+ (id)colorWithString:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGColor *)cgColor;
@property(readonly) struct CGColorSpace *colorSpace;
@property(readonly) NSString *stringRepresentation;
@property(readonly) double blue;
@property(readonly) double green;
@property(readonly) double red;
@property(readonly) double alpha;
@property(readonly) const double *components;
@property(readonly) unsigned long long numberOfComponents;
- (void)finalize;
- (void)dealloc;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

