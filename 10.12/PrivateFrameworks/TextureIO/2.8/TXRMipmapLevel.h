//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRMipmapLevel : NSObject <NSCopying>
{
    NSMutableArray *_elements;
    unsigned long long _level;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1 atElement:(unsigned long long)arg2 atFace:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsLevel:(unsigned long long)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo:(unsigned long long)arg4 arrayLength:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (id)initAsLevel:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4;
@property(readonly) NSArray *elements;

@end

