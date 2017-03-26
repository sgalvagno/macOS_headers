//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreJavaScript/NSSecureCoding-Protocol.h>

@class NSString;
@protocol NSSecureCoding;

@interface FRWKBundleMessage : NSObject <NSSecureCoding>
{
    NSString *_message;
    id <NSSecureCoding> _body;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) id <NSSecureCoding> body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 body:(id)arg2;

@end

