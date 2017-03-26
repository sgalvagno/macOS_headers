//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PXLayoutPageMap : NSObject
{
    NSMapTable *_pageMap;
    id *_globalItems;
    unsigned long long _numberOfSources;
    struct CGRect _contentRect;
}

@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) unsigned long long numberOfSources; // @synthesize numberOfSources=_numberOfSources;
- (void).cxx_destruct;
- (void)addSource:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)sourcesFromRect:(struct CGRect)arg1;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

