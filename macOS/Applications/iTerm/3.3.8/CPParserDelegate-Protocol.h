//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPParser, CPRecoveryAction, CPSyntaxTree, CPTokenStream, NSSet;

@protocol CPParserDelegate <NSObject>

@optional
- (CPRecoveryAction *)parser:(CPParser *)arg1 didEncounterErrorOnInput:(CPTokenStream *)arg2 expecting:(NSSet *)arg3;
- (CPRecoveryAction *)parser:(CPParser *)arg1 didEncounterErrorOnInput:(CPTokenStream *)arg2;
- (id)parser:(CPParser *)arg1 didProduceSyntaxTree:(CPSyntaxTree *)arg2;
@end

