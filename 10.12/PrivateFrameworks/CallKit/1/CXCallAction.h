//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXCallAction : CXAction
{
    NSUUID *_callUUID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *callUUID; // @synthesize callUUID=_callUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)fulfillWithResponse:(id)arg1;
- (id)customDescription;
- (id)init;
- (id)initWithCallUUID:(id)arg1;

@end

