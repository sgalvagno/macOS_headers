//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DOCKTileEvent.h"

@interface DOCKTileRemovedEvent : DOCKTileEvent
{
    _Bool _animate;
}

@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (void)perform:(CDStruct_95d471ab *)arg1;
- (id)initWithTile:(id)arg1 animate:(_Bool)arg2;

@end

