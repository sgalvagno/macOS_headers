//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLColumn.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLPrimaryKey : NSSQLColumn
{
    NSString *_name;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)_setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)sqlTypeString;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end

