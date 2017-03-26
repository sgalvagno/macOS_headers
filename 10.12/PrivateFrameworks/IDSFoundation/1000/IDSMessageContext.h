//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary *_dict;
    id _boostContext;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property(nonatomic) long long connectionType;
@property(nonatomic) BOOL fromServerStorage;
@property(nonatomic) BOOL wantsManualAck;
@property(nonatomic) long long broadcastID;
@property(nonatomic) BOOL wantsAppAck;
@property(nonatomic) BOOL expectsPeerResponse;
- (id)serverTimestamp;
- (void)setServerTimestamp:(id)arg1;
@property(nonatomic) NSNumber *priority;
@property(nonatomic) NSNumber *broadcastTime;
@property(nonatomic) NSNumber *originalCommand;
@property(copy, nonatomic) NSString *originalDestinationDevice;
@property(copy, nonatomic) NSString *toID;
@property(copy, nonatomic) NSString *fromID;
@property(copy, nonatomic) NSString *storageGuid;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(copy, nonatomic) NSString *incomingResponseIdentifier;
@property(copy, nonatomic) NSString *outgoingResponseIdentifier;
@property(readonly, nonatomic) NSDate *serverReceivedTime;
@property(retain, nonatomic) id boostContext;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;

@end

