//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSApplication (ASKPasteboardScriptingSupport)
- (void)removeFromPasteboardsAtIndex:(unsigned long long)arg1;
- (void)removePasteboard:(id)arg1;
- (void)insertInPasteboards:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInPasteboards:(id)arg1;
- (id)pasteboardAtIndex:(unsigned long long)arg1;
- (id)valueInPasteboardsWithName:(id)arg1;
- (id)valueInPasteboardsWithUniqueID:(long long)arg1;
- (id)standardPasteboardTypes;
- (id)appleScriptPasteboardTypes;
- (id)pasteboardTypes;
- (id)pasteboards;
- (void)_addStandardPasteboards;
@end

