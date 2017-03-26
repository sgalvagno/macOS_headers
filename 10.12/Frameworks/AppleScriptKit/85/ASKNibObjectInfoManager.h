//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ASKNibObjectInfoManager : NSObject
{
    NSString *_bundleIdentifier;
    NSMutableArray *_connectors;
}

+ (void)enableEventHandlerProcessing;
+ (void)processEventHandlers;
+ (void)addEventHandlerToProcess:(id)arg1;
+ (id)eventHandlersToProcess;
+ (void)initialize;
- (unsigned long long)indexOfConnector:(id)arg1;
- (void)removeConnector:(id)arg1;
- (void)addConnector:(id)arg1;
- (void)setConnectors:(id)arg1;
- (id)connectors;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)_pluginObjectLoaded:(id)arg1;
- (void)_finishLaunching:(id)arg1;
- (id)_eventHandlerWithName:(id)arg1;

@end

