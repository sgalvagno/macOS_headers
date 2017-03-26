//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiFilter;

@interface LiCancellableFilter : NSObject
{
    int _cancelled;
    LiFilter *_filter;
    CDUnknownBlockType _atEndRidListBlock;
    CDUnknownBlockType _atEndSetBlock;
}

@property(copy, nonatomic) CDUnknownBlockType atEndSetBlock; // @synthesize atEndSetBlock=_atEndSetBlock;
@property(copy, nonatomic) CDUnknownBlockType atEndRidListBlock; // @synthesize atEndRidListBlock=_atEndRidListBlock;
@property(retain, nonatomic) LiFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (BOOL)cancel;
- (void)resolveModelsLoadingProperties:(id)arg1 excludingModelIds:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (void)resolveModelIdListExcludingModelIds:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (id)initWithFilter:(id)arg1;

@end

