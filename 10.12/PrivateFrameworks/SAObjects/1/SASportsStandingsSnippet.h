//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet
{
}

+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)standingsSnippet;
@property(nonatomic) BOOL showCardinalPositions;
@property(copy, nonatomic) NSArray *selectedEntities;
@property(copy, nonatomic) NSArray *entities;
@property(copy, nonatomic) NSArray *columns;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

