//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameController/GCExtendedGamepad.h>

@class NSData;

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad
{
    NSData *snapshotData;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (id)init;
@property(copy) NSData *snapshotData; // @synthesize snapshotData;

@end

