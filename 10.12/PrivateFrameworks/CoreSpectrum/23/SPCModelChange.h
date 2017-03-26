//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPCObject;

@interface SPCModelChange : NSObject
{
    SPCObject *_changedObject;
    NSString *_changeType;
    NSString *_logicalPath;
    id _proposedValue;
    NSString *_modelPath;
}

@property(copy) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain) id proposedValue; // @synthesize proposedValue=_proposedValue;
@property(copy) NSString *logicalPath; // @synthesize logicalPath=_logicalPath;
@property(copy) NSString *changeType; // @synthesize changeType=_changeType;
@property SPCObject *changedObject; // @synthesize changedObject=_changedObject;
@property(readonly) BOOL objectWasRemoved;
@property(readonly) BOOL objectWasModified;
@property(readonly) BOOL objectWasAdded;
- (id)description;
- (void)dealloc;

@end

