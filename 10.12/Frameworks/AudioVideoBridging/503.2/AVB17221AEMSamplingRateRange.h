//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : NSObject <NSCopying>
{
    AVB17221AEMSamplingRate *minimumRate;
    AVB17221AEMSamplingRate *maximumRate;
}

@property(copy) AVB17221AEMSamplingRate *maximumRate; // @synthesize maximumRate;
@property(copy) AVB17221AEMSamplingRate *minimumRate; // @synthesize minimumRate;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;

@end

