//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPSentenceFeatureExtractor : IPFeatureExtractor
{
}

- (id)queueType;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)eventIdentifierForLanguageID:(id)arg1;
- (void)identifyAndStorePolarityInFeatureSentences:(id)arg1 eventIdentifier:(id)arg2 previousFeatureSentences:(id)arg3;
- (id)featureSentencesFromText:(id)arg1 dataDetectedFeatures:(id)arg2 languageID:(id)arg3;
- (unsigned long long)responseKitAnnotationTypeForFeatureDataType:(unsigned long long)arg1;

@end

