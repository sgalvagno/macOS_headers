//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDCustomSortEntryModel.h>

@interface RDCustomSortEntry : RDCustomSortEntryModel
{
}

+ (id)containerUuidsForCustomSortsContainingUuidsIn:(id)arg1 fromDatabase:(id)arg2;
+ (void)deleteAllCustomSortEntriesForContainerUuid:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3;
+ (void)deleteCustomSortEntriesForObjectUuids:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3;
+ (void)deleteCustomSortEntries:(id)arg1 withReason:(unsigned short)arg2;
+ (id)createCustomSortEntryForContainerUuid:(id)arg1 objectUuid:(id)arg2 orderNumber:(unsigned long long)arg3 forDatabase:(id)arg4;
- (void)deleteCustomSortEntryWithReason:(unsigned short)arg1;
- (id)description;

@end

