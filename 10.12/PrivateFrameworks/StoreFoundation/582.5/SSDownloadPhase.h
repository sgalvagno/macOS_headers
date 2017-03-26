//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSCopying-Protocol.h>
#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSSecureCoding, NSCopying>
{
    SSOperationProgress *_operationProgress;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) SSOperationProgress *operationProgress;
@property(readonly) long long totalProgressValue;
@property(readonly) long long progressValue;
@property(readonly) float progressChangeRate;
@property(readonly) long long progressUnits;
@property(readonly) long long phaseType;
@property(readonly) double estimatedSecondsRemaining;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperationProgress:(id)arg1;
- (id)init;

@end

