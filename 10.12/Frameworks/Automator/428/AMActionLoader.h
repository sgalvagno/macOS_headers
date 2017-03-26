//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AMActionLoader : NSObject
{
    NSMutableDictionary *_validationCache;
}

+ (id)sharedActionLoader;
- (id)validationErrorsForActionResourcesWithAction:(id)arg1;
- (id)validateWarningActionsForAction:(id)arg1;
- (id)validateActionResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2;
- (id)validateLicenseResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2;
- (id)validateCreatorResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2;
- (id)validateApplicationResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2;
- (id)validateFileResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2;
- (id)actionWithPropertyList:(id)arg1 error:(id *)arg2;
- (id)actionWithBundle:(id)arg1 error:(id *)arg2;
- (Class)classForActionWithBundle:(id)arg1 error:(id *)arg2;
- (id)actionWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)actionWithURL:(id)arg1 error:(id *)arg2;
- (id)cachingDictionaryForActionBundle:(id)arg1;
- (BOOL)shouldLoadActionWithIdentifier:(id)arg1;
- (id)resolvedIconURLForActionBundle:(id)arg1;
- (id)definitionForActionWithBundle:(id)arg1;
- (void)generateLocalizedKeywordsForDefinition:(id)arg1 fromBundle:(id)arg2;
- (void)generateLocalizedCategoryNamesForDefinition:(id)arg1 fromBundle:(id)arg2;
- (void)generateLocalizedApplicationNamesForDefinition:(id)arg1 fromBundle:(id)arg2;
- (id)bundleForActionWithPropertyList:(id)arg1;
- (id)bundleForActionWithBundleIdentifier:(id)arg1;
- (id)bundleForActionWithURL:(id)arg1 error:(id *)arg2;
- (id)nestedBundleWithBundleIdentifier:(id)arg1;
- (id)nestedBundleWithBundleName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

