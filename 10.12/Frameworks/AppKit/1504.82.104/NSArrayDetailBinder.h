//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObjectDetailBinder.h>

@interface NSArrayDetailBinder : NSObjectDetailBinder
{
    struct __arrayDetailBinderFlags {
        unsigned int _selectsAllWhenSettingContent:1;
        unsigned int _usedMultipleSelectionArray:1;
        unsigned int _reservedArrayDetailBinder:30;
    } _arrayDetailBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)binderClassesSuperseded;
- (BOOL)removeObjectsFromMasterArrayRelationshipAtIndexes:(id)arg1 selectionMode:(int *)arg2;
- (BOOL)removeObjectFromMasterArrayRelationshipAtIndex:(unsigned long long)arg1 selectionMode:(int *)arg2;
- (BOOL)insertObjectsIntoMasterArrayRelationship:(id)arg1 atIndexes:(id)arg2 selectionMode:(int *)arg3;
- (BOOL)insertObjectIntoMasterArrayRelationship:(id)arg1 atIndex:(unsigned long long)arg2 selectionMode:(int *)arg3;
- (BOOL)addObjectsToMasterArrayRelationship:(id)arg1 selectionMode:(int *)arg2;
- (BOOL)addObjectToMasterArrayRelationship:(id)arg1 selectionMode:(int *)arg2;
- (BOOL)_performArrayBinderOperation:(long long)arg1 singleObject:(id)arg2 multipleObjects:(id)arg3 singleIndex:(unsigned long long)arg4 multipleIndexes:(id)arg5 selectionMode:(int *)arg6;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)refreshDetailContent;
- (void)_refreshDetailContentInBackground:(BOOL)arg1;
- (void)_selectAllContent:(id)arg1 inDetailController:(id)arg2;
- (BOOL)_canGuaranteeOrderOfContentObjects;
- (id)_referenceBinding;
- (BOOL)selectsAllWhenSettingContent;
- (void)setSelectsAllWhenSettingContent:(BOOL)arg1;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (BOOL)_handlesSelectAll;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (BOOL)isBindingReadOnly:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;
- (id)availableBindings;

@end

