//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DDLog : NSObject
{
}

+ (void)lt_flush;
+ (void)lt_log:(id)arg1;
+ (void)lt_removeAllLoggers;
+ (void)lt_removeLogger:(id)arg1;
+ (void)lt_addLogger:(id)arg1;
+ (void)setLogLevel:(int)arg1 forClassWithName:(id)arg2;
+ (void)setLogLevel:(int)arg1 forClass:(Class)arg2;
+ (int)logLevelForClassWithName:(id)arg1;
+ (int)logLevelForClass:(Class)arg1;
+ (id)registeredClassNames;
+ (id)registeredClasses;
+ (BOOL)isRegisteredClass:(Class)arg1;
+ (void)flushLog;
+ (void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 args:(struct __va_list_tag [1])arg10;
+ (void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9;
+ (void)queueLogMessage:(id)arg1 asynchronously:(BOOL)arg2;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)arg1;
+ (void)addLogger:(id)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (id)loggingQueue;
+ (void)initialize;

@end

