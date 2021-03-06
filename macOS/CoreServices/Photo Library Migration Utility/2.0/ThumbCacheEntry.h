//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class XTIndexProvider;

@interface ThumbCacheEntry : NSObject
{
    void *_data;
    long long _size;
    XTIndexProvider *_indexProvider;
}

- (id)indexProvider;
- (long long)size;
- (void *)data;
- (void)dealloc;
- (id)initWithData:(void *)arg1 size:(long long)arg2 indexProvider:(id)arg3;

@end

