//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCNPostalAddress;

__attribute__((visibility("hidden")))
@interface ABAddressFieldValuePopulator : NSObject
{
    ABCNPostalAddress *_postalAddress;
}

@property(readonly) ABCNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void).cxx_destruct;
- (void)populateAddressFields:(id)arg1;
- (id)valueForComponentKeypath:(id)arg1;
- (id)cardViewTagToValueKeypathMap;
- (id)initWithPostalAddress:(id)arg1;

@end

