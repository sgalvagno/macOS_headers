//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class _MSPContainerEditsRecorder;
@protocol MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditDetector : NSProxy
{
    _MSPContainerEditsRecorder *_owner;
    id <MSPMutableObject> _object;
}

+ (id)arrayOfOriginalObjectsFromArray:(id)arg1;
+ (id)originalObjectFromProxyOrObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_maps_MSPContainerEditDetectorOriginalObject;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (id)initWithObject:(id)arg1 owner:(id)arg2;

@end

