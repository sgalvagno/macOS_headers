//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXRDataConverter : NSObject
{
}

+ (id)newPixelFormatSetForCGImage:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(BOOL)arg4 error:(id *)arg5;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(BOOL)arg4 gammaDegamma:(BOOL)arg5 error:(id *)arg6;

@end

