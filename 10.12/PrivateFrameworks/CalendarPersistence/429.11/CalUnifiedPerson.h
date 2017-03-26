//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPerson, NSArray, NSDateComponents, NSString;

@interface CalUnifiedPerson : NSObject
{
    ABPerson *_mainPerson;
    NSString *_uid;
    NSArray *_linkedPeople;
    NSString *_linkID;
    NSDateComponents *_preferredBirthdayComponents;
    NSDateComponents *_preferredAlternateBirthdayComponents;
    NSString *_alternateBirthdayCalendarIdentifier;
}

+ (id)unifiedPersonForPeople:(id)arg1;
+ (id)unifiedPersonForPerson:(id)arg1;
@property(retain) NSString *alternateBirthdayCalendarIdentifier; // @synthesize alternateBirthdayCalendarIdentifier=_alternateBirthdayCalendarIdentifier;
@property(retain) NSString *linkID; // @synthesize linkID=_linkID;
@property(retain) NSArray *linkedPeople; // @synthesize linkedPeople=_linkedPeople;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) ABPerson *mainPerson; // @synthesize mainPerson=_mainPerson;
- (void)dealloc;
- (int)birthdayCalendarType;
- (id)preferredAlternateBirthday;
- (id)preferredBirthday;
- (BOOL)alternateBirthdayIsYearless;
- (BOOL)birthdayIsYearless;
- (id)initWithPreferredPerson:(id)arg1 linkedPeople:(id)arg2 preferredBirthdayComponents:(id)arg3 preferredAlternateBirthdayComponents:(id)arg4;

@end

