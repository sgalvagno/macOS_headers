//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCNDataMapperSaveTransaction-Protocol.h>

@class ABCNMutableInMemoryState, NSString;

__attribute__((visibility("hidden")))
@interface ABCNInMemorySaveTransaction : NSObject <ABCNDataMapperSaveTransaction>
{
    ABCNMutableInMemoryState *_mutableState;
}

- (BOOL)commitChangesWithSaveResponse:(id)arg1 error:(id *)arg2;
- (void)deleteGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)addGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)setMeCardIdentifier:(id)arg1 withSaveResponse:(id)arg2;
- (void)clearMeCardIdentifierWithSaveResponse:(id)arg1;
- (void)deleteContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)addContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)dealloc;
- (id)initWithMutableState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

