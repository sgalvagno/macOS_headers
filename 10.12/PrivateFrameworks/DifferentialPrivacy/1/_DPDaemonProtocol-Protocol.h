//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _DPDaemonProtocol
- (void)recordWords:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)recordStrings:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)recordNumbers:(NSArray *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
@end

