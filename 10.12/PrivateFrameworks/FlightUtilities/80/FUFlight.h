//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>
#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUAirline, FUFlightStep, NSArray, NSDate, NSString;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_queriedAirlineTitle;
    FUAirline *_displayAirline;
    long long _displayFlightNumber;
    FUAirline *_airline;
    long long _flightNumber;
    NSString *_cancellationMessage;
    NSArray *_legs;
    NSArray *_codeShares;
    NSArray *_allLegs;
    NSString *_identifier;
    unsigned long long _departureLegIndex;
    unsigned long long _arrivalLegIndex;
    NSDate *_expirationDate;
    NSString *_rawResponse;
}

+ (BOOL)supportsSecureCoding;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)timeFormatterForIdentifier;
@property(retain) NSString *rawResponse; // @synthesize rawResponse=_rawResponse;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property unsigned long long arrivalLegIndex; // @synthesize arrivalLegIndex=_arrivalLegIndex;
@property unsigned long long departureLegIndex; // @synthesize departureLegIndex=_departureLegIndex;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *allLegs; // @synthesize allLegs=_allLegs;
@property(retain) NSArray *codeShares; // @synthesize codeShares=_codeShares;
@property(retain) NSArray *legs; // @synthesize legs=_legs;
@property(retain) NSString *cancellationMessage; // @synthesize cancellationMessage=_cancellationMessage;
@property long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) FUAirline *airline; // @synthesize airline=_airline;
@property long long displayFlightNumber; // @synthesize displayFlightNumber=_displayFlightNumber;
@property(retain) FUAirline *displayAirline; // @synthesize displayAirline=_displayAirline;
@property(retain) NSString *queriedAirlineTitle; // @synthesize queriedAirlineTitle=_queriedAirlineTitle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) double duration;
@property(readonly) FUFlightStep *arrival;
@property(readonly) FUFlightStep *departure;
- (id)lastLeg;
- (id)firstLeg;
- (id)relevantLeg;
@property(readonly) long long status;
- (void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2;
@property(readonly) NSString *displayFlightCode;
@property(readonly) NSString *flightCode;
- (id)legsAsFlights;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

