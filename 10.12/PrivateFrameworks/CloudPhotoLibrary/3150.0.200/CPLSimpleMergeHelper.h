//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject
{
    CPLEngineStore *_store;
}

+ (id)_mergerWithConflictsForStore:(id)arg1;
+ (id)_mergerWithNoConflictsForStore:(id)arg1;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)mergerForBatch:(id)arg1 error:(id *)arg2;
- (BOOL)_changeCanConflict:(id)arg1;
- (id)initWithEngineStore:(id)arg1;

@end

