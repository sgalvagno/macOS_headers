//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ParsecUI/CKDAAPPurchaseHistoryObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface PRSPurchaseHistoryManager : NSObject <CKDAAPPurchaseHistoryObserver>
{
    NSMutableSet *_setOfPurchasedAdamIds;
}

+ (id)getSharedPurchaseHistoryManager;
@property(retain) NSMutableSet *setOfPurchasedAdamIds; // @synthesize setOfPurchasedAdamIds=_setOfPurchasedAdamIds;
- (void).cxx_destruct;
- (void)daapPurchaseHistory:(id)arg1 didChangeWithItemsAdded:(id)arg2 changed:(id)arg3 removed:(id)arg4;
- (BOOL)doesPurchasedItemSetContainAdamIds:(id)arg1;
- (void)initPurchaseHistory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

