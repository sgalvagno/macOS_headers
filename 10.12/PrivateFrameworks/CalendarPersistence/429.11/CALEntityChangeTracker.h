//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALChangeTracker.h>

@interface CALEntityChangeTracker : CALChangeTracker
{
    BOOL _internal;
}

+ (id)externalChangeWithType:(int)arg1 withEntity:(id)arg2;
+ (id)changeWithType:(int)arg1 withEntity:(id)arg2;
- (id)initWithTarget:(id)arg1 withAction:(int)arg2;
- (BOOL)isInternal;
- (void)setInternal:(BOOL)arg1;

@end

