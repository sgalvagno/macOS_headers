//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXHAUtilities : NSObject
{
}

+ (id)objectFromXDCObject:(id)arg1;
+ (id)XDCObjectFromObject:(id)arg1;
+ (id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2;
+ (id)copyXPCMessageFromDictionary:(id)arg1 inReplyToXPCMessage:(id)arg2 error:(id *)arg3;
+ (id)dictionaryFromXPCMessage:(id)arg1 error:(id *)arg2;

@end

