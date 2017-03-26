//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RWITarget;
@protocol RWIDriverDelegate, RWIDriverSessionProvider;

@interface RWIDriver : NSObject
{
    id <RWIDriverDelegate> _delegate;
    RWITarget *_target;
    NSString *_identifier;
    NSString *_name;
    BOOL _active;
    BOOL _registered;
    id <RWIDriverSessionProvider> _sessionProvider;
}

@property(retain, nonatomic) id <RWIDriverSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(readonly, nonatomic) RWITarget *target; // @synthesize target=_target;
@property(readonly, nonatomic, getter=isRegistered) BOOL registered; // @synthesize registered=_registered;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RWIDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)sessionWithIdentifier:(id)arg1;
- (void)markAsRegistered;
- (void)changeActiveState:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 isActive:(BOOL)arg3 target:(id)arg4;

@end

