//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class CLLocation, NSLocale, NSString, NSURL;

@interface WFURLComponents : NSObject <NSCopying>
{
    BOOL _showHourlyWeatherOnly;
    BOOL _isLocalWeatherCity;
    unsigned long long _destination;
    CLLocation *_location;
    NSString *_locationName;
    unsigned long long _cityIndex;
    NSLocale *_locale;
    NSString *_platform;
}

+ (id)componentsForLocation:(id)arg1;
+ (id)componentsForURL:(id)arg1;
+ (void)locationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)locationForURLComponents:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property unsigned long long cityIndex; // @synthesize cityIndex=_cityIndex;
@property BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property BOOL showHourlyWeatherOnly; // @synthesize showHourlyWeatherOnly=_showHourlyWeatherOnly;
@property(copy) NSString *locationName; // @synthesize locationName=_locationName;
@property(copy) CLLocation *location; // @synthesize location=_location;
@property unsigned long long destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (BOOL)_canBuildURLWithProvidedComponents;
@property(readonly, copy) NSURL *URL;
- (unsigned long long)hash;
- (BOOL)isEqualToComponents:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(id)arg1;
- (id)init;

@end

