//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDInspectorSectionViewController.h"

@class NSTextField;

@interface RDFormSendEmailSMTPInspector : RDInspectorSectionViewController
{
    NSTextField *_smtpServer;
    NSTextField *_smtpPort;
    NSTextField *_smtpUsername;
    NSTextField *_smtpPassword;
}

@property(nonatomic) __weak NSTextField *smtpPassword; // @synthesize smtpPassword=_smtpPassword;
@property(nonatomic) __weak NSTextField *smtpUsername; // @synthesize smtpUsername=_smtpUsername;
@property(nonatomic) __weak NSTextField *smtpPort; // @synthesize smtpPort=_smtpPort;
@property(nonatomic) __weak NSTextField *smtpServer; // @synthesize smtpServer=_smtpServer;
- (void).cxx_destruct;
- (void)sectionSetupWithSettings:(id)arg1;

@end

