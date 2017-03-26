//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAccount, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    VSAccount *_unsavedAccount;
    VSAccountStore *_accountStore;
}

@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) VSAccount *unsavedAccount; // @synthesize unsavedAccount=_unsavedAccount;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_didSaveAccount:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3;
- (id)initWithUnsavedAccount:(id)arg1 accountStore:(id)arg2;
- (id)init;

@end

