//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGContactDetailsHolder : NSObject
{
    NSArray *_emailAddresses;
    NSArray *_postalAddresses;
    NSArray *_phoneNumbers;
    NSArray *_instantMessageAddresses;
}

@property(retain) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(retain) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;

@end

