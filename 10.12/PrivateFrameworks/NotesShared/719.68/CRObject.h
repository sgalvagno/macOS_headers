//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/CREquatable-Protocol.h>
#import <NotesShared/CRIdentifiable-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding>
{
    NSUUID *_identity;
    NSDictionary *_fields;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)keyFromSelector:(SEL)arg1;
+ (id)CRProperties;
@property(readonly, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) NSUUID *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)tombstone;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)setDocument:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)setFieldKey:(id)arg1 value:(id)arg2;
- (void)setupConstraintsFor:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

