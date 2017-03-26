//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSDictionary;

@interface SGPipeline : SGPipelineDissector
{
    NSDictionary *_dissectorsAndDependencies;
}

+ (id)quotedRegionPipelineForIpsosTesting;
+ (id)quotedRegionPipeline;
+ (id)pipelineAfterBackgroundProcessing;
+ (id)pipelineForBackgroundProcessing;
+ (id)fullPipeline;
+ (id)dissectorsForBackgroundProcessing;
+ (id)customPipeline:(id)arg1;
+ (id)parallelPipeline:(id)arg1;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
- (void).cxx_destruct;
- (void)dissectAndStoreSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 inContext:(id)arg5;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 destinationStore:(id)arg3 isReprocessing:(BOOL)arg4;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (void)_dissectEntity:(id)arg1 inContext:(id)arg2 andThen:(CDUnknownBlockType)arg3;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissectAndStore:(id)arg1 inContext:(id)arg2;
- (void)dissect:(id)arg1;
- (void)dissect:(id)arg1 inContext:(id)arg2;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 isReprocessing:(BOOL)arg7 originalEnrichmentCount:(unsigned long long)arg8;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 isReprocessing:(BOOL)arg4 originalEnrichmentCount:(unsigned long long)arg5;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (id)dissectOperations:(id)arg1;
- (id)dissectOperations:(id)arg1 inContext:(id)arg2;

@end

