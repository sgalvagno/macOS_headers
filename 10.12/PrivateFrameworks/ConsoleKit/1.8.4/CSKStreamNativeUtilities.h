//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSKStreamNativeUtilities : NSObject
{
}

+ (id)_exclusionPredicateWithKey:(id)arg1 values:(id)arg2;
+ (id)_createLossyStringForCString:(const char *)arg1;
+ (id)exclusionPredicateWithActivityEventSenderImagePaths:(id)arg1;
+ (id)exclusionPredicateWithActivityEventProcessImagePaths:(id)arg1;
+ (id)messageFromASLObject:(struct __asl_object_s *)arg1;
+ (long long)messageTypeForActivityEventMessageType:(unsigned char)arg1;
+ (id)entityFromActivityEvent:(id)arg1 usingTimeZone:(id)arg2;
+ (void)makeEntitiesFromActivityEvents:(id)arg1 usingTimeZone:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

