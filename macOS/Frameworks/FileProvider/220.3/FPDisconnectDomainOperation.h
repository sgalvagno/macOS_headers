//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPProviderDomain, NSProgress;

@interface FPDisconnectDomainOperation : FPActionOperation
{
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)cancel;
- (void)_tryDisconnectingSafely:(BOOL)arg1;
- (id)initWithDomain:(id)arg1;

@end

