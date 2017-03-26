//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCExpression.h>

@class NSArray, NSString;

@interface SPCFunctionExpression : SPCExpression
{
    NSString *_functionName;
    NSArray *_arguments;
}

+ (id)expressionWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)referencedVariables;
- (id)expressionString;
- (long long)expressionType;
- (id)description;
- (id)representationForSPCArchive:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;

@end

