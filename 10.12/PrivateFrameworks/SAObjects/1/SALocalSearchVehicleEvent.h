//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString, SALocation;

@interface SALocalSearchVehicleEvent : SADomainObject
{
}

+ (id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vehicleEvent;
@property(copy, nonatomic) NSString *vehicleIdentifier;
@property(copy, nonatomic) NSNumber *userSetLocation;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDate *date;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

