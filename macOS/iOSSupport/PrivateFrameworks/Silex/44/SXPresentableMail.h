//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentableMail : NSObject
{
    NSString *_recipient;
    NSString *_subject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;

@end

