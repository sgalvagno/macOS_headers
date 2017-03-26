//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Collaboration/NSTableViewDataSource-Protocol.h>
#import <Collaboration/NSTableViewDelegate-Protocol.h>

@class NSImage, NSMutableArray, NSSet, NSString;

@interface IdentityDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_identities;
    NSSet *_disabledIdentities;
    NSImage *_userImage;
    NSImage *_groupImage;
    NSImage *_vCardImage;
}

- (id)listObjects;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)isIdentityDisabled:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setABPeople:(id)arg1;
- (void)setIdentities:(id)arg1;
- (void)setDisabledIdentities:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

