//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNLDAPServices-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLDAPServices : NSObject <CNLDAPServices>
{
}

+ (id)defaultServices;
- (void)ldap_operation_cancel:(id)arg1;
- (id)ldap_connection_query_create:(id)arg1:(int)arg2:(int)arg3:(id)arg4:(id)arg5:(id)arg6:(unsigned int)arg7:(BOOL)arg8:(CDUnknownBlockType)arg9:(CDUnknownBlockType)arg10;
- (void)ldap_connection_start:(id)arg1:(int)arg2:(CDUnknownBlockType)arg3;
- (void)ldap_connection_set_disconnect_handler:(id)arg1:(CDUnknownBlockType)arg2;
- (id)ldap_connection_create_with_url:(id)arg1;
- (id)copy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

