//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUMFiWriteRequest : NSObject
{
    CUMFiWriteRequest *next;
    NSData *_data;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

