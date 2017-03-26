//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HPDClient, NSDictionary, NSLock;

@interface HPDSearchManager : NSObject
{
    HPDClient *_client;
    NSLock *_listLock;
}

+ (id)sharedSearchManager;
- (void).cxx_destruct;
- (id)bookContainingFileAtPath:(id)arg1;
- (BOOL)registerBookWithIdentifier:(id)arg1 appBundle:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4;
- (id)bookWithIdentifier:(id)arg1;
@property(readonly, copy) NSDictionary *bookList;
- (BOOL)searchForString:(id)arg1 inBooks:(id)arg2 withDelegate:(id)arg3 options:(id)arg4 contextInfo:(const void *)arg5;
- (BOOL)cancelQuery:(id)arg1;
- (BOOL)performQuery:(id)arg1 withDelegate:(id)arg2;
- (id)init;

@end

