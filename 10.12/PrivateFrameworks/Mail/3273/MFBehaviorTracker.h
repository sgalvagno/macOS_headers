//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDSession, NSMutableDictionary, NSOperationQueue;

@interface MFBehaviorTracker : NSObject
{
    NSMutableDictionary *_activeValuesByAttributeName;
    CDSession *_session;
    NSOperationQueue *_taskQueue;
}

@property(readonly, nonatomic) NSOperationQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) CDSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)valueForecastsForAttributeName:(id)arg1 values:(id)arg2;
- (id)_attributeForName:(id)arg1;
- (void)endAllBehaviorsForAttribute:(id)arg1;
- (void)beginBehaviorWithValues:(id)arg1 forAttribute:(id)arg2;
- (id)init;

@end

