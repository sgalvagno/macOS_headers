//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArrayController, NSMutableDictionary;

@interface MigrationErrorTableDelegate : NSObject
{
    NSMutableDictionary *prototypeCellViews;
    NSArrayController *backingData;
}

@property __weak NSArrayController *backingData; // @synthesize backingData;
@property(retain) NSMutableDictionary *prototypeCellViews; // @synthesize prototypeCellViews;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)prototypeViewForIdentifier:(id)arg1 inTableView:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)init;

@end

