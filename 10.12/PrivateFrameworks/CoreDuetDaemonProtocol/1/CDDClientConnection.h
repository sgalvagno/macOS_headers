//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject
{
    CDDXPCConnection *_connection;
    CDDebug *_debug;
    unsigned long long _clientId;
}

@property(readonly) unsigned long long clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) CDDXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (BOOL)getLocalAppBundleId:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)requestAdmissionLogFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)setActiveBundles:(id)arg1 startTimestamps:(id)arg2 endTimestamps:(id)arg3 event:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)setNonAppBundlId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)bundleIdChange:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 cost:(long long)arg7 onDate:(id)arg8 risingEdge:(BOOL)arg9 fallingEdge:(BOOL)arg10 error:(id *)arg11 replyHandler:(CDUnknownBlockType)arg12;
- (BOOL)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(BOOL)arg8 fallingEdge:(BOOL)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;
- (BOOL)readRemoteRequestResult:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 statistic:(int)arg4 historyWindow:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 value:(id)arg4 historyWindow:(id)arg5 format:(long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (BOOL)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)requestSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)resetAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)setAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)broadcastSystemDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)readSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)getDeviceFromDescription:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)getDevicesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)resetAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 type:(int)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)remoteFocalAppWithId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)budgetsForAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)budgetsForAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 historyOfValue:(id)arg3 forWindow:(id)arg4 filter:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (BOOL)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 meteredWithValue:(id)arg3 costDictionary:(id)arg4 onDate:(id)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 type:(int)arg8 meterToken:(unsigned long long)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;
- (BOOL)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 deviceIdentifier:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 statistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (BOOL)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 setCategory:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 associateToBudgetId:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)deleteDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)poolNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)attributeNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 occurredWithValue:(id)arg3 cost:(long long)arg4 onDate:(id)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 type:(int)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (BOOL)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (BOOL)attributeId:(unsigned long long)arg1 backgroundLaunch:(id)arg2 risingEdge:(BOOL)arg3 fallingEdge:(BOOL)arg4 type:(int)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)idForAttribute:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)setDebugBitmap:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)deleteAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)deleteAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)deleteBundleId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)bundleIdEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)deregisterTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)registerTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)readLiveAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)readTrendingAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (BOOL)idForPool:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 maxFraction:(double)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (BOOL)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 deviceIdentifier:(id)arg6 temporalLeeway:(double)arg7 limitCount:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (BOOL)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (BOOL)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 limitCount:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (BOOL)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)message:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (BOOL)versionWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientId:(unsigned long long)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (BOOL)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (BOOL)sendMessageWithType:(long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;

@end

