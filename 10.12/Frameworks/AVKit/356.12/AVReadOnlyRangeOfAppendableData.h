//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class AVAppendableData;

__attribute__((visibility("hidden")))
@interface AVReadOnlyRangeOfAppendableData : NSData
{
    AVAppendableData *_sourceData;
    struct _NSRange _range;
}

- (void).cxx_destruct;
- (const void *)bytes;
- (unsigned long long)length;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1 ofData:(id)arg2;

@end

