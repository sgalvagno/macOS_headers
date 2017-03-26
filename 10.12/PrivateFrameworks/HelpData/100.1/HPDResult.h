//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpData/NSCoding-Protocol.h>
#import <HelpData/NSCopying-Protocol.h>

@class NSNumber, NSString, NSXMLElement;

@interface HPDResult : NSObject <NSCoding, NSCopying>
{
    NSString *_type;
    NSString *_title;
    NSNumber *_relevance;
    id _payload;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)resultWithTitle:(id)arg1 andType:(id)arg2;
@property(retain) id payload; // @synthesize payload=_payload;
@property(retain) NSNumber *relevance; // @synthesize relevance=_relevance;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *isDuplicateApp;
@property(readonly, copy) NSString *appVersion;
@property(readonly, copy) NSString *bookID;
@property(readonly, copy) NSString *summary;
@property(readonly, copy) NSString *url;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSXMLElement *elementValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)titleCompare:(id)arg1;
- (long long)relevanceCompare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 andType:(id)arg2;

@end

