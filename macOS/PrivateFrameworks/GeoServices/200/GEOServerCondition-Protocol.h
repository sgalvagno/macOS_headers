//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class NSArray, NSDate;

@protocol GEOServerCondition <NSObject, NSCoding>
@property(readonly, nonatomic) NSArray *subconditions;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) long long conditionType;
@end

