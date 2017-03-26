//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthSyncPersistedState : BRCPersistedState
{
    BOOL _needsSyncDown;
    NSDate *_lastSyncDownDate;
    CKServerChangeToken *_changeToken;
    unsigned long long _requestID;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
@property(nonatomic) BOOL needsSyncDown; // @synthesize needsSyncDown=_needsSyncDown;
@property(readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)allocateNextRequestID;
- (void)zoneHealthWasReset;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneHealthState:(id)arg1;

@end

