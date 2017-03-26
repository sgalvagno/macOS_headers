//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSPredicateVisitor-Protocol.h>

@class NSMutableArray, NSString;

@interface _NSFilterPredicateVisitor : NSObject <NSPredicateVisitor>
{
    NSMutableArray *_predicateParts;
    unsigned long long _predicatePartsCount;
    BOOL _didFirstVisit;
    BOOL _bail;
    unsigned long long _visitingIndex;
    NSString *_substitutedValue;
}

- (id)result;
- (id)substitutedValueForPredicate:(id)arg1;
- (void)reset;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;

@end

