//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETMessageHeaderReader : NSObject
{
}

+ (double)sendTimeInArchive:(id)arg1;
+ (void)getSendTime:(double *)arg1 type:(unsigned short *)arg2 inArchive:(id)arg3;
+ (unsigned short)messageTypeInArchive:(id)arg1;
+ (id)identifierInArchive:(id)arg1;

@end

