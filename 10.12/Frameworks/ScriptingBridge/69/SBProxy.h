//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy
{
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (id)debugDescription;
- (id)description;
- (BOOL)exists;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)addToElementArray:(id)arg1 atLocation:(id)arg2;
- (unsigned int)codeInContext:(id)arg1;
- (void)setLastError:(id)arg1;
- (id)lastError;
- (void)dealloc;

@end

