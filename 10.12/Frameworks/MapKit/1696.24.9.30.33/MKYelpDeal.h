//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapItemVendorDeal-Protocol.h>

@class NSString;

@interface MKYelpDeal : NSObject <MKMapItemVendorDeal>
{
    NSString *identifier;
    NSString *title;
    NSString *urlString;
}

+ (id)dealWithJSONObject:(id)arg1;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

