//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUMetadataDestinationID : NSObject
{
    NSString *_destinationID;
    NSString *_countryCode;
    NSString *_cacheKey;
    struct __CFPhoneNumber *_phoneNumber;
}

+ (id)destinationIDWithRecentCall:(id)arg1;
+ (id)destinationIDWithCall:(id)arg1;
+ (id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2;
@property(nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithRecentCall:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;
- (void)dealloc;

@end

