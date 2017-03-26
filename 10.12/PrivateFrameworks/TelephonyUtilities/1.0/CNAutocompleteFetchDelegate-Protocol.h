//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class CNAutocompleteFetchRequest, NSArray, NSDictionary, NSError;
@protocol CNCancelable;

@protocol CNAutocompleteFetchDelegate <NSObject>
- (void)autocompleteFetch:(id <CNCancelable>)arg1 didFailWithError:(NSError *)arg2;
- (void)autocompleteFetch:(id <CNCancelable>)arg1 didReceiveResults:(NSArray *)arg2;

@optional
- (long long (^)(id, id))resultComparatorForAutocompleteFetch:(id <CNCancelable>)arg1;
- (void)autocompleteFetch:(id <CNCancelable>)arg1 willSortResults:(NSArray *)arg2;
- (NSDictionary *)autocompleteFetch:(id <CNCancelable>)arg1 willAdjustResults:(NSArray *)arg2;
- (BOOL)autocompleteFetch:(id <CNCancelable>)arg1 shouldExpectSupplementalResultsForRequest:(CNAutocompleteFetchRequest *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)autocompleteFetchDidEndNetworkActivity:(id <CNCancelable>)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id <CNCancelable>)arg1;
- (void)autocompleteFetchDidFinish:(id <CNCancelable>)arg1;
@end

