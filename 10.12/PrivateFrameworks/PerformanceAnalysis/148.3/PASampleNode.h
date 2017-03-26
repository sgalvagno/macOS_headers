//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol PASampleNodeDataSource;

@interface PASampleNode : NSObject
{
    id <PASampleNodeDataSource> dataSource;
    PASampleNode *parent;
    NSArray *children;
    BOOL isInSearchResult;
}

@property(retain) NSArray *children; // @synthesize children;
@property PASampleNode *parent; // @synthesize parent;
@property BOOL isInSearchResult; // @synthesize isInSearchResult;
@property id <PASampleNodeDataSource> dataSource; // @synthesize dataSource;
- (void)recalculateSamples;
- (unsigned long long)responsibleSamples;
- (unsigned long long)samples;
- (id)displayName;
- (BOOL)shouldDisplay;
- (id)init;

@end

