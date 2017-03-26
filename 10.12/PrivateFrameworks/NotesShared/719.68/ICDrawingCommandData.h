//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDrawingCommandData : NSObject
{
    struct CGRect _cachedBounds;
    vector_82e5b66f _points;
    BOOL _isClipped;
    unsigned int _type;
    struct CGColor *_color;
    struct CGPoint _clipOrigin;
    struct CGPoint _clipNormal;
    CDStruct_30364a2d _parameters;
    struct ICDrawingCommandID _commandID;
    CDStruct_4a3d0796 _baseValues;
}

@property(nonatomic) struct ICDrawingCommandID commandID; // @synthesize commandID=_commandID;
@property(nonatomic) struct CGPoint clipNormal; // @synthesize clipNormal=_clipNormal;
@property(nonatomic) struct CGPoint clipOrigin; // @synthesize clipOrigin=_clipOrigin;
@property BOOL isClipped; // @synthesize isClipped=_isClipped;
@property(nonatomic) CDStruct_30364a2d parameters; // @synthesize parameters=_parameters;
@property(nonatomic) CDStruct_4a3d0796 baseValues; // @synthesize baseValues=_baseValues;
@property(retain, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) vector_82e5b66f *points; // @synthesize points=_points;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) struct CGRect bounds;
- (double)renderCost;
- (void)invalidateBounds;
@property(readonly, nonatomic) unsigned int randomSeed;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDrawingCommandData:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 isHidden:(BOOL)arg4;
- (unsigned int)savePoint:(const CDStruct_4a3d0796 *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2 toArchive:(struct Point *)arg3;
- (CDStruct_4a3d0796)readPointFromArchive:(const struct Point *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2;
- (CDStruct_30364a2d)version1Parameters;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;

@end

