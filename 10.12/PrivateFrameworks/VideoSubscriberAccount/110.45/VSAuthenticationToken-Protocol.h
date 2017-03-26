//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol VSAuthenticationToken <NSObject>
@property(readonly, copy, nonatomic) NSData *serializedData;
@property(copy, nonatomic) NSString *body;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (BOOL)isValid;
- (BOOL)isOpaque;
- (id)initWithSerializedData:(NSData *)arg1;
@end

