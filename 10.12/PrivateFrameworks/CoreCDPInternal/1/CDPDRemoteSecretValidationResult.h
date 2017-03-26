//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDevice, NSDictionary, NSString;

@interface CDPDRemoteSecretValidationResult : NSObject
{
    BOOL _userDidCancel;
    BOOL _userDidReset;
    unsigned long long _secretType;
    CDPDevice *_device;
    NSString *_validSecret;
    NSDictionary *_recoveredInfo;
}

@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
@property(copy, nonatomic) NSString *validSecret; // @synthesize validSecret=_validSecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) BOOL userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) BOOL userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property(nonatomic) unsigned long long secretType; // @synthesize secretType=_secretType;
- (void).cxx_destruct;

@end

