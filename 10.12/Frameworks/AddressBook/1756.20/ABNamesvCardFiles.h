//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABNamesvCardFiles : NSObject
{
}

+ (id)stringByReplacingUnsafePathCharactersInString:(id)arg1;
+ (id)pathWithNames:(id)arg1 inDirectory:(id)arg2 fileManager:(id)arg3;
+ (id)pathWithNames:(id)arg1 inDirectory:(id)arg2;
+ (id)conflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3;
+ (id)unconflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2;
+ (id)nameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3;
+ (id)conflictedNameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3;
+ (id)unconflictedNameWithName:(id)arg1 andName:(id)arg2;
+ (id)nameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3;
+ (id)conflictedNameWithName:(id)arg1 conflicts:(unsigned long long)arg2;
+ (id)unconflictedNameWithName:(id)arg1;
+ (id)nameWithName:(id)arg1 conflicts:(unsigned long long)arg2;
+ (id)nameWithStrings:(id)arg1 conflicts:(unsigned long long)arg2;
+ (id)nameWithStrings:(id)arg1;
+ (id)nameForPerson:(id)arg1 andOthers:(unsigned long long)arg2;
+ (id)nameForPerson:(id)arg1 andPerson:(id)arg2;
+ (id)nameForPersonAsCompany:(id)arg1;
+ (id)nameForPersonAsPerson:(id)arg1;
+ (id)nameForPerson:(id)arg1;
+ (id)nameForPeople:(id)arg1;

@end

