//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@class NSSet;

@interface EKPredicate : NSPredicate
{
    BOOL _skipSorting;
    NSSet *_calendarIdentifiers;
    CDUnknownBlockType _sortComparator;
}

@property(copy, nonatomic) CDUnknownBlockType sortComparator; // @synthesize sortComparator=_sortComparator;
@property(nonatomic) BOOL skipSorting; // @synthesize skipSorting=_skipSorting;
@property(retain, nonatomic) NSSet *calendarIdentifiers; // @synthesize calendarIdentifiers=_calendarIdentifiers;
- (void).cxx_destruct;
- (id)fastPathResultWithStore:(id)arg1;
- (BOOL)hasFastPathWithStore:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)description;

@end

