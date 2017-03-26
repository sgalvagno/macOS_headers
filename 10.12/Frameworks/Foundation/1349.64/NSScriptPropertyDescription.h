//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScriptSuiteDescription, NSSet, NSString;

@interface NSScriptPropertyDescription : NSObject
{
    NSString *_key;
    NSObject *_typeNameOrDescription;
    unsigned long long _access;
    BOOL _isHidden;
    NSSet *_readAccessGroups;
    NSSet *_writeAccessGroups;
    NSScriptSuiteDescription *_typeSuiteDescription;
}

+ (id)propertyDescriptionFromKey:(id)arg1 implDeclaration:(id)arg2 presoDeclaration:(id)arg3 suiteName:(id)arg4 className:(id)arg5;
- (void)addAccessGroups:(id)arg1;
- (void)addWriteAccessGroup:(id)arg1;
- (id)writeAccessGroups;
- (void)addReadAccessGroup:(id)arg1;
- (id)readAccessGroups;
- (unsigned int)appleEventCode;
- (BOOL)isHidden;
- (unsigned long long)access;
- (id)typeDescription;
- (id)key;
- (BOOL)matchesPresentableName:(id)arg1;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (id)fullTypeName;
- (void)setTypeDescription:(id)arg1 forReconcilingToSuiteRegistry:(id)arg2;
- (void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 className:(id)arg3;
- (void)dealloc;
- (id)initWithKey:(id)arg1 type:(id)arg2 access:(unsigned long long)arg3 isHidden:(BOOL)arg4 accessGroupDescriptions:(id)arg5;
- (void)appendElementClassDeclarationToAETEData:(id)arg1;
- (id)presentableRelationshipClassName;
- (id)description;

@end

