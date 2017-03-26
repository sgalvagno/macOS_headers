//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFAirQualityRequestFormatter-Protocol.h>
#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@class NSString;

@interface WFWeatherChannelRequestFormatter : NSObject <WFForecastRequestFormatter, WFAirQualityRequestFormatter>
{
}

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id *)arg3;
+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2;
+ (id)hostURLForService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

