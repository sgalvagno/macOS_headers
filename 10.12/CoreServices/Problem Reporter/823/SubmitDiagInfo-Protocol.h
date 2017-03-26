//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SubmitDiagInfo <NSObject>
- (void)resetMessageTracer;
- (void)fetchMessageTracerWhitelistWithVersion:(NSString *)arg1 andReply:(void (^)(NSArray *))arg2;
- (void)fetchMessageTracerWhitelistWithReply:(void (^)(NSArray *))arg1;
- (void)queryMessageTracer:(NSArray *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchTypeBlackListWithReply:(void (^)(NSSet *))arg1;
- (void)canSubmitLogOfType:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)fetchDailyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)fetchMainConfigFileWithOverrrides:(NSDictionary *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)updateConfigFile;
- (void)cleanupWithHomeDirectoryLocation:(NSString *)arg1;
- (void)submitFileAtLocation:(NSString *)arg1 withInternalKey:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)submitWithHomeDirectoryLocation:(NSString *)arg1 disableQuantization:(BOOL)arg2 withInternalKey:(NSString *)arg3 withReply:(void (^)(BOOL))arg4;
@end

