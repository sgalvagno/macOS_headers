//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;

@protocol NSXPCSharedListenerManager
- (void)getProgramSDKVersion:(void (^)(unsigned int))arg1;
- (void)warmUpClassNamed:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
@end

