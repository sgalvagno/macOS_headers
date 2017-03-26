//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CDEventStreamProperties : NSObject
{
    NSString *name;
    NSString *knowledgeBaseName;
    NSString *descriptionString;
    long long valueType;
    BOOL futureEvent;
    BOOL setupOnDemand;
    BOOL canBeSpeculative;
    double timeToLive;
    BOOL canPersistOnStorage;
    double temporalPrecision;
    long long deResolitionPolicy;
    NSString *dataProtectionClass;
    long long totalSizeLimit;
    long long eventsPerPeriod;
    double period;
    BOOL canBeShared;
    long long sharingPolicy;
    double maxLatency;
    BOOL canSendToServer;
    BOOL hasStats;
    long long statisticsType;
    BOOL isInstant;
    BOOL isHistorical;
    long long pollingPeriod;
    NSString *_keyPathString;
}

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *keyPathString; // @synthesize keyPathString=_keyPathString;
@property(readonly, nonatomic) long long pollingPeriod; // @synthesize pollingPeriod;
@property(readonly, nonatomic) BOOL isHistorical; // @synthesize isHistorical;
@property(readonly, nonatomic) BOOL isInstant; // @synthesize isInstant;
@property(readonly, nonatomic) long long statisticsType; // @synthesize statisticsType;
@property(readonly, nonatomic) BOOL hasStats; // @synthesize hasStats;
@property(readonly, nonatomic) BOOL canSendToServer; // @synthesize canSendToServer;
@property(readonly, nonatomic) double maxLatency; // @synthesize maxLatency;
@property(readonly, nonatomic) long long sharingPolicy; // @synthesize sharingPolicy;
@property(readonly, nonatomic) BOOL canBeShared; // @synthesize canBeShared;
@property(readonly, nonatomic) long long eventsPerPeriod; // @synthesize eventsPerPeriod;
@property(readonly, nonatomic) double period; // @synthesize period;
@property(readonly, nonatomic) long long totalSizeLimit; // @synthesize totalSizeLimit;
@property(readonly, nonatomic) NSString *dataProtectionClass; // @synthesize dataProtectionClass;
@property(readonly, nonatomic) long long deResolitionPolicy; // @synthesize deResolitionPolicy;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) BOOL canPersistOnStorage; // @synthesize canPersistOnStorage;
@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive;
@property(readonly, nonatomic) BOOL canBeSpeculative; // @synthesize canBeSpeculative;
@property(readonly, nonatomic) BOOL setupOnDemand; // @synthesize setupOnDemand;
@property(readonly, nonatomic) BOOL futureEvent; // @synthesize futureEvent;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType;
@property(readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString;
@property(readonly, nonatomic) NSString *knowledgeBaseName; // @synthesize knowledgeBaseName;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)description;

@end

