//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (ICNFMCMimeDataEncoding)
+ (unsigned long long)quotedPrintableLengthOfHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)encodeQuotedPrintableForText:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (id)decodeQuotedPrintableForText:(BOOL)arg1;
@end

