//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAContext.h>

__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext
{
    struct Context *_impl;
}

- (struct Context *)renderContext;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createSlot;
- (void)invalidateFences;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (BOOL)valid;
- (id)options;
- (void)setEventMask:(unsigned int)arg1;
- (unsigned int)eventMask;
- (void)setRestrictedHostProcessId:(int)arg1;
- (int)restrictedHostProcessId;
- (void)setDisplayMask:(unsigned int)arg1;
- (unsigned int)displayMask;
- (void)setDisplayNumber:(unsigned int)arg1;
- (unsigned int)displayNumber;
- (void)setLayer:(id)arg1;
- (id)layer;
- (void)setContentsFormat:(id)arg1;
- (id)contentsFormat;
- (void)setColorMatchUntaggedContent:(BOOL)arg1;
- (BOOL)colorMatchUntaggedContent;
- (void)setCommitPriority:(unsigned int)arg1;
- (unsigned int)commitPriority;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpace;
- (unsigned int)contextId;
- (void)dealloc;
- (void)invalidate;
- (id)initWithCGSConnection:(unsigned int)arg1 options:(id)arg2;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 localContext:(_Bool)arg2;

@end

