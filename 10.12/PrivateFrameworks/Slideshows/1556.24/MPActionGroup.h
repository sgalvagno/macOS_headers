//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MPAction.h>

#import <Slideshows/MPActionSupport-Protocol.h>

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport>
{
    NSMutableArray *_actions;
}

+ (id)actionGroup;
- (void)setAction:(id)arg1;
- (void)configureTarget;
- (void)configureAction:(id)arg1 atIndex:(long long)arg2;
- (void)copyActions:(id)arg1;
- (void)removeAllActions;
- (void)removeActionsAtIndices:(id)arg1;
- (void)insertActions:(id)arg1 atIndex:(long long)arg2;
- (void)addActions:(id)arg1;
- (void)insertAction:(id)arg1 atIndex:(long long)arg2;
- (void)addAction:(id)arg1;
- (id)actions;
- (unsigned long long)numberOfActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

