//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSCopying-Protocol.h>

@class NSString;

@interface ABCNGroupIdentifier : NSObject <NSCopying>
{
    NSString *_stringValue;
}

+ (id)identifierWithString:(id)arg1;
@property(readonly) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

