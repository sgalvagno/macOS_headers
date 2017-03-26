//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) NSArray *replies; // @synthesize replies=_replies;
@property(retain) GKTurnBasedExchangeInternal *internal; // @synthesize internal=_internal;
@property(retain) GKTurnBasedParticipant *sender; // @synthesize sender=_sender;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
@property GKTurnBasedMatch *match; // @synthesize match=_matchWeak;
@property(readonly) BOOL status;
@property(readonly) NSString *message; // @dynamic message;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(retain) NSDate *completionDate; // @dynamic completionDate;
@property(retain) NSData *data; // @dynamic data;
@property(retain) NSString *exchangeID; // @dynamic exchangeID;
@property(readonly) NSDate *sendDate; // @dynamic sendDate;
@property(retain) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

