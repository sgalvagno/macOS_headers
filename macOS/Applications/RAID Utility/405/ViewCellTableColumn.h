//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableColumn.h>

@class NSMutableArray;

@interface ViewCellTableColumn : NSTableColumn
{
    NSMutableArray *cells;
}

+ (id)newViewCell;
- (void)willRemoveFromTableView:(id)arg1;
- (void)noteNumberOfTableRowsChanged:(id)arg1;
- (void)appendRows:(long long)arg1;
- (void)removeRows:(long long)arg1;
- (id)dataCellForRow:(long long)arg1;
- (id)cells;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

