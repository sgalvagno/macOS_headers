//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class PKPaymentSetupField;

@interface PKPaymentSetupFieldFormatter : NSFormatter
{
    PKPaymentSetupField *_paymentSetupField;
}

@property(nonatomic) __weak PKPaymentSetupField *paymentSetupField; // @synthesize paymentSetupField=_paymentSetupField;
- (void).cxx_destruct;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end

