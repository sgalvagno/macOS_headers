//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKBatchChangeInfo.h>

@class NSDateComponents;

@interface EKRecurrenceChangeInfo : EKBatchChangeInfo
{
    long long _changeType;
    NSDateComponents *_offset;
}

@property(retain) NSDateComponents *offset; // @synthesize offset=_offset;
@property long long changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)updatedIdentifier:(id)arg1;

@end

