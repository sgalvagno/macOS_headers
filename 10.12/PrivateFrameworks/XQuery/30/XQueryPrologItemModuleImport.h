//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryPrologItemBehavior-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemModuleImport : NSObject <XQueryPrologItemBehavior>
{
    NSString *namespaceString;
    NSArray *locations;
    NSString *prefix;
    long long line;
}

+ (id)moduleImport:(id)arg1 atLocations:(id)arg2 forPrefix:(id)arg3 atLine:(long long)arg4;
- (void)finalize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

