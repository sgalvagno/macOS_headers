//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLMaterialPropertyNode, MDLTextureSampler, NSString, NSURL;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying>
{
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    // Error parsing type: , name: _float
    // Error parsing type: {?="columns"[4]}, name: _matrix
    struct CGColor *_color;
    unsigned long long _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
    unsigned long long _type;
    NSURL *_URLValue;
    // Error parsing type: {?="columns"[4]}, name: _matrix4x4
}

// Error parsing type for property matrix4x4:
// Property attributes: T{?=[4]},N,V_matrix4x4

@property(copy, nonatomic) NSURL *URLValue; // @synthesize URLValue=_URLValue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
-     // Error parsing type: v80@0:8{?=[4]}16, name: setMatrix4x4Value:
// Error parsing type for property float4Value:
// Property attributes: T,N

// Error parsing type for property float3Value:
// Property attributes: T,N

// Error parsing type for property float2Value:
// Property attributes: T,N

@property(nonatomic) float luminance;
@property(nonatomic) float floatValue;
@property(retain, nonatomic) MDLTextureSampler *textureSamplerValue;
- (void)setUrl:(id)arg1;
@property(copy, nonatomic) NSString *stringValue;
@property(nonatomic) struct CGColor *color;
- (void)setProperties:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(struct CGColor *)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4WithSRGBA: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3;
-     // Error parsing type: @96@0:8@16Q24{?=[4]}32, name: initWithName:semantic:matrix4x4:
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float3: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float2: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2;
@property(nonatomic) unsigned long long semantic;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

