//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMModelObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSArray;

@interface AVB17221AEMSensorMap : AVB17221AEMModelObject <NSCopying>
{
    NSArray *mappings;
}

@property(copy) NSArray *mappings; // @synthesize mappings;
- (void)dealloc;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

