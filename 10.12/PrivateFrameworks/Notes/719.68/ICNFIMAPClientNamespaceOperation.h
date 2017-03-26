//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFIMAPSingleClientOperation.h>

@class NSArray, NSString;
@protocol ICNFIMAPAccount;

@interface ICNFIMAPClientNamespaceOperation : ICNFIMAPSingleClientOperation
{
    id <ICNFIMAPAccount> _account;
    NSString *_separatorChar;
    NSArray *_privateNamespaces;
    NSArray *_publicNamespaces;
    NSArray *_sharedNamespaces;
}

@property(copy, nonatomic) NSArray *sharedNamespaces; // @synthesize sharedNamespaces=_sharedNamespaces;
@property(copy, nonatomic) NSArray *publicNamespaces; // @synthesize publicNamespaces=_publicNamespaces;
@property(copy, nonatomic) NSArray *privateNamespaces; // @synthesize privateNamespaces=_privateNamespaces;
@property(copy, nonatomic) NSString *separatorChar; // @synthesize separatorChar=_separatorChar;
@property(retain, nonatomic) id <ICNFIMAPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithAccount:(id)arg1 separatorChar:(id)arg2;

@end

