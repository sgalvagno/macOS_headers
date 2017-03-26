//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICSearchIndexableNoteContext-Protocol.h>

@class ICThreadBlockDispatcher, NSString;

@interface ICSearchIndexableNoteContext : NSObject <ICSearchIndexableNoteContext>
{
    ICThreadBlockDispatcher *_confinementDispatcher;
}

@property(retain, nonatomic) ICThreadBlockDispatcher *confinementDispatcher; // @synthesize confinementDispatcher=_confinementDispatcher;
- (void).cxx_destruct;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)confinementConcurrency;
- (void)invalidateContext;
- (void)enumerateAllObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)evaluateObjectWithIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)objectForIdentifier:(id)arg1 includeDeleted:(BOOL)arg2;
- (id)managedObjectContext;
- (id)contextIdentifier;
- (BOOL)isMainContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

