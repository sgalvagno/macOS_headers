//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

@protocol GEOServerFormatToken <NSObject>
@property(readonly, nonatomic) NSArray *timeStampValues;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artworkValue;
@property(readonly, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) NSArray *value3s;
@property(readonly, nonatomic) unsigned int value2;
@property(readonly, nonatomic) unsigned int value1;
@property(readonly, nonatomic) NSString *token;
@property(readonly, nonatomic) long long type;
@end

