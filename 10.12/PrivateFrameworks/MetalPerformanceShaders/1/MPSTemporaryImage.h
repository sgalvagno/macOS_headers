//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSImage.h>

@interface MPSTemporaryImage : MPSImage
{
    unsigned long long _readCount;
}

+ (void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
- (id)debugDescription;
- (void)dealloc;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;

@end

