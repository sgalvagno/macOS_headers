//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider;

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
- (void)sendFeedbackWithCorrections:(NSDictionary *)arg1 forFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3;
@end

