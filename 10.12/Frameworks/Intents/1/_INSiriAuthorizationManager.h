//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/_INSiriAuthorizationManagerExport-Protocol.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>
{
}

+ (id)_tccAccessInfoForBundle:(id)arg1;
+ (BOOL)_siriEnabled;
+ (BOOL)_isSiriAuthorizationRestricted;
+ (long long)_siriAuthorizationStatusForAppID:(id)arg1;
+ (void)_requestSiriAuthorization:(CDUnknownBlockType)arg1 auditToken:(CDStruct_6ad76789)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

