//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCGSSpace.h>

__attribute__((visibility("hidden")))
@interface _NSCGSSpace : NSCGSSpace
{
    unsigned long long _spaceID;
    unsigned char _flags;
    struct CGRect _finishedResizeRect;
}

- (void)finishedResizeForRect:(struct CGRect)arg1 ackImmediately:(BOOL)arg2;
- (unsigned long long)spaceID;
- (id)initWithSpaceID:(unsigned long long)arg1;
- (void)dealloc;

@end

