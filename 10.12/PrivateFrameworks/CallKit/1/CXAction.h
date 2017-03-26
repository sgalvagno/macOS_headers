//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableString, NSString, NSUUID;
@protocol CXActionDelegate;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    long long _state;
    long long _failureReason;
    NSDate *_commitDate;
    id <CXActionDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
+ (double)timeout;
@property(nonatomic) __weak id <CXActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *commitDate; // @synthesize commitDate=_commitDate;
@property(nonatomic) long long failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFailedWithReason:(long long)arg1;
- (void)updateAsFulfilled;
- (void)failWithError:(id)arg1;
- (void)fail;
- (void)fulfill;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
@property(readonly, nonatomic) NSDate *timeoutDate;
@property(readonly, copy, nonatomic) NSMutableString *customDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

