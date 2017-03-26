//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GLKMesh, GLKMeshBuffer, NSString;

@interface GLKSubmesh : NSObject
{
    unsigned int _type;
    unsigned int _mode;
    int _elementCount;
    GLKMeshBuffer *_elementBuffer;
    GLKMesh *_mesh;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak GLKMesh *mesh; // @synthesize mesh=_mesh;
@property(readonly, nonatomic) GLKMeshBuffer *elementBuffer; // @synthesize elementBuffer=_elementBuffer;
@property(readonly, nonatomic) int elementCount; // @synthesize elementCount=_elementCount;
@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id *)arg3;

@end

