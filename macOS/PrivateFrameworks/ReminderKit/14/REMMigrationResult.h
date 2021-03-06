//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface REMMigrationResult : NSObject <NSSecureCoding>
{
    BOOL _isObserver;
    NSString *_state;
    double _timeElapsed;
    unsigned long long _listsMigrated;
    unsigned long long _remindersMigrated;
    NSString *_log;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *log; // @synthesize log=_log;
@property(readonly, nonatomic) unsigned long long remindersMigrated; // @synthesize remindersMigrated=_remindersMigrated;
@property(readonly, nonatomic) unsigned long long listsMigrated; // @synthesize listsMigrated=_listsMigrated;
@property(readonly, nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
@property(readonly, nonatomic) BOOL isObserver; // @synthesize isObserver=_isObserver;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 IsObserver:(BOOL)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6;

@end

