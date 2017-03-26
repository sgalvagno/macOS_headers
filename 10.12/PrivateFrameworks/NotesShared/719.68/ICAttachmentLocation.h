//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICLocation.h>

#import <NotesShared/ICSearchIndexable-Protocol.h>

@class ICAttachment, NSString;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexable>
{
}

@property(readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;
- (BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
- (id)searchIndexStringsOutHasAdditionalStrings:(char *)arg1;
- (BOOL)isHiddenFromSearch;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (id)modificationDate;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (id)objectIdentifier;
- (long long)visibilityTestingType;
- (id)identifier;
- (id)authorsExcludingCurrentUser;
- (id)targetSearchIndexable;

// Remaining properties
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL placeUpdated; // @dynamic placeUpdated;
@property(readonly) Class superclass;

@end

