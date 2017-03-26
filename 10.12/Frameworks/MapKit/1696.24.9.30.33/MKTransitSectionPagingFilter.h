//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKTransitSectionPagingFilter : NSObject
{
    BOOL _limitNumLines;
    unsigned long long _numLinesFallbackThreshold;
    unsigned long long _numLinesFallbackValue;
}

+ (id)defaultFilterForInactiveLines;
+ (id)defaultFilterForDepartures;
@property(nonatomic) unsigned long long numLinesFallbackValue; // @synthesize numLinesFallbackValue=_numLinesFallbackValue;
@property(nonatomic) unsigned long long numLinesFallbackThreshold; // @synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold;
@property(nonatomic) BOOL limitNumLines; // @synthesize limitNumLines=_limitNumLines;

@end

