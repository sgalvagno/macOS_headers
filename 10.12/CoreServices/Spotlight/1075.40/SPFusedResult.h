//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSParsecSimpleResult.h>

@class NSArray, NSMutableArray;

@interface SPFusedResult : PRSParsecSimpleResult
{
    NSMutableArray *_childResults;
}

@property(readonly) NSArray *childResults; // @synthesize childResults=_childResults;
- (void).cxx_destruct;
- (BOOL)isLocalResult;
- (void)addResult:(id)arg1;
- (id)initWithResult:(id)arg1;

@end

