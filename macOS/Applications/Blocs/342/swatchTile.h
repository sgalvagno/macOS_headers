//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSString;

@interface swatchTile : NSObject
{
    NSString *_hexValue;
    NSString *_swatchID;
    NSString *_swatchName;
    NSColor *_swatchNSColor;
}

@property(retain) NSColor *swatchNSColor; // @synthesize swatchNSColor=_swatchNSColor;
@property(retain) NSString *swatchName; // @synthesize swatchName=_swatchName;
@property(retain) NSString *swatchID; // @synthesize swatchID=_swatchID;
@property(retain) NSString *hexValue; // @synthesize hexValue=_hexValue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

