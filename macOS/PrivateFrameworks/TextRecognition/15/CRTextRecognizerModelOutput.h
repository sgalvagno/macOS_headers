//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_output_label_prob_map;
}

@property(retain, nonatomic) MLMultiArray *output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput_label_prob_map:(id)arg1;

@end

