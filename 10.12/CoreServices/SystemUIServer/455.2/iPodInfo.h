//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface iPodInfo : NSObject
{
    _Bool _handled;
    _Bool _diskMode;
    _Bool _mounted;
    _Bool _configured;
    _Bool _injectRequested;
    _Bool _ejectRequested;
    _Bool _unmountDisallowedDueToLock;
    unsigned int _userClient;
    unsigned int _type;
    unsigned int _style;
    unsigned int _lockCount;
    NSString *_revision;
    NSString *_diskIdentifier;
    NSString *_mountpoint;
    NSString *_name;
    NSNumber *_GUID;
}

+ (unsigned int)totalLockCount;
+ (id)iPodInfoWithGUID:(id)arg1 diskIdentifier:(id)arg2 mountpoint:(id)arg3 name:(id)arg4 type:(unsigned int)arg5 style:(unsigned int)arg6;
+ (id)iPodInfoWithGUID:(id)arg1 type:(unsigned int)arg2 style:(unsigned int)arg3;
@property(nonatomic) unsigned int lockCount; // @synthesize lockCount=_lockCount;
@property(nonatomic) _Bool unmountDisallowedDueToLock; // @synthesize unmountDisallowedDueToLock=_unmountDisallowedDueToLock;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *GUID; // @synthesize GUID=_GUID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *mountpoint; // @synthesize mountpoint=_mountpoint;
@property(retain, nonatomic) NSString *diskIdentifier; // @synthesize diskIdentifier=_diskIdentifier;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned int userClient; // @synthesize userClient=_userClient;
@property(nonatomic) _Bool ejectRequested; // @synthesize ejectRequested=_ejectRequested;
@property(nonatomic) _Bool injectRequested; // @synthesize injectRequested=_injectRequested;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) _Bool mounted; // @synthesize mounted=_mounted;
@property(nonatomic) _Bool diskMode; // @synthesize diskMode=_diskMode;
@property(nonatomic) _Bool handled; // @synthesize handled=_handled;
- (void).cxx_destruct;
- (void)decrementLockCount;
- (void)incrementLockCount;
- (void)setDiskIdentifier:(id)arg1 mountpoint:(id)arg2 name:(id)arg3;
- (void)setName:(id)arg1 mountpoint:(id)arg2;
- (void)dealloc;
- (id)initWithGUID:(id)arg1 diskIdentifier:(id)arg2 mountpoint:(id)arg3 name:(id)arg4 type:(unsigned int)arg5 style:(unsigned int)arg6;

@end

