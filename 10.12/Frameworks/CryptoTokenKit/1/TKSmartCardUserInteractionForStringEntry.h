//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSString, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding>
{
    NSString *_result;
    TKSmartCardSlot *_slot;
}

+ (BOOL)supportsSecureCoding;
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property(retain) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

