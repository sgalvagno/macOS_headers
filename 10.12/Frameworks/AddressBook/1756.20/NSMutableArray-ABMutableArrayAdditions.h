//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (ABMutableArrayAdditions)
- (void)_ab_transformObjects:(CDUnknownBlockType)arg1;
- (void)_ab_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)_abRemoveObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)abAddObjectsFromNonNilArray:(id)arg1;
- (void)_ab_insertNonNilObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)abAddNonNilObject:(id)arg1;
- (void)abRotateRightRange:(struct _NSRange)arg1;
- (void)abAddUniqueObjectsFromArray:(id)arg1;
@end

