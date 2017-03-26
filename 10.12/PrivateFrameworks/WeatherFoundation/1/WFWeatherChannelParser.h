//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherFoundation/WFForecastDataParser.h>

#import <WeatherFoundation/WFAirQualityDataParser-Protocol.h>

@class NSCalendar, NSString, WFTemperature;

@interface WFWeatherChannelParser : WFForecastDataParser <WFAirQualityDataParser>
{
    NSCalendar *_calendar;
    WFTemperature *_todayHighTemperature;
    WFTemperature *_todayLowTemperature;
}

+ (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
+ (unsigned long long)conditionFromWeatherChannelCode:(id)arg1;
+ (unsigned long long)pressureTrendFromWeatherChannelCode:(id)arg1;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForCurrentForecast;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
@property(retain, nonatomic) WFTemperature *todayLowTemperature; // @synthesize todayLowTemperature=_todayLowTemperature;
@property(retain, nonatomic) WFTemperature *todayHighTemperature; // @synthesize todayHighTemperature=_todayHighTemperature;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)dateComponentsForEpochDateNumber:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (id)parseCurrentCondition:(id)arg1;
- (id)parseHourlyForecasts:(id)arg1 date:(id)arg2;
- (id)parseDailyForecasts:(id)arg1 date:(id)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

