//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (MailCoreAdditions)
+ (id)fileHandleForTempFile:(id *)arg1 atPath:(id)arg2 mode:(unsigned short)arg3;
+ (id)fileHandleForUniqueFile:(id *)arg1 atPath:(id)arg2 mode:(unsigned short)arg3;
+ (id)fileHandleForUniqueFile:(id *)arg1 atPath:(id)arg2 mode:(unsigned short)arg3 extension:(id)arg4;
+ (id)createFileAtPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3;
- (BOOL)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (BOOL)writeLossyString:(id)arg1;
@end

