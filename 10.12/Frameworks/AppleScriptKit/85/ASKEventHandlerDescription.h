//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSCoding-Protocol.h>

@class NSString;

@interface ASKEventHandlerDescription : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_commandName;
    NSString *_suiteName;
    NSString *_terminologyName;
    NSString *_terminologyParameters;
    NSString *_categoryName;
    NSString *_actionSelectorName;
    unsigned int _eventClass;
    unsigned int _eventID;
    Class _eventHandlerDelegateClass;
    Class _eventHandlerDataSourceClass;
    Class _eventHandlerClass;
    Class _eventHandlerImplementorClass;
    NSString *_notificationName;
    BOOL _processOnLoad;
}

+ (id)descriptionWithName:(id)arg1 dictionary:(id)arg2;
- (id)description;
- (BOOL)isKindOfEventHandlerDescription:(id)arg1;
- (id)eventHandlerInstanceWithObject:(id)arg1;
- (id)eventHandlerInstance;
- (void)setProcessOnLoad:(BOOL)arg1;
- (BOOL)processOnLoad;
- (void)setEventHandlerDataSourceClass:(Class)arg1;
- (Class)eventHandlerDataSourceClass;
- (void)setEventHandlerDelegateClass:(Class)arg1;
- (Class)eventHandlerDelegateClass;
- (void)setEventHandlerImplementorClass:(Class)arg1;
- (Class)eventHandlerImplementorClass;
- (void)setEventHandlerClass:(Class)arg1;
- (Class)eventHandlerClass;
- (void)setEventID:(unsigned int)arg1;
- (unsigned int)eventID;
- (void)setEventClass:(unsigned int)arg1;
- (unsigned int)eventClass;
- (void)setActionSelectorName:(id)arg1;
- (id)actionSelectorName;
- (void)setNotificationName:(id)arg1;
- (id)notificationName;
- (void)setCategoryName:(id)arg1;
- (id)categoryName;
- (void)setTerminologyParameters:(id)arg1;
- (id)terminologyParameters;
- (void)setTerminologyName:(id)arg1;
- (id)terminologyName;
- (void)setSuiteName:(id)arg1;
- (id)suiteName;
- (void)setCommandName:(id)arg1;
- (id)commandName;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 dictionary:(id)arg2;

@end

