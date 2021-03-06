//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PAShareKitSharingService;

@interface PAShareKitSession : NSObject
{
    NSString *_uuid;
    PAShareKitSharingService *_service;
    NSArray *_versionsToShare;
    NSArray *_contentToShare;
    unsigned long long _numberOfSharedFiles;
    NSArray *_sharedItems;
    NSArray *_sharedVersions;
    long long _contentScope;
    NSMutableDictionary *_animationData;
}

+ (id)findSessionInItems:(id)arg1;
@property long long contentScope; // @synthesize contentScope=_contentScope;
@property(retain, nonatomic) NSArray *sharedVersions; // @synthesize sharedVersions=_sharedVersions;
@property(retain, nonatomic) NSArray *sharedItems; // @synthesize sharedItems=_sharedItems;
@property(nonatomic) unsigned long long numberOfSharedFiles; // @synthesize numberOfSharedFiles=_numberOfSharedFiles;
@property(readonly, nonatomic) NSArray *contentToShare; // @synthesize contentToShare=_contentToShare;
@property(readonly, nonatomic) PAShareKitSharingService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSArray *versionsToShare; // @synthesize versionsToShare=_versionsToShare;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)firstShareable;
- (id)hasErrors;
- (BOOL)validate:(CDUnknownBlockType)arg1;
- (void)_prepareShareablesWithParameters:(id)arg1;
- (void)prepareShareablesForState:(int)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (BOOL)containsPhotoStreamItem;
- (id)animationDataForVersion:(id)arg1;
- (void)setAnimationData:(id)arg1 forVersion:(id)arg2;
- (void)dealloc;
- (void)updateVersionsToShare:(id)arg1 contentToShare:(id)arg2;
- (id)initWithService:(id)arg1 versionsToShare:(id)arg2 contentToShare:(id)arg3;

@end

