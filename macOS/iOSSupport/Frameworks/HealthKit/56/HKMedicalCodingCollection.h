//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_codings;
}

+ (BOOL)supportsSecureCoding;
+ (id)collectionWithCoding:(id)arg1;
+ (id)collectionWithCodings:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *codings; // @synthesize codings=_codings;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCodings:(id)arg1;
- (id)init;

@end

