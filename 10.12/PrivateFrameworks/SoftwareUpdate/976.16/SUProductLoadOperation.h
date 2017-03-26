//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSData, NSDictionary, NSError, NSString, NSURL, SUMetadataCache, SUProduct;

@interface SUProductLoadOperation : NSOperation
{
    NSString *_productKey;
    NSURL *_distributionURL;
    NSData *_distributionData;
    NSDictionary *extraInfo;
    BOOL shouldBuildCacheOnly;
    SUMetadataCache *metadataCache;
    NSDictionary *distributionEnv;
    SUProduct *_product;
    NSError *_error;
    NSDictionary *_distributionEvaluationMetainfo;
}

@property(retain) NSDictionary *distributionEvaluationMetainfo; // @synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo;
@property(retain) NSDictionary *distributionEnv; // @synthesize distributionEnv;
@property(retain) SUMetadataCache *metadataCache; // @synthesize metadataCache;
@property BOOL shouldBuildCacheOnly; // @synthesize shouldBuildCacheOnly;
@property(retain) NSDictionary *extraInfo; // @synthesize extraInfo;
- (id)error;
- (id)product;
- (BOOL)_isValidChoice:(id)arg1;
- (BOOL)applyPKMDataByPackageURL:(id)arg1;
- (BOOL)evaluateProductReturningEvalMessages:(id *)arg1 predicateScan:(BOOL)arg2;
- (BOOL)evaluateProductForPredicateScan:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProductKey:(id)arg1 distributionURL:(id)arg2 distributionData:(id)arg3;

@end

