//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTextTable;

@interface NSRTFReaderTableState : NSObject
{
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
}

- (void)dealloc;

@end

