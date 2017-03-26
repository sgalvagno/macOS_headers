//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, XSEventMonitorRule;

@interface XSEventMonitorRuleAction : NSObject
{
    XSEventMonitorRule *_rule;
    NSDictionary *_configurationDictionary;
    BOOL _dirty;
}

+ (id)keyPathsForValuesAffectingDirtyState;
+ (id)actionWithConfigurationDictionary:(id)arg1 rule:(id)arg2;
+ (Class)classForActionType:(id)arg1;
+ (id)actionType;
@property(getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain) XSEventMonitorRule *rule; // @synthesize rule=_rule;
- (void)removeDirtyConfigObservers;
- (void)addDirtyConfigObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setConfigurationFromDictionary:(id)arg1;
- (id)configurationDictionary;
- (id)initWithConfigurationDictionary:(id)arg1 rule:(id)arg2;
- (void)dealloc;
- (id)init;

@end

