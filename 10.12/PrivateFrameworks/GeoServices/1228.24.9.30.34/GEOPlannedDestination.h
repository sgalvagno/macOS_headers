//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>
{
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    int _transportType;
    NSData *_handle;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, retain, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItemHandle:(id)arg1;
- (id)init;

@end

