//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MIPMultiverseIdentifier, MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>
{
    MIPMultiverseIdentifier *_multiverseIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)arg1;
@property(readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier; // @synthesize multiverseIdentifier=_multiverseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPMediaLibrary *mediaLibrary;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForProperty:(id)arg1 isCached:(char *)arg2;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)invalidateCachedProperties;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) unsigned long long persistentID;

@end

