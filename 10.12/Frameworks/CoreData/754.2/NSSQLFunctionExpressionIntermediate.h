//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLExpressionIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate
{
}

+ (BOOL)functionIsAcceptableAsAggregate:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateLengthStringInContext:(id)arg1;
- (id)_generateNowStringInContext:(id)arg1;
- (id)_generateDistinctStringInContext:(id)arg1;
- (id)_generateType4SQLForSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForCountInContext:(id)arg1;
- (id)generateType3SQLString:(id)arg1 keypathOnly:(BOOL)arg2 inContext:(id)arg3;
- (id)generateType2SQLString:(id)arg1 inContext:(id)arg2;
- (id)generateType1SQLString:(id)arg1 inContext:(id)arg2;
- (id)_generateSelectForAggregateStringWithSymbol:(id)arg1 argument:(id)arg2 inContext:(id)arg3;
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg1 forExpression:(id)arg2 inContext:(id)arg3;
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg1 forAttribute:(id)arg2 inContext:(id)arg3;
- (id)_generateMathStringWithSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateArgumentStringForCollection:(id)arg1 inContext:(id)arg2;
- (BOOL)isFunctionScoped;

@end

