//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/SPCConnection-Protocol.h>

@class NSString;
@protocol OS_xpc_object, SPCXPCWrapperDelegate;

@interface SPCXPCWrapper : NSObject <SPCConnection>
{
    id <SPCXPCWrapperDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) id <SPCXPCWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL available;
- (void)sendMessage:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)_deserializeMessage:(id)arg1;
- (void)dealloc;
- (void)close;
- (void)startListening;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

