//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSKChangeEntry : NSObject
{
    id mChangeSource;
    NSMutableArray *mChanges;
}

@property(readonly, nonatomic) NSMutableArray *changes; // @synthesize changes=mChanges;
@property(readonly, nonatomic) id changeSource; // @synthesize changeSource=mChangeSource;
- (void)dealloc;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end

