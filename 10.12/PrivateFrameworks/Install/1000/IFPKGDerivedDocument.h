//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Install/IFDocument.h>

@class NSArray, NSDictionary, NSError, NSLock, NSMutableArray, NSMutableDictionary, NSString, PFPackage;

@interface IFPKGDerivedDocument : IFDocument
{
    NSString *title;
    PFPackage *basePackage;
    NSLock *lock;
    BOOL allowsBackRev;
    BOOL rootVolumeOnly;
    BOOL legacyPackage;
    BOOL failedArchitectureCheck;
    NSMutableDictionary *uiSelectionCache;
    BOOL _documentReadAndValidationHaveBeenPerformed;
    BOOL _validationResult;
    NSError *_validationError;
    NSMutableArray *_searchModules;
    NSDictionary *installableCheckResults;
    NSArray *_preferredLocs;
    NSArray *_otherLocs;
    NSMutableDictionary *pfPackages;
    int _minTrustLevel;
    int _evaluatedTrustLevel;
    NSArray *_certificateChain;
    struct __SecTrust *_trustRef;
    NSString *_path;
}

- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;
- (int)trustLevelReturningCertificateChain:(id *)arg1;
- (BOOL)evaluateTrust;
- (void)setMinimumRequiredTrustLevel:(int)arg1;
- (int)minimumRequiredTrustLevel;
- (id)packagesForLocation:(id)arg1 fromSet:(id)arg2;
- (id)sortedPackageLocations;
- (id)objectForOptionNamed:(id)arg1;
- (BOOL)getData:(id *)arg1 andMIMEType:(id *)arg2 forResourceNamed:(id)arg3 forLanguage:(id)arg4;
- (id)languagesAvailableForResource:(id)arg1;
- (id)installableCheckResults;
- (BOOL)readAndValidateDocumentReturningError:(id *)arg1;
- (BOOL)hasInsecureChecks;
- (id)certificateIdentity;
- (void)clearPackages:(id)arg1;
- (id)package;
- (id)title;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)_findResourceForName:(id)arg1 requestedLoc:(id)arg2 fallback:(BOOL)arg3;
- (void)_pfTranslationForIFKey:(id)arg1 outType:(id *)arg2 outPFName:(id *)arg3;
- (const char *)authorizationStringForLevel:(int)arg1;
- (id)choiceForPackage:(id)arg1 onTarget:(id)arg2 withScriptString:(id)arg3;
- (void)addChoiceChildrenForPackage:(id)arg1 toChoiceNode:(id)arg2 onTarget:(id)arg3 withScriptString:(id)arg4;
- (void)_buildScriptsForPackage:(id)arg1 partOfChoice:(id)arg2 intoString:(id)arg3;
- (id)_buildPackageCacheObjectForPackage:(id)arg1 atPath:(id)arg2 withParentSelection:(id)arg3;
- (void)_buildPackageCacheObjects;
- (id)_PFPackageForPackage:(id)arg1;
- (id)_packageForPFPackage:(id)arg1;
- (void)_packagesForLocation:(id)arg1 fromSet:(id)arg2 withPackage:(id)arg3 intoList:(id)arg4;
- (void)_addSelectedMetapackages:(id)arg1 fromPackage:(id)arg2;
- (void)addPackage:(id)arg1;
- (id)_hackForBundleSoftwareRequirementsWithPackage:(id)arg1 withCurrentError:(id)arg2 onTarget:(id)arg3;
- (void)_iLife04HackToQuitiTunesHelperIfiTunesIsntRunning;
- (BOOL)_iTunesPackage:(id)arg1 shouldBeDisabledOnTarget:(id)arg2;
- (id)_postRequirementRunCompatibilityHacksForPackage:(id)arg1 onTarget:(id)arg2 withCurrentError:(id)arg3;
- (void)_preRequirementRunCompatibilityHacksForPackage:(id)arg1 onTarget:(id)arg2;
- (id)searchDefinitions;
- (id)copyChoiceTreeWithScripts:(id *)arg1 andChoiceList:(id *)arg2 forTarget:(id)arg3;
- (id)errorForPackage:(id)arg1 onTarget:(id)arg2 withCustomizationController:(id)arg3;
- (id)_receiptVersionCheckOnTarget:(id)arg1;

@end

