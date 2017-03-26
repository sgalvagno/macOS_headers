//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Install/NSCoding-Protocol.h>
#import <Install/NSCopying-Protocol.h>

@class NSMapTable, NSMutableDictionary, PathTree;

@interface IFInstallPlan : NSObject <NSCoding, NSCopying>
{
    PathTree *_installTree;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_idToNode;
    NSMutableDictionary *_nodeActions;
    NSMapTable *_regexActions;
}

+ (id)planWithContentsOfFile:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerator;
- (id)nodesForActionType:(id)arg1;
- (void)addAction:(id)arg1 toNode:(id)arg2;
- (void)removeAction:(id)arg1 fromNode:(id)arg2;
- (id)unresolvedActionsForNode:(id)arg1;
- (id)allAttributes;
- (void)removeValueForAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (BOOL)setValue:(id)arg1 forAttribute:(id)arg2;
- (unsigned int)numberOfNodes;
- (BOOL)hasPatch;
- (void)setIsPatchForNode:(id)arg1;
- (BOOL)isPatchForNode:(id)arg1;
- (BOOL)shouldSkipPath:(id)arg1;
- (void)setShouldSkipPath:(id)arg1;
- (void)setShouldSkipNode:(id)arg1;
- (BOOL)shouldSkipNode:(id)arg1;
- (id)alternatePathForLastParentNode:(id)arg1 onPath:(const char *)arg2;
- (id)alternatePathForPath:(id)arg1;
- (void)setAlternatePath:(id)arg1 forPath:(id)arg2;
- (void)setAlternatePath:(id)arg1 forNode:(id)arg2;
- (id)alternatePathForNode:(id)arg1;
- (id)nodeIdentifiers;
- (void)setIdentifier:(id)arg1 forNode:(id)arg2;
- (id)nodeForIdentifier:(id)arg1;
- (id)nodeForPath:(const char *)arg1 returningLastNode:(id *)arg2;
- (id)nodeForPath:(const char *)arg1;
- (BOOL)pathExists:(const char *)arg1;
- (void)removeNode:(id)arg1;
- (void)removePath:(const char *)arg1;
- (id)addPath:(const char *)arg1 withType:(int)arg2;
- (void)dealloc;
- (id)initWithRootPath:(const char *)arg1;
- (id)init;
- (id)description;
- (void)printPlan:(BOOL)arg1;

@end

