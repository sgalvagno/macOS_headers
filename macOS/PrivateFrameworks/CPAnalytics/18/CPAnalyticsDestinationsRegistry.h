//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject
{
    NSMutableArray *_destinations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
- (void)parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)readConfiguration:(id)arg1;
- (void)sendToAllDestinations:(id)arg1;
- (void)addDestination:(id)arg1;
- (void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)init;

@end

