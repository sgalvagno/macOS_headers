//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMMemoryObject.h>

@class NSData;

@interface AVB17221AEMMemoryObjectData : AVB17221AEMMemoryObject
{
    NSData *data;
}

@property(copy) NSData *data; // @synthesize data;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;

@end

