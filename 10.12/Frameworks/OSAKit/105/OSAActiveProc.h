//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSAScriptView;

@interface OSAActiveProc : NSObject
{
    void *_oldRefCon;
    CDUnknownFunctionPointerType _oldActiveProc;
    CDUnknownFunctionPointerType _activeProc;
    OSAScriptView *_scriptView;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1;

@end

