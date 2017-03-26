//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CNChangeHistory : NSObject <NSSecureCoding>
{
    BOOL _changesTruncated;
    long long _latestSequenceNumber;
    NSArray *_contactChanges;
    NSArray *_groupChanges;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *groupChanges; // @synthesize groupChanges=_groupChanges;
@property(retain) NSArray *contactChanges; // @synthesize contactChanges=_contactChanges;
@property long long latestSequenceNumber; // @synthesize latestSequenceNumber=_latestSequenceNumber;
@property BOOL changesTruncated; // @synthesize changesTruncated=_changesTruncated;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

