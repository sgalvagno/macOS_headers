//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEONavdAnalyticsReporter;

@interface GEONavdAnalyticsManager : NSObject
{
    id <GEONavdAnalyticsReporter> _analyticsReporter;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <GEONavdAnalyticsReporter> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
- (void)dealloc;

@end

