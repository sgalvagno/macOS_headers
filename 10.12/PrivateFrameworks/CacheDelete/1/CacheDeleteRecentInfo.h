//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CacheDelete/CacheDeleteRecent.h>

#import <CacheDelete/NSCopying-Protocol.h>
#import <CacheDelete/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CacheDeleteRecentInfo : CacheDeleteRecent <NSSecureCoding, NSCopying>
{
    NSNumber *_version;
    NSMutableDictionary *_volumes;
    NSObject<OS_dispatch_queue> *_collection_queue;
}

+ (id)cacheDeleteRecentInfo:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *collection_queue; // @synthesize collection_queue=_collection_queue;
@property(retain, nonatomic) NSMutableDictionary *volumes; // @synthesize volumes=_volumes;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)invalidateForVolume:(id)arg1;
- (void)log;
- (id)description;
- (id)lookupAmountForService:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3;
- (void)updateDiagnostics:(id)arg1 forVolume:(id)arg2 atUrgency:(int)arg3;
- (id)diagnosticsForVolume:(id)arg1 atUrgency:(int)arg2;
- (void)updateDiagnostics:(id)arg1 forService:(id)arg2 onVolume:(id)arg3 atUrgency:(int)arg4;
- (id)diagnosticsForService:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3;
- (BOOL)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 onVolume:(id)arg3 atUrgency:(int)arg4 pushed:(BOOL)arg5;
- (void)removeServiceInfo:(id)arg1;
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyInvalidsForVolume:(id)arg1 atUrgency:(int)arg2;
- (BOOL)validateForVolume:(id)arg1 andService:(id)arg2 atUrgency:(int)arg3;
- (id)initWithVolumes:(id)arg1;

@end

