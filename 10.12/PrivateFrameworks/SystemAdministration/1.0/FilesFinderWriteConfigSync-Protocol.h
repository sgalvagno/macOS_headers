//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSDictionary, NSString;

@protocol FilesFinderWriteConfigSync

@optional
- (oneway void)setCopyPermissionsForNodeAtPath:(NSString *)arg1 authorization:(NSData *)arg2 result:(void (^)(long long))arg3;
- (oneway void)asyncSecurelyRemoveFileAtPath:(NSString *)arg1 withOptions:(unsigned long long)arg2 authorization:(NSData *)arg3 result:(void (^)(long long))arg4;
- (oneway void)asyncRemoveFileAtPath:(NSString *)arg1 authorization:(NSData *)arg2 result:(void (^)(long long))arg3;
- (oneway void)createDiskImage:(NSString *)arg1 fromPath:(NSString *)arg2 asUID:(long long)arg3 authorization:(NSData *)arg4 result:(void (^)(long long))arg5;
- (oneway void)directorySizeAtPath:(NSString *)arg1 authorization:(NSData *)arg2 result:(void (^)(unsigned long long))arg3;
- (oneway void)createHomeDirectory:(NSDictionary *)arg1 authorization:(NSData *)arg2 result:(void (^)(long long))arg3;
@end

