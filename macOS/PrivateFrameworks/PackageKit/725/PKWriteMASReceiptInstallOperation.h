//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKWriteMASReceiptInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;
}

- (void)main;
- (BOOL)_addAppStoreReceipt:(id)arg1 forPackageSpecifier:(id)arg2 error:(id *)arg3;
- (id)_receiptPathInBundle:(id)arg1;
- (int)installState;

@end

