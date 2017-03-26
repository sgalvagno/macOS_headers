//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensions/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>
{
    BOOL _canGenerateNewAttachment;
    BOOL _allowUserAttachmentSelection;
    NSString *_loggingConsent;
}

@property(nonatomic) BOOL allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property(nonatomic) BOOL canGenerateNewAttachment; // @synthesize canGenerateNewAttachment=_canGenerateNewAttachment;
@property(copy, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;
- (void).cxx_destruct;
- (id)_getHostname;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)attachmentsForParameters:(id)arg1;
- (id)attachmentsWithParams:(id)arg1;
- (id)attachmentList;
- (void)disableLogging;
- (void)enableLogging;
- (BOOL)canEnableLogging;
- (BOOL)isLoggingEnabled;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

