//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFContextManager : NSObject
{
    struct __CFArray *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;
- (void)dealloc;
- (void)removeContextProvider:(id)arg1;
- (BOOL)addContextProvider:(id)arg1;
- (id)_serverName;
- (void)_stopListening;
- (void)_startListening;
- (void)_collateContextsIntoArray:(id)arg1;
- (id)init;

@end

