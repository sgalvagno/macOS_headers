//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LKAUpgradeOutcomeReport : NSObject
{
    int _outcome;
    NSDictionary *_attributes;
}

@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property int outcome; // @synthesize outcome=_outcome;
- (void).cxx_destruct;
- (id)initWithOutcome:(int)arg1 attributes:(id)arg2;

@end

