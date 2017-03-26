//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>

@interface CKBag : CKServiceInterface
{
}

+ (void)_invalidateAllBags;
+ (id)valueForKey:(id)arg1;
+ (id)urlForKey:(id)arg1;
+ (id)serialDispatchQueue;
+ (id)bagWithType:(unsigned long long)arg1;
+ (id)sandboxBox;
+ (id)productionBag;
- (void)startUpdate;
- (void)stopObservingBagWithObserver:(id)arg1;
- (id)loadBagAndObserveUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)_loadBagSynchronouslyReturningError:(id *)arg1;
- (id)storefrontURL;
- (id)dictionary;
- (BOOL)sendGUIDWithURL:(id)arg1;
- (BOOL)isValid;
- (BOOL)regexWithKey:(id)arg1 matchesString:(id)arg2;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)initWithBagType:(unsigned long long)arg1;

@end

