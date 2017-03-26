//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCDRecordNameFormatter, NSPredicate, NSString;

@interface ABPersonEntryFactory : NSObject
{
    NSString *_property;
    long long _propertyType;
    unsigned long long _resultType;
    NSPredicate *_filterPredicate;
    unsigned long long _defaultNameOrder;
    ABCDRecordNameFormatter *_recordNameFormatter;
}

@property unsigned long long resultType; // @synthesize resultType=_resultType;
- (id)pickerPropertyObjectsForAllRecords:(id)arg1;
- (id)searchStringForAllRecords:(id)arg1;
- (id)peoplePickerSubrowObjectBuilderForRecords:(id)arg1;
- (id)personEntryForLinkedContacts:(id)arg1;
- (id)personEntryForRecord:(id)arg1 suggestionIdentifier:(id)arg2;
- (id)personEntryForRecord:(id)arg1;
- (id)linkIdentifierForRecord:(id)arg1;
- (unsigned long long)nameOrderForRecord:(id)arg1;
- (unsigned long long)iconTypeForRecord:(id)arg1;
- (id)sectionKeyForRecord:(id)arg1;
- (id)nameForRecord:(id)arg1 rangeOfSortingSubstring:(struct _NSRange *)arg2;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 propertyFilterPredicate:(id)arg2 propertyType:(long long)arg3 resultType:(unsigned long long)arg4 userDefaults:(id)arg5;
- (id)initWithProperty:(id)arg1 propertyFilterPredicate:(id)arg2 propertyType:(long long)arg3 resultType:(unsigned long long)arg4;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end

