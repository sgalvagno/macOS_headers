//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLColumn.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn
{
}

- (void)addKeyForTriggerOnRelationship:(id)arg1;
@property(readonly, nonatomic) NSSet *triggerKeys;
- (void)_setIsBackedByTrigger:(BOOL)arg1;
- (BOOL)isBackedByTrigger;
@property(nonatomic, getter=isConstrained) BOOL constrained;
- (BOOL)isUnique;
- (BOOL)shouldIndex;
- (id)attributeDescription;
- (void)dealloc;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2;

@end

