//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChart/CCVegaUpdateQueueItem.h>

@class NSArray, NSString;

@interface CCVegaDataUpdateQueueItem : CCVegaUpdateQueueItem
{
    NSString *namedDataset;
    NSArray *rowsToInsert;
    CDUnknownBlockType callbackForRowsToRemove;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType callbackForRowsToRemove; // @synthesize callbackForRowsToRemove;
@property(retain) NSArray *rowsToInsert; // @synthesize rowsToInsert;
@property(retain) NSString *namedDataset; // @synthesize namedDataset;
- (void)performUpdate:(id)arg1;

@end

