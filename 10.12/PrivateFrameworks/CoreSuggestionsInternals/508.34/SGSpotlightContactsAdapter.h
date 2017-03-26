//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSOperationQueue, NSString, NSURL, SGSqlEntityStore;

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver>
{
    NSURL *_vCardsDirectoryURL;
    NSOperationQueue *_spotlightWriteQueue;
    SGSqlEntityStore *_store;
}

@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)removeAllPseudoContactsInIdSet:(id)arg1;
- (void)removeAllStoredPseudoContacts;
- (void)rejectContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)sendContactToSpotlight:(id)arg1;
- (id)urlForStorageContactVCard:(id)arg1;
- (id)urlForRecordIdVCard:(id)arg1;
- (id)pseudoContactVcardDirectory;
- (void)storeClosing;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

