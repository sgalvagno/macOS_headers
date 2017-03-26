//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Exchange : NSObject
{
    NSString *_name;
    long long _status;
    double _streamInterval;
    double _lastUpdateTime;
}

+ (id)formattedExchangeNameForName:(id)arg1;
@property(readonly, nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) double streamInterval; // @synthesize streamInterval=_streamInterval;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)marketIsOpen;
- (BOOL)marketIsAfterHours;
- (id)archiveDictionary;
- (void)_updateWithDictionary:(id)arg1 newUpdate:(BOOL)arg2;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;

@end

