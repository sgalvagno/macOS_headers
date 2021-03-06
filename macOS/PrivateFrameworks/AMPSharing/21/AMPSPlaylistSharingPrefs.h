//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AMPLSharingClient, NSString;

@interface AMPSPlaylistSharingPrefs : NSObject <NSCopying>
{
    BOOL _shared;
    NSString *_name;
    unsigned long long _ID;
    unsigned long long _mediaDomain;
    AMPLSharingClient *_client;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMPLSharingClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long mediaDomain; // @synthesize mediaDomain=_mediaDomain;
@property(readonly, nonatomic) unsigned long long ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isShared) BOOL shared; // @synthesize shared=_shared;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPlaylistIsShared:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)updateWithPrefsDict:(id)arg1;
- (id)initWithDict:(id)arg1 withClient:(id)arg2;

@end

