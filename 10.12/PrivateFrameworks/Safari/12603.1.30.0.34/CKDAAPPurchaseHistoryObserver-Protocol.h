//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class CKDAAPPurchaseHistory, NSArray;

@protocol CKDAAPPurchaseHistoryObserver <NSObject>

@optional
- (void)daapPurchaseHistory:(CKDAAPPurchaseHistory *)arg1 didChangeWithItemsAdded:(NSArray *)arg2 changed:(NSArray *)arg3 removed:(NSArray *)arg4;
@end

