//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@protocol PurgeableItem <NSObject>
@property(readonly, nonatomic) unsigned long long size;
@property(nonatomic) unsigned long long purgeOrder;
- (BOOL)purgeAndGetSize:(unsigned long long *)arg1;
@end

