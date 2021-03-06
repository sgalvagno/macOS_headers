//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLDictionarySerializableProtocol.h"
#import "PMLPlistAndChunksSerializableProtocol.h"

@class NSString, PMLDenseVector;

@interface PMLModelRegressor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol>
{
    PMLDenseVector *_data;
}

+ (id)regressorVectorFrom:(id)arg1;
+ (id)modelRegressorFromFloat:(float)arg1;
+ (id)modelRegressorFromFloats:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) int count;
- (const float *)inverseValues;
- (const float *)values;
- (id)regressorFor:(int)arg1;
- (id)init;
- (id)initWithRegressorFromFloat:(float)arg1;
- (id)initModelRegressorFromFloats:(id)arg1;
- (id)denseVector;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

