//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCExpressionTerm.h>

@class NSString;

@interface SPCExpressionOperatorTerm : SPCExpressionTerm
{
}

- (BOOL)resolveWithParser:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *operatorFunction;
@property(readonly, nonatomic) long long operatorArity;
@property(readonly, nonatomic) long long operatorAssociativity;
@property(readonly, nonatomic) long long operatorPrecedence;
- (long long)type;

@end

