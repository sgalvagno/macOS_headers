//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRAnalyticsConfiguration;

@interface FIRConfiguration : NSObject
{
    FIRAnalyticsConfiguration *_analyticsConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) FIRAnalyticsConfiguration *analyticsConfiguration; // @synthesize analyticsConfiguration=_analyticsConfiguration;
- (void)setLoggerLevel:(long long)arg1;
- (id)init;

@end

