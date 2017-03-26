//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLColumn.h>

@class NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey : NSSQLColumn
{
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setFKForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (void)_setName:(id)arg1;
- (id)name;
- (id)foreignKey;
- (id)toOneRelationship;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;

@end

