//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStylePack : PBCodable <NSCopying>
{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property(retain, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;
@property(retain, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)genericShieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)genericShieldsCount;
- (void)addGenericShield:(id)arg1;
- (void)clearGenericShields;
- (id)textureAtlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureAtlasCount;
- (void)addTextureAtlas:(id)arg1;
- (void)clearTextureAtlas;
- (void)dealloc;

@end

