//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *matches;
@property(nonatomic) int pseudoId;
- (id)initWithPseudoId:(int)arg1 matches:(id)arg2;

@end

