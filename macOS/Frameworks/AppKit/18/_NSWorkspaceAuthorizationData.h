//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSWorkspaceAuthorizationData : NSObject
{
    CDStruct_48875a69 _authExt;
    struct AuthorizationOpaqueRef *_auth;
    long long _type;
}

@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) struct AuthorizationOpaqueRef *auth; // @synthesize auth=_auth;
@property(readonly) CDStruct_48875a69 authExt; // @synthesize authExt=_authExt;
- (void)dealloc;
- (id)initWithAuth:(struct AuthorizationOpaqueRef *)arg1 externalForm:(CDStruct_48875a69)arg2 type:(long long)arg3;

@end

