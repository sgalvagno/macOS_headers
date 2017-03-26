//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACSHKeyTranslator : NSObject
{
    NSMutableDictionary *_USBToMac;
    NSMutableDictionary *_macToUSB;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedTranslator;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)USBCodeForMacCode:(short)arg1;
- (unsigned long long)macCodeForUSBCode:(unsigned long long)arg1;
- (id)init;

@end

