//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MACAddress : NSObject
{
}

+ (void)removeMACAddressSeparatorsFromString:(id)arg1;
+ (BOOL)validMACAddressString:(id)arg1;
+ (id)stringFromMACAddressData:(id)arg1;
+ (id)macAddressDataFromString:(id)arg1;
+ (BOOL)parseMACAddress:(const char *)arg1 intoHexString:(char *)arg2;

@end

