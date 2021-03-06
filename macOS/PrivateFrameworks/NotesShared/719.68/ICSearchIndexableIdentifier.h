//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class ICSearchIndexableNoteContextIdentifier, NSManagedObjectContext, NSString;

@interface ICSearchIndexableIdentifier : NSObject <NSCopying>
{
    ICSearchIndexableNoteContextIdentifier *_contextIdentifier;
    NSString *_objectIdentifier;
    NSManagedObjectContext *_managedObjectContext;
}

@property(readonly, nonatomic) __weak NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, copy, nonatomic) NSString *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, copy, nonatomic) ICSearchIndexableNoteContextIdentifier *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
- (void).cxx_destruct;
- (id)specificIdentifierForContextIdentifier:(id)arg1;
- (BOOL)hasContextIdentifier:(id)arg1;
- (BOOL)forAnyContext;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForAnyContextWithObjectIdentifier:(id)arg1 managedObjectContext:(id)arg2;
- (id)initWithContextIdentifier:(id)arg1 objectIdentifier:(id)arg2 managedObjectContext:(id)arg3;

@end

