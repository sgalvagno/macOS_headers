//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MTLDevice, MTLLibrary, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EspressoMetalKernelsCache : NSObject
{
    id <MTLLibrary> m_ShaderLibrary;
    id <MTLDevice> _device;
    BOOL isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSString *_kernelPrefix;
    NSMutableDictionary *_m_kernelCache_rw;
    NSDictionary *_m_kernelCache;
}

@property(retain) NSDictionary *m_kernelCache; // @synthesize m_kernelCache=_m_kernelCache;
@property(retain, nonatomic) NSMutableDictionary *m_kernelCache_rw; // @synthesize m_kernelCache_rw=_m_kernelCache_rw;
@property(retain, nonatomic) NSString *kernelPrefix; // @synthesize kernelPrefix=_kernelPrefix;
- (void).cxx_destruct;
- (BOOL)shouldUseTexArray;
- (id)kernelForFunction:(const char *)arg1;
- (void)addLibraryAtPath:(id)arg1;
- (void)loadLibraryNamed:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

