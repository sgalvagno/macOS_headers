//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, CDSession;

@interface PRSCoreDuet : NSObject
{
    CDSession *_cdSession;
    CDAttribute *_spotlightAttr;
    CDAttribute *_bundleIdAttribute;
}

@property(retain) CDAttribute *bundleIdAttribute; // @synthesize bundleIdAttribute=_bundleIdAttribute;
@property(retain) CDAttribute *spotlightAttr; // @synthesize spotlightAttr=_spotlightAttr;
@property(retain) CDSession *cdSession; // @synthesize cdSession=_cdSession;
- (void).cxx_destruct;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 cost:(unsigned long long)arg3 error:(id)arg4;
- (void)addResultCategoryToHistory:(id)arg1 cost:(unsigned long long)arg2 error:(id)arg3;
- (id)getRankedCategories;
- (id)getTopApps;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)getRankedCategoriesWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)initWithDuetClientID:(unsigned long long)arg1 attributeString:(id)arg2;

@end

