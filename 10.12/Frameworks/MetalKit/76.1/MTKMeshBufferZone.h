//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/MDLMeshBufferZone-Protocol.h>

@class MTKMeshBufferAllocator, NSMutableOrderedSet, NSString;
@protocol MDLMeshBufferAllocator, MTLBuffer;

@interface MTKMeshBufferZone : NSObject <MDLMeshBufferZone>
{
    NSMutableOrderedSet *_buffers;
    BOOL _destroyInvoked;
    MTKMeshBufferAllocator *_allocator;
    unsigned long long _capacity;
    id <MTLBuffer> _buffer;
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
- (void).cxx_destruct;
- (void)destroyBuffer:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

