//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/_MTLDevice.h>

@class MTLIOAccelDeviceShmemPool, MTLResourceListPool, NSObject;
@protocol OS_dispatch_queue;

@interface MTLIOAccelDevice : _MTLDevice
{
    struct __IOAccelDevice *_deviceRef;
    struct __IOAccelShared *_sharedRef;
    unsigned int _acceleratorPort;
    struct {
        MTLIOAccelDeviceShmemPool *segmentListShmemPool;
        MTLIOAccelDeviceShmemPool *kernelCommandShmemPool;
        id *hwResourcePools;
        unsigned int hwResourcePoolCount;
        MTLResourceListPool *akResourceListPool;
        MTLResourceListPool *akPrivateResourceListPool;
    } _storageCreateParams;
    struct MTLIOAccelCommandBufferStoragePool *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned long long _sharedMemorySize;
    unsigned int _accelID;
    unsigned long long _segmentByteThreshold;
    int _numCommandBuffers;
    struct MTLIOAccelBufferHeap _bufferHeaps[16];
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
}

+ (void)registerDevices;
@property(readonly) unsigned int acceleratorPort; // @synthesize acceleratorPort=_acceleratorPort;
@property(readonly) int numCommandBuffers; // @synthesize numCommandBuffers=_numCommandBuffers;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(int)arg3 heapIndex:(short *)arg4 bufferIndex:(short *)arg5 bufferOffset:(int *)arg6;
- (short)heapIndexWithOptions:(unsigned long long)arg1;
@property(readonly, getter=isHeadless) BOOL headless;
@property(readonly, getter=isLowPower) BOOL lowPower;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) unsigned long long sharedMemorySize;
@property(readonly) unsigned int hwResourcePoolCount;
@property(readonly) id *hwResourcePools;
- (struct __IOAccelShared *)sharedRef;
- (struct __IOAccelDevice *)deviceRef;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (void)_purgeDevice;
- (void)setHwResourcePool:(id *)arg1 count:(int)arg2;
- (unsigned int)initialSegmentListShmemSize;
- (unsigned int)initialKernelCommandShmemSize;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (void)dealloc;

@end

