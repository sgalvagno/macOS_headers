//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class ICSearchIndexableNoteContextIdentifier, NSString;

@protocol ICSearchIndexableNoteContext <NSObject>
- (void)invalidateContext;
- (void)performBlockAndWait:(void (^)(void))arg1;
- (void)performBlock:(void (^)(void))arg1;
- (void)enumerateAllObjectsWithOptions:(unsigned long long)arg1 usingBlock:(void (^)(id, unsigned long long, char *))arg2;
- (BOOL)evaluateObjectWithIdentifier:(NSString *)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 usingBlock:(void (^)(id <ICSearchIndexable>))arg4;
- (ICSearchIndexableNoteContextIdentifier *)contextIdentifier;
- (BOOL)isMainContext;
@end

