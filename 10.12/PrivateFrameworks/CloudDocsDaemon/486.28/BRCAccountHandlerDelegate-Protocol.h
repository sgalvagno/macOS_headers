//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCAccountHandler, BRCAccountSession;

@protocol BRCAccountHandlerDelegate <NSObject>
- (void)accountHandler:(BRCAccountHandler *)arg1 didChangeSessionTo:(BRCAccountSession *)arg2;
- (void)accountHandler:(BRCAccountHandler *)arg1 willChangeSessionFrom:(BRCAccountSession *)arg2;
@end

