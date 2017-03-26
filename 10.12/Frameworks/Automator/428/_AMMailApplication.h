//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSArray, NSDictionary, NSString, _AMMailMailbox;

@interface _AMMailApplication : SBApplication
{
}

- (void)synchronizeWith:(id)arg1;
- (void)performMailActionWithMessages:(id)arg1 inMailboxes:(id)arg2 forRule:(id)arg3;
- (void)mailto:(id)arg1;
- (void)importMailMailboxAt:(id)arg1;
- (void)GetURL:(id)arg1;
- (id)extractAddressFrom:(id)arg1;
- (id)extractNameFrom:(id)arg1;
- (void)checkForNewMailFor:(id)arg1;
- (BOOL)exists:(id)arg1;
- (void)quitSaving:(int)arg1;
- (void)print:(id)arg1 withProperties:(id)arg2 printDialog:(BOOL)arg3;
- (id)open:(id)arg1;
@property(readonly, copy) NSString *version;
@property(readonly) BOOL frontmost;
@property(readonly, copy) NSString *name;
- (id)windows;
- (id)documents;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;
@property BOOL useKeychain;
@property(readonly, copy) NSDictionary *memoryStatistics;
@property(readonly, copy) NSArray *logMessages;
@property BOOL logAllSocketActivity;
@property(copy) NSArray *portsToLogActivityOn;
@property(copy) NSArray *hostsToLogActivityOn;
@property(readonly, copy) NSString *primaryEmail;
@property BOOL useFixedWidthFont;
@property BOOL useAddressCompletion;
@property(readonly, copy) _AMMailMailbox *trashMailbox;
@property BOOL showOnlineBuddyStatus;
@property BOOL highlightSelectedThread;
@property BOOL fetchesAutomatically;
@property(readonly, copy) _AMMailMailbox *sentMailbox;
@property(copy) NSString *selectedSignature;
@property BOOL sameReplyFormat;
@property BOOL shouldPlayOtherMailSounds;
@property(readonly, copy) _AMMailMailbox *outbox;
@property(copy) NSString *newMailSound;
@property double messageListFontSize;
@property(copy) NSString *messageListFont;
@property double messageFontSize;
@property(copy) NSString *messageFont;
@property int levelThreeQuotingColor;
@property int levelTwoQuotingColor;
@property int levelOneQuotingColor;
@property(readonly, copy) _AMMailMailbox *junkMailbox;
@property BOOL checkSpellingWhileTyping;
@property BOOL quoteOriginalMessage;
@property BOOL includeAllOriginalMessageText;
@property(readonly, copy) _AMMailMailbox *inbox;
@property int headerDetail;
@property(readonly, copy) NSString *frameworkVersion;
@property double fixedWidthFontSize;
@property(copy) NSString *fixedWidthFont;
@property BOOL expandGroupAddresses;
@property(readonly, copy) _AMMailMailbox *draftsMailbox;
@property BOOL downloadHtmlAttachments;
@property int defaultMessageFormat;
@property BOOL colorQuotedText;
@property BOOL chooseSignatureWhenComposing;
@property(readonly) long long backgroundActivityCount;
@property long long fetchInterval;
@property(readonly, copy) NSString *applicationVersion;
@property(readonly, copy) NSArray *selection;
@property BOOL alwaysCcMyself;
@property BOOL alwaysBccMyself;
- (id)signatures;
- (id)rules;
- (id)messageViewers;
- (id)OLDMessageEditors;
- (id)mailboxes;
- (id)ldapServers;
- (id)outgoingMessages;
- (id)smtpServers;
- (id)MobileMeAccounts;
- (id)imapAccounts;
- (id)popAccounts;
- (id)accounts;

@end

