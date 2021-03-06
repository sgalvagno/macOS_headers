//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PAOpenGLProgram : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_vertexShaderSource;
    NSString *_fragmentShaderSource;
    NSString *_geometryShaderSource;
    unsigned int _geometryVertexOutCount;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_executables;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int geometryVertexOutCount; // @synthesize geometryVertexOutCount=_geometryVertexOutCount;
@property(copy, nonatomic) NSString *fragmentShaderSource; // @synthesize fragmentShaderSource=_fragmentShaderSource;
@property(copy, nonatomic) NSString *geometryShaderSource; // @synthesize geometryShaderSource=_geometryShaderSource;
@property(copy, nonatomic) NSString *vertexShaderSource; // @synthesize vertexShaderSource=_vertexShaderSource;
- (void).cxx_destruct;
- (id)_newExecutableForDevice:(id)arg1;
- (void)_setExecutable:(id)arg1 forDevice:(id)arg2;
- (id)_lookupExecutableForDevice:(id)arg1;
- (id)_executableForDevice:(id)arg1;
- (id)instantiateOnDevice:(id)arg1;
- (void)_forEachAttribute:(CDUnknownBlockType)arg1;
- (void)forEachAttribute:(CDUnknownBlockType)arg1;
- (unsigned int)_locationForAttribute:(id)arg1;
- (unsigned int)locationForAttribute:(id)arg1;
- (void)_setLocation:(unsigned int)arg1 forAttribute:(id)arg2;
- (void)setLocation:(unsigned int)arg1 forAttribute:(id)arg2;
- (id)initWithName:(id)arg1;

@end

