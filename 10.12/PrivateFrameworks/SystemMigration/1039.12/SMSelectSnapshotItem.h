//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SystemMigration/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SMSelectSnapshotItem : NSObject <NSSecureCoding>
{
    NSString *_uuid;
    NSDate *_date;
    NSString *_machineName;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *machineName; // @synthesize machineName=_machineName;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

