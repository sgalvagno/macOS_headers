//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString, ODCServersViewController, SFAuthorizationView;

__attribute__((visibility("hidden")))
@interface ODCServersView : NSView
{
    ODCServersViewController *_controller;
    SFAuthorizationView *_authView;
    BOOL _locked;
    NSString *_remoteServerName;
    NSString *_remoteAdminName;
    NSString *_remotePassword;
}

@property(copy) NSString *remotePassword; // @synthesize remotePassword=_remotePassword;
@property(copy) NSString *remoteAdminName; // @synthesize remoteAdminName=_remoteAdminName;
@property(copy) NSString *remoteServerName; // @synthesize remoteServerName=_remoteServerName;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) SFAuthorizationView *authView; // @synthesize authView=_authView;
- (void)updateLocked;
- (void)stopUpdating;
- (void)startUpdating;
- (void)lookForServers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

