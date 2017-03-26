//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface VCPExifAnalyzer : NSObject
{
    NSDictionary *_properties;
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_results;
}

- (void).cxx_destruct;
- (int)analyzeAsset:(unsigned long long *)arg1 results:(id *)arg2;
- (int)addFaceResults:(id)arg1 flags:(unsigned long long *)arg2;
- (struct CGAffineTransform)transformUprightAboutTopLeft:(unsigned int)arg1;
- (id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;

@end

