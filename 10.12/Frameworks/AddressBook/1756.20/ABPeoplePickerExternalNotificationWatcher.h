//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABGroupEntriesList, ABPersonEntriesList;

__attribute__((visibility("hidden")))
@interface ABPeoplePickerExternalNotificationWatcher : NSObject
{
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABPersonEntriesList *_personEntriesList;
}

- (void)addressBookChangedExternally:(id)arg1;
- (void)registerForNotifications;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 groupEntriesList:(id)arg2 personEntriesList:(id)arg3;

@end

