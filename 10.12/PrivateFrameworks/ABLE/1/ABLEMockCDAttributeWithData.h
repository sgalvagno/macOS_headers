//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ABLE/ABLEMockCDAttributeProtocol-Protocol.h>

@class NSArray;

@interface ABLEMockCDAttributeWithData : NSObject <ABLEMockCDAttributeProtocol>
{
    NSArray *_data;
}

@property(retain) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)initWithTable:(id)arg1;
- (id)init;

@end

