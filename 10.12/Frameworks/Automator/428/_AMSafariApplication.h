//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSString;

@interface _AMSafariApplication : SBApplication
{
}

+ (id)application;
- (void)showBookmarks;
- (void)emailContentsOf:(id)arg1;
- (id)doJavaScript:(id)arg1 in:(id)arg2;
- (void)quitSaving:(int)arg1;
- (void)print:(id)arg1 printDialog:(BOOL)arg2 withProperties:(id)arg3;
- (id)open:(id)arg1;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL frontmost;
- (id)windows;
- (id)documents;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;

@end

