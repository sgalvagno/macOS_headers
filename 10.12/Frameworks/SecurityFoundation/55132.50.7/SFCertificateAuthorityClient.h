//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFCertificateAuthorityClient : NSObject
{
    id _reserved_SFCollaborationCertificateAuthorityClient;
}

+ (id)sharedCertificateAuthorityClient;
- (id)certificateSigningRequestWithInvitation:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2 privateKey:(struct OpaqueSecKeyRef *)arg3 keychain:(struct OpaqueSecKeychainRef *)arg4 user:(id)arg5 emailAddress:(id)arg6 accessRef:(struct OpaqueSecAccessRef *)arg7 inputParms:(id)arg8 error:(id *)arg9;
- (id)certificateAuthorityCertificatesFromInvitation:(id)arg1 sharedSecret:(id)arg2 inputParms:(id)arg3 error:(id *)arg4;

@end

