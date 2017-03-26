//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKDistributionContainer.h>

@class NSError;

@interface PKMutableDistributionContainer : PKDistributionContainer
{
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
- (BOOL)commitReturningError:(id *)arg1;
- (BOOL)storeResourcesAtPath:(id)arg1 forLocalization:(id)arg2;
- (BOOL)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3;
- (BOOL)setStringsData:(id)arg1 forLocalization:(id)arg2;
- (BOOL)setDistributionFromContainer:(id)arg1;
- (void)setDistribution:(id)arg1;
- (id)initForWritingToArchive:(id)arg1;
- (id)initForWritingToPath:(id)arg1;

@end

