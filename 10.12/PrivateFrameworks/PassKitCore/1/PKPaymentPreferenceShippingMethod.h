//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@class NSNumberFormatter, NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference
{
    NSNumberFormatter *_formatter;
    NSString *_currency;
}

@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (void).cxx_destruct;
- (BOOL)supportsDeletion;

@end

