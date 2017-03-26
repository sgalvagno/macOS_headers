//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>
{
    long long _databaseScope;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)activityCreate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

