//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSProgressWithRemoteParent : NSProgress
{
    NSXPCConnection *_parentConnection;
    unsigned long long _sequence;
}

@property unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain) NSXPCConnection *parentConnection; // @synthesize parentConnection=_parentConnection;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3;
- (void)_updateFractionCompleted:(id)arg1;
- (void)dealloc;

@end

