//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CVPixelBufferCacheItem : NSObject
{
    NSArray *_buffers;
    NSArray *_DODs;
    struct CGSize _fullSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(readonly, nonatomic) NSArray *DODs; // @synthesize DODs=_DODs;
@property(readonly, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize)arg3;

@end

