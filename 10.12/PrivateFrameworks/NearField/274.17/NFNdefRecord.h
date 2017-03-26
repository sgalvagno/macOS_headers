//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@class NSData;

@interface NFNdefRecord : NSObject <NSSecureCoding>
{
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

+ (id)_decodeURIRecord:(id)arg1;
+ (id)_decodeTextRecord:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)recordsFromBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (id)recordWithTelephone:(id)arg1;
+ (id)recordWithURI:(id)arg1;
+ (id)recordWithText:(id)arg1 lang:(id)arg2;
+ (id)emptyRecord;
@property(retain, nonatomic) NSData *type; // @synthesize type=_type;
- (id)decode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (id)description;
- (void)_parse:(struct _NFDataScanner *)arg1;
- (void)_setIdLengthPresent:(BOOL)arg1;
- (BOOL)_idLengthPresent;
@property(retain, nonatomic) NSData *payload;
@property(retain, nonatomic) NSData *identifier;
@property(nonatomic) unsigned char typeNameFormat;
@property(nonatomic) BOOL shortRecord;
@property(nonatomic) BOOL chunked;
@property(nonatomic) BOOL messageEnd;
@property(nonatomic) BOOL messageBegin;
- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;

@end

