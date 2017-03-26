//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherFoundation/WFForecastDataParser.h>

@interface WFWeatherUndergroundParser : WFForecastDataParser
{
}

+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)arg1;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForCurrentForecast;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
- (id)dateComponentsFromUTCDict:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3;
- (id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2;
- (void)logParsingErrorAtKeyPath:(id)arg1 error:(id *)arg2;
- (id)parseHistoricalForecast:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;

@end

