//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLocalSnapshotMessenger : NSObject
{
}

+ (BOOL)deleteRestrictedItem:(id)arg1;
+ (BOOL)deleteMobileBackupsTrashAsync;
+ (BOOL)trashMobileBackups;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1 onVolume:(id)arg2 urgency:(int)arg3;
+ (BOOL)startHandler;
+ (BOOL)stopHandler;
+ (BOOL)snapshot;
+ (BOOL)readEvents;
+ (BOOL)_sendXPCMessage:(id)arg1 connectionName:(const char *)arg2;
+ (int)_sendXPCMessage:(id)arg1 connectionName:(const char *)arg2 timeout:(double)arg3 resultCode:(unsigned long long *)arg4;
+ (BOOL)_sendMessage:(int)arg1 replyTimeout:(double)arg2;
+ (BOOL)_sendMessage:(int)arg1 arguments:(id)arg2 replyTimeout:(double)arg3;
+ (BOOL)_sendMessage:(int)arg1 data:(id)arg2 replyTimeout:(double)arg3 outReplyData:(id *)arg4;

@end

