//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNKeyDescriptor-Protocol.h>

@class NSSet, NSString;

@protocol CNKeyDescriptor_Private <CNKeyDescriptor>
- (void)_cn_executeGetterForRepresentedKeys:(id (^)(NSString *))arg1;

@optional
- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
- (NSSet *)_cn_requiredKeys;
@end

