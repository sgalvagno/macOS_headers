//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iPodSync/ISyncFiltering-Protocol.h>

@interface iPodCalendarFilter : NSObject <ISyncFiltering>
{
    BOOL _needsUpdate;
    BOOL _useAllCalendars;
    struct __CFArray *_usedCalendarGroups;
}

+ (void)setCalendarFilterHelper:(id)arg1;
- (BOOL)shouldApplyRecord:(id)arg1 withRecordIdentifier:(id)arg2;
- (id)supportedEntityNames;
- (BOOL)isEqual:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;
- (BOOL)needsUpdate;
- (void)setUsedCalendarGroupIDs:(struct __CFArray *)arg1 withSnapshot:(id)arg2;
- (void)setUsedCalendarGroups:(struct __CFArray *)arg1;
- (struct __CFArray *)usedCalendarGroupIDsForSnapshot:(id)arg1;
- (struct __CFArray *)usedCalendarGroups;
- (void)setUseAllCalendars:(BOOL)arg1;
- (BOOL)useAllCalendars;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

